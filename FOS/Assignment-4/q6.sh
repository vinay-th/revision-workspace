#!/bin/sh
# 6. Write a shell script that compresses the two file separetely.
touch file1.txt
touch file2.txt
gzip file1.txt >file1.gz
gzip file2.txt >file2.gz
rm file1.txt
rm file2.txt
rm file1.gz
rm file2.gz
