#!/bin/sh
# 1. Write a shell script to read n and generate a pattern given below
# 1
# 1 2
# 1 2 3
# 1 2 3 4

i=1
while [ $i -lt 5 ]; do
    j=1
    while [ $j -le $i ]; do
        echo -n "$j "
        j=$((j + 1))
    done
    echo " "
    i=$((i + 1))
done
