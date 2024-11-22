#!/bin/sh
# 14. An employee Basic salary is input through keyboard where da is 40% of basic salary and hra is
# 20% of basic salary. Write a program to calculate gross salary.
read -p "Enter the basic salary: " sal
da=$(echo "scale=2; $sal*0.4" | bc)
hra=$(echo "scale=2; $sal*0.2" | bc)
gross=$($da + $hra + $sal)

echo "Your gross sal is $gross"
