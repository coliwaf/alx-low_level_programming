#!/bin/bash
gcc -shared -o printgm.so -fPIC ./0x18.c/gm-test.c
export LD_PRELOAD=printgm.so
