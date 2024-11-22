#!/bin/sh
# 4. Write a shell script to display message good morning / good afternoon / good evening/ good
# night according to the time.
echo "Enter the time: "
read time
if [ $time -ge 0 ] && [ $time -le 6 ]; then
    echo "Good Night"
elif [ $time -ge 7 ] && [ $time -le 12 ]; then
    echo "Good Morning"
elif [ $time -ge 13 ] && [ $time -le 17 ]; then
    echo "Good evening"
else
    echo "Good evening"
fi
