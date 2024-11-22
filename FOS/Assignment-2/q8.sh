#!/bin/sh
# 8. Write a shell script to print even numbers from 1 to 100. Make use of continue keyword.
for i in $(seq 1 1 100); do
    if [ $((i % 2)) -eq 0 ]; then
        echo $i
    else
        continue
    fi
done
