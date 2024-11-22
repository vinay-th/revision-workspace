#!/bin/sh
# 3. Write a shell script to print a given number in reverse order. Make use of while loop
read -p "Enter any number: " num
temp=$num
rev=0
rem=0

while [ $temp -ne 0 ]; do
    rem=$((temp % 10))
    rev=$((rev * 10 + rem))
    temp=$((temp / 10))
done

echo "The reversed number is: $rev"
