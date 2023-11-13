# tree-sitter-astro

Tree-sitter grammar for the Astro web framework.

## Specification

This parser just uses the general idea that the document looks like
<pre><code>---
<i>{typescript}</i>
---
<i>{html}</i>
</pre></code>

and is essentially [tree-sitter-html](https://github.com/tree-sitter/tree-sitter-html) plus two snazzy ways to write `<script>` tags.


## Troubleshooting

### Filetype

Neovim doesn't mark `.astro` files with the Astro filetype by default yet, so nvim-treesitter can't tell that tree-sitter-astro must be used for `.astro` files. Either put 

```vim
augroup _astro
    autocmd!
    autocmd BufRead,BufEnter *.astro set filetype=astro
augroup END
```
in `~/.config/nvim/ftdetect/astro.vim`, or put

```lua
vim.cmd([[
    augroup _astro
    autocmd!
    autocmd BufRead,BufEnter *.astro set filetype=astro
    augroup end
]])
```
in `~/.config/nvim/ftdetect/astro.lua`.

### Parser dependencies

If the syntax highlighting doesn't work for embedded CSS/JSX, make sure you have all of the following tree-sitter parsers installed:

- `css` (for CSS in `style` elements)
- `typescript` (for the frontmatter)
- `tsx` (for interpolations)

### lazy.nvim

If you're using the [`lazy.nvim`](https://github.com/folke/lazy.nvim) plugin manager, do _not_ use the `opts` key for the nvim-treesitter plugin (it won't work, as nvim-treesitter doesn't have a `.config()` function). Use `require('nvim-treesitter.configs').setup(opts)` instead. For more information, take a look at [#16](https://github.com/virchau13/tree-sitter-astro/issues/16).

If it still doesn't work after that, open an issue.
