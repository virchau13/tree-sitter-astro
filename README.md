# tree-sitter-astro

Tree-sitter grammar for the Astro web framework.

## Troubleshooting

### Parser dependencies

If the syntax highlighting doesn't work for embedded CSS/JSX, make sure you have all of the following tree-sitter parsers installed:

- `css` (for CSS in `style` elements)
- `typescript` (for the frontmatter)
- `tsx` (for interpolations)

### lazy.nvim

If you're using the [`lazy.nvim`](https://github.com/folke/lazy.nvim) plugin manager, do _not_ use the `opts` key for the nvim-treesitter plugin (it won't work, as nvim-treesitter doesn't have a `.config()` function). Use `require('nvim-treesitter.configs').setup(opts)` instead. For more information, take a look at [#16](https://github.com/virchau13/tree-sitter-astro/issues/16).

## Specification

This parser just uses the general idea that the document looks like
<pre><code>---
<i>{typescript}</i>
---
<i>{html}</i>
</pre></code>

and is essentially [tree-sitter-html](https://github.com/tree-sitter/tree-sitter-html) plus two snazzy ways to write `<script>` tags.
