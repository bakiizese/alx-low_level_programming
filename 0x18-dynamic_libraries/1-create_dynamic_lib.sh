#!/usr/bin/bash
gcc -Wall -Werror -Wextra -std=gnu89 -fPIC -c *.o
gcc -shared -o liball.so *.o
