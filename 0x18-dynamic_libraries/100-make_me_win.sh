#!/bin/bash
gcc -shared -o printgm.so -fPIC gm-test.c
export LD_PRELOAD=./printgm.so
