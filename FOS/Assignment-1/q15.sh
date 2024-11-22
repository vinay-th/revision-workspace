#!/bin/sh
# 15. Accept a file and check if the words in that file are greater than 20 print “Enough Words” else
# print “More words to enter”.
read -p "Enter the filename: " file
wc=$(wc -w <$file)

if [ $wc -gt 20 ]; then
    echo "File has enough words"
else
    echo "File has not enough words"
fi
