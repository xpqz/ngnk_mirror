#!/usr/bin/env sh
d="$(dirname "$0")"
cd "$d"
echo 'aoc20 tests'
../../k ../../l/runparts.k 15,23
