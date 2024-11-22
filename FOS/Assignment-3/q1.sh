#!/bin/sh
# 1. Write a shell script to create an emp file with following format and perform the following task
# eno|ename|city|salary
cat <<EOF >emp.txt
101|John|Mumbai|50000
102|Priya|Delhi|60000
103|Amit|Bangalore|45000
104|Sara|Chennai|55000
105|Rahul|Pune|48000
106|Neha|Kolkata|62000
EOF
# a. display first 3 lines from emp file
echo "First 3 lines"
head -3 emp.txt
# b. display last 3 lines from emp file
echo "\n\nLast 3 lines"
tail -3 emp.txt
# c. display emp file in sorted order
echo "\n\nSorted file"
sort emp.txt
# d. display eno and city from emp file
echo "\n\nOnly no and city"
cut -d '|' -f 1,3 emp.txt
rm emp.txt
