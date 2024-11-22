#!/bin/sh
# 7. Write a shell script to read number from user and print its multiplication table.

read -p "Enter a number: " n

for i in $(seq 0 1 10); do
    echo "$n * $i = $((n * i))"
done
