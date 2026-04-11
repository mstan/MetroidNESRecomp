#!/usr/bin/env bash
set -euo pipefail

REPO="https://github.com/mstan/nesrecomp.git"

# Parse SHA from nesrecomp.pin
SHA=$(sed -n 's/^[[:space:]]*sha[[:space:]]*=[[:space:]]*//p' nesrecomp.pin | tr -d '[:space:]')
if [ -z "$SHA" ]; then
    echo "Error: no sha found in nesrecomp.pin" >&2
    exit 1
fi

# Clone nesrecomp if missing
if [ ! -d "nesrecomp/.git" ]; then
    echo "Cloning nesrecomp..."
    git clone --recurse-submodules "$REPO" nesrecomp
fi

# Checkout pinned version
git -C nesrecomp checkout "$SHA"
git -C nesrecomp submodule update --init --recursive

# Symlink nestopia-core into project root
if [ ! -e "nestopia-core" ]; then
    ln -s nesrecomp/runner/nestopia-core nestopia-core
    echo "Created symlink: nestopia-core -> nesrecomp/runner/nestopia-core"
fi

echo "Ready — nesrecomp at $SHA"
