#!/bin/sh
# 7. Write a shell script to accept a file name from user and check that given file exist or not, if
# the file exist then display all the file content
read -p "Enter a filename: " file
if [ ! $file ]; then
    echo "Enter a valid file"
    exit
fi
cat $file
