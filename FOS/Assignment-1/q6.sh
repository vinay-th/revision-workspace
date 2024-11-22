#!/bin/sh
# 6. Write a shell script to display the following menu and acts accordingly:
# i. Calendar of the current month and year.
# ii. terminal type
# iii. User name, Users home directory.
# iv. current month
# v. Machine name.
printf "Operations to perform are: \n"
echo "i. Calendar of the current month and year."
echo "ii. terminal type"
echo "iii. User name, Users home directory."
echo "iv. current month"
echo "v. Machine name."
read opr

case $opr in
"1")
    echo "Calender of the month is:"
    cal
    echo "Calender of the year is:"
    cal -y
    ;;
"2")
    echo "Terminal type is: $TERM"
    ;;
"3")
    echo "Username : $USER\nHome : $HOME"
    ;;
"4")
    echo "Current month : $(cal)"
    ;;
"5")
    echo "Machinename is : $(hostname)"
    ;;
esac