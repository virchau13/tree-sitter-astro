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
        $._frontmatter_start,
        $._interpolation_start,
    ]),

    rules: {
        document: ($, original) => seq(
            optional($.frontmatter),
            original,
        ),

        _node: ($, original) => choice(
            $.interpolation,
            original,
        ),

        frontmatter: $ => seq(
            alias($._frontmatter_start, '---'),
            optional($.raw_text),
            '---',
        ),

        attribute: ($, original) => choice(
            original,
            seq(
                $.attribute_name,
                '=',
                $.interpolation,
            ),
        ),

        interpolation: $ => seq(
            alias($._interpolation_start, '{'),
            optional($.raw_text),
            '}',
        ),

        /* Astro doesn't provide any way to escape curly braces apart from
         * the standard HTML method of e.g. `&x30;` */
        text: _ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/,
    },
});
