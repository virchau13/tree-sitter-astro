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
        $.attribute_backtick_string,
        $.permissible_text,
        $.fragment_tag_name,
    ]),

    rules: {
        document: $ => seq(
            optional($.frontmatter),
            repeat($._node),
        ),

        _node: ($, _original) => choice(
            // Same as original minus `.entity`
            // and plus `.html_interpolation`.
            // TODO add back entity highlights
            $.doctype,
            $.text,
            $.element,
            $.script_element,
            $.style_element,
            $.erroneous_end_tag,
            $.html_interpolation,
        ),

        // For use in HTML interpolations.
        _node_with_permissible_text: $ => choice(
            $.doctype,
            $.element,
            $.script_element,
            $.style_element,
            $.html_interpolation,
            $.permissible_text,
        ),

        // Allow fragment tags.
        start_tag: ($, _) => seq(
            '<',
            choice(
                seq(
                    alias($._start_tag_name, $.tag_name),
                    repeat($.attribute),
                    '>',
                ),
                $.fragment_tag_name,
            ),
        ),
        end_tag: ($, _) => seq(
            '</',
            choice(
                seq(
                    alias($._end_tag_name, $.tag_name),
                    '>',
                ),
                $.fragment_tag_name,
            ),
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
                choice(
                    $.attribute_interpolation,
                    $.attribute_backtick_string,
                ),
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
        text: _ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/,
    },
});
