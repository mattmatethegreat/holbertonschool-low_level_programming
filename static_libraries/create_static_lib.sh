#!/bin/bash
gcc -Wall -pedantric -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
