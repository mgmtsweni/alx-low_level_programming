#!/bin/bash
gcc -c *.c
gcc -shared -o libdynamic.so *.o
gcc -L. 0-main.c -libdynamic -o len