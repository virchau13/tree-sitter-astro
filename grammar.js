/// <reference types="tree-sitter-cli/dsl" />

const HTML = require('tree-sitter-html/grammar');

module.exports = grammar(HTML, {
    name: 'astro',

    externals: ($, orig) => [
        $._frontmatter_start,
    ].concat(orig),

    rules: {
        fragment: ($, orig) => seq(
            optional($.frontmatter),
            orig
        ),
        frontmatter: $ => seq(
            alias($._frontmatter_start, '---'),
            optional($.raw_text),
            '---'
        ),
    }
});

