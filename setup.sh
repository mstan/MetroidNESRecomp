#!/usr/bin/env bash
set -euo pipefail

# nesrecomp/ and recomp-ui/ are git submodules; fetch them at the commits this
# repo pins (the gitlinks recorded in the index; see .gitmodules).
git submodule update --init --recursive nesrecomp recomp-ui

# Symlink nestopia-core from nesrecomp's copy.
if [ ! -e "nestopia-core" ]; then
    ln -s nesrecomp/runner/nestopia-core nestopia-core
    echo "Created symlink: nestopia-core -> nesrecomp/runner/nestopia-core"
fi

echo "Ready - nesrecomp + recomp-ui checked out at their pinned commits."
