#!/bin/sh
# 10. Write a shell script to find biggest of two numbers.
read -p "Enter the first num: " num1
read -p "Enter the second num: " num2

if [ $num1 -gt $num2 ]; then
    echo "First number is bigger"
else
    echo "Second number is bigger"
fi
