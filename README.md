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
