#!/bin/sh
# 11. Write a shell script to find biggest of three numbers.
read -p "Enter first num: " num1
read -p "Enter second num: " num2
read -p "Enter third num: " num3

if [ $num1 -gt $num2 ]; then
    if [ $num1 -gt $num3 ]; then
        echo "First number is bigger"
    else
        echo "Third number is bigger"
    fi
else
    if [ $num2 -gt $num3 ]; then
        echo "Second number is bigger"
    else
        echo "Third number is bigger"
    fi
fi
