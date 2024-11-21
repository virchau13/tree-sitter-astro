{
    description = "Tree-sitter for the Astro SSG";

    inputs = {
        flake-utils.url = "github:numtide/flake-utils";
    };

    outputs = { self, nixpkgs, flake-utils }: flake-utils.lib.eachDefaultSystem (system: let
        pkgs = nixpkgs.legacyPackages.${system};
    in {
        devShell = pkgs.mkShell {
            buildInputs = with pkgs; [
                tree-sitter
            ];
        };
        packages.default = pkgs.tree-sitter.buildGrammar {
            language = "astro";
            src = pkgs.lib.cleanSource ./.;
            version = self.shortRev or "latest";
        };
    });
}
