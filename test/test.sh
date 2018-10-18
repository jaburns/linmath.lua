#!/usr/bin/env bash
set -e
cd "$(dirname "${BASH_SOURCE[0]}")"

LUA_FILES="$(find ../lua -iname '*.c' | grep -v 'lbitlib.c' | grep -v 'lua.c')"

rm -f run_test
cc -o run_test test.c $LUA_FILES
./run_test