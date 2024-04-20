/**
 * @file Astro grammar for tree-sitter
 * @author Vir Chaudhury <virchau13@hexular.net>
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const HTML = require('tree-sitter-html/grammar');

module.exports = grammar(HTML, {
    name: 'astro',

    externals: ($, original) => original.concat([
        $._html_interpolation_start,
        $._html_interpolation_end,
        $.frontmatter_js_block,
        $.attribute_js_expr,
        $.permissible_text,
    ]),

    rules: {
        document: $ => seq(
            optional($.frontmatter),
            repeat($._node),
        ),

        _node: ($, original) => choice(
            $.html_interpolation,
            original,
        ),

        _node_with_permissible_text: $ => choice(
            $.doctype,
            $.element,
            $.script_element,
            $.style_element,
            $.html_interpolation,
            $.permissible_text,
        ),

        frontmatter: $ => seq(
            token(prec(1, '---')),
            optional($.frontmatter_js_block),
            '---',
        ),

        attribute: ($, original) => choice(
            original,
            seq(
                $.attribute_name,
                '=',
                $.attribute_interpolation,
            ),
        ),

        attribute_interpolation: $ => seq(
            token(prec(1, '{')),
            $.attribute_js_expr,
            '}'
        ),

        html_interpolation: $ => seq(
            alias($._html_interpolation_start, '{'),
            repeat($._node_with_permissible_text),
            alias($._html_interpolation_end, '}'),
        ),

        /* Astro doesn't provide any way to escape curly braces apart from
         * the standard HTML method of e.g. `&x30;` */
        text: _ => /[^<>&\s]([^<>&]*[^<>&\s])?/,
    },
});
