#!/bin/sh
# 16. Write a shell script to accept two strings from user and check if both strings are equal or not.
read -p "Enter first string: " str1
read -p "Enter second string: " str2

if [ "$str1" = "$str2" ]; then
    echo "Both strings are equal"
else
    echo "Both strings are not equal"
fi
