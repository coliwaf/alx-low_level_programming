#!/bin/bash
gcc -c -Wall -Wextra *.c && ar rc liball.a *.o && ranlib liball.a
