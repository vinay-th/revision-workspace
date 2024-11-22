#!/bin/sh
# 10. Write a shell script to accept a number and check how many digits it contain and find sum of
# all digits.
read -p "Enter a number: " num

count=0
sum=0

while [ $num -ne 0 ]; do
    count=$((count + 1))
    sum=$((sum + (num % 10)))
    num=$((num / 10))
done

echo "The count of digit is: $count"
echo "The sum of number is: $sum"
