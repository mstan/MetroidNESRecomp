#!/usr/bin/env bash
set -euo pipefail

# Initialize the framework and its nested dependencies at the commit recorded
# by this repository's gitlink.
git submodule update --init --recursive

# Symlink nestopia-core into project root
if [ ! -e "nestopia-core" ]; then
    ln -s nesrecomp/runner/nestopia-core nestopia-core
    echo "Created symlink: nestopia-core -> nesrecomp/runner/nestopia-core"
fi

echo "Ready — framework submodules initialized"
