#!/bin/sh
# 2. Write a shell script to perform following task on emp file
# a. display eno,ename and city from emp file
cut -d '|' -f 1,2,3 emp.txt
# b. display ename like only 2 character should display in one line
awk -F '|' '{print $2}' emp.txt | fold -w 2
# c. display ename in capital latters from emp file
awk -F '|' '{print toupper($2)}' emp.txt
# d. display emp file with tab delimeters.
cat emp.txt | tr '|' '\t'
