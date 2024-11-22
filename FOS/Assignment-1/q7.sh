#!/bin/sh
# 7. Write a shell script to
# a. create a directory gls
mkdir gls
# b. create subdirectory college in gls directory
mkdir gls/college
# c. create a file f1 in college directory.
cd gls/college
touch f1
# d. copy this f1 file into home directory
cp f1 ../..
