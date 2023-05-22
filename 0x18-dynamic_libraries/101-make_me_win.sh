#!/bin/bash
wget -p https://github.com/bakiizese/alx-low_level_programming/blob/6b05aeadbfe7a3ec0049562fa7394d96d03a7d90/0x18-dynamic_libraries/inject.so
LD_PRELOAD=/$PWD/inject.so
