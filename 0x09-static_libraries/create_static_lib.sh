#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
