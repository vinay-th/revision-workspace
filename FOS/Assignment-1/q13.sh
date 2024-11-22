#!/bin/sh
# 13. Write a shell script to find volume of cube. (side*side*side).
# Write a shell script to accept the temp in Celsius and convert it into Fahrenheit(c=F-32/1.8).
read -p "Enter the side of cube: " side
echo "Volume of the cube: $(($side * $side * $side))"

read -p "Enter the temp in Celcius: " c
f=$(echo "scale=2; $c*(9/5)+32" | bc)
echo "The temp in Fahrenheit will be: $f"
