#!/bin/bash

echo
echo nominette:
norminette -R CheckForbiddenSourceHeader

echo
echo "compile & run:"
gcc -Wall -Wextra -Werror -o rush-01 *.c

./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e

echo
./rush-01 "3 2 3 1 2 3 1 3 3 2 1 2 1 2 3 2" | cat -e

echo
./rush-01 "3 2 1 2 1 2 2 3 3 2 2 1 2 1 2 3" | cat -e

echo
./rush-01 "1 3 2 3 3 1 3 2 1 2 3 2 3 2 1 2" | cat -e

echo
./rush-01 "3 2 2 1 2 1 3 3 3 2 1 2 1 2 3 2" | cat -e

echo
./rush-01 "2 1 4 2 2 3 1 3 2 3 1 2 2 1 3 2" | cat -e

echo
./rush-01 "4 2 1 2 3 1 4 3 2 2 3 2 3 2 1 3 4 1 2 2" | cat -e

echo
./rush-01 "3 4 1 2 3 3 1 2 2 2 2 2 1 2 2 3 2 5 1 4" | cat -e

echo
./rush-01 "3 2 3 1 2 2 1 3 4 3 3 4 2 1 2 2 1 2 4 3" | cat -e

echo
./rush-01 "3 1 4 3 2 3 2 3 1 3 4 2 2 5 2 1 3 2 3 2 2 5 1 4" | cat -e

# 7x7 takes a lot of time
#echo
#./rush-01 "4 3 4 1 5 4 3 2 2 4 2 4 1 3 5 4 3 3 5 2 3 1 3 2 2 1 2 3 2 4 3 3" | cat -e

echo
echo finished
