#!/bin/bash
gcc -shared -o liball.so *.o
gcc -fPIC -c *.c
