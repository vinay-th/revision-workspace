#!/bin/sh
# 5. Write a shell script to accept a file name and check that given file is exist or not.If the file is
read -p "Enter a filename: " file
if [ ! $file ]; then
    echo "Enter a valid file"
fi
# exist then display the file content in following format.
# a. Display content in sorted order
sort $file
# b. Display first five lines from the file
head -5 $file
# c. Display last five lines from the file
tail -5 $file
# d. paste two files sequencially with “|” delimeters
read -p "Enter second file name: " f2
paste $file $f2
