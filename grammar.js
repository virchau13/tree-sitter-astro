/// <reference types="tree-sitter-cli/dsl" />

const HTML = require('tree-sitter-html/grammar');

module.exports = grammar(HTML, {
    name: 'astro',

    externals: ($, orig) => [
        $._frontmatter_start,
        $._interpolation_start,
    ].concat(orig),

    rules: {
        fragment: ($, orig) => seq(
            optional($.frontmatter),
            orig
        ),

        _node: ($, orig) => choice(
            $.interpolation,
            orig,
        ),

        frontmatter: $ => seq(
            alias($._frontmatter_start, '---'),
            optional($.raw_text),
            '---'
        ),
        
        attribute: ($, orig) => choice(
            orig,
            seq(
                $.attribute_name,
                '=',
                $.interpolation
            )
        ),
        
        interpolation: $ => seq(
            alias($._interpolation_start, '{'),
            optional($.raw_text),
            '}'
        ),

        /* Astro doesn't provide any way to escape curly braces apart from 
         * the standard HTML method of e.g. `&x30;` */
        text: $ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/
    }
});

