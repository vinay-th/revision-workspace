#!/bin/sh
# 8. Write a shell script to accept a file name from user and check that given file is exist or not if
read -p "Enter a filename: " file
if [ ! $file ]; then
    echo "Enter a valid file"
fi
# the file exist then check that given file is in sorted order or not if the file is not in sorted
# order then display file in sorted oreder in descending.
sort -t '|' -k 4,4 $file >demo.txt
if cmp -s "$file" "demo.txt"; then
    echo "The file is already sorted"
else
    echo "The file is not sorted"
    echo "The sorted file is: "
    sort -t '|' -k 4,4 $file
fi
