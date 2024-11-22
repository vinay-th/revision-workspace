#!/bin/sh
# 3. Write a shell script to create student file as follow and perform the task rno name city marks
cat >student.txt <<EOF
1|Akash|Mumbai|85
2|Nisha|Delhi|78
3|Ravi|Bangalore|90
4|Megha|Chennai|88
5|Vikas|Pune|76
6|Sneha|Kolkata|95
EOF
# a. display emp and student file horizontally
paste emp.txt student.txt
# b. display emp and student file sequence wise with tab delimeter.
cat emp.txt student.txt | tr '|' '\t'
# c. join emp and student file and display result.
join -t '|' -1 3 -2 3 emp.txt student.txt
# d. sort marks in reverse order
sort -t '|' -k 4 -nr student.txt
