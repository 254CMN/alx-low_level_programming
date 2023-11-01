#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
liball.a *.o
