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
```
autocmd BufRead,BufEnter *.astro set filetype=astro
```
in `~/.config/nvim/ftdetect/astro.vim`, or put
```
vim.filetype.add({
    extension = {
        astro = "astro"
    }
})
```
in `~/.config/nvim/ftdetect/astro.lua`.

### Parser dependencies

If the syntax highlighting doesn't work for embedded CSS/JSX, make sure you have all of the following tree-sitter parsers installed:

- `css` (for CSS in `style` elements)
- `typescript` (for the frontmatter)
- `tsx` (for interpolations)

If it still doesn't work after that, open an issue.
