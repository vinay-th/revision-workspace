#!/bin/sh
# 4. Write a script to calculate gross salary. ( DA = 60%OF BASIC, HRA = 20%
# OF BASIC, MA = 100 and IT = 15% of BASIC)
read -p "Enter your salary: " sal
da=$(echo "scale=2; $sal*0.6" | bc)
hra=$(echo "scale=2; $sal*0.2" | bc)
ma=100
it=$(echo "scale=2; $sal*0.15" | bc)

gross=$(echo "$sal + $da + $hra + $ma - $it" | bc)
echo "Your gross salary is: $gross"
