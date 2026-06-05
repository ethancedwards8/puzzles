{
  inputs.nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";

  outputs = inputs@{ self, nixpkgs, ... }:
  let
      forAllSystems = nixpkgs.lib.genAttrs nixpkgs.lib.systems.flakeExposed;
  in
  {
      devShell = forAllSystems (system:
        let
          pkgs = import nixpkgs { inherit system; };
        in
        with pkgs;
        mkShell {
          buildInputs = [
            binutils
          ];
          shellHook = '' ${git}/bin/git pull origin master '';
        }
      );
  };
}
