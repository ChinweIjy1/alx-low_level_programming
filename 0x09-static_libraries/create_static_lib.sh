#!/bin/bash
gcc -c *.c
ar rc liball.a *.o
echo y | rm -l *.o
