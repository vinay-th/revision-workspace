#!/bin/sh
# 12. Write a shell script for a simple calculator to perform addition, subtraction, multiplication,
# division using case statements.
read -p "Enter first number: " a
read -p "Enter second number: " b

echo "\nTo perform following operations->\n"
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division \n"
read -p "Enter the number of operation: " opr

case $opr in
"1")
    echo "$a + $b = $((a + b))"
    ;;
"2")
    echo "$a - $b = $((a - b))"
    ;;
"3")
    echo "$a * $b = $((a * b))"
    ;;
"4")
    echo "$a / $b = $((a / b))"
    ;;
esac