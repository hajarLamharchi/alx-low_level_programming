#!/bin/bash
gcc -fPIC -shared -o test.so test.c
export LD_PRELOAD=/$PWD/test.so
