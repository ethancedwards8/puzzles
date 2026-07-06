{
  inputs.nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";

  outputs = inputs@{ self, nixpkgs, ... }:
  let
      forAllSystems = nixpkgs.lib.genAttrs nixpkgs.lib.systems.flakeExposed;
  in
  {
      devShell = forAllSystems (system:
        let
          pkgs = import nixpkgs { inherit system; config.allowUnfree = true; };
        in
        with pkgs;
        mkShell {
          buildInputs = [
            binutils
            leetgpu
            leetgo
            leetsolv
            leetcode-cli
          ];
          shellHook = '' ${git}/bin/git pull origin master '';
        }
      );
  };
}
