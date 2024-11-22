#!/bin/sh
# 4. Write a shell script to perform following task on student file
# a. cut city from student file and store it in new file
cut -d '|' -f 3 student.txt >city.txt
# b. cut rno and marks from student file and store it in marks file
cut -d '|' -f 1,4 student.txt >marks.txt
# c. display the student who get highest marks
sort -t '|' -k 4 -nr student.txt | head -1
# d. display only numbers from student file
grep -o '[0-9]\+' student.txt
