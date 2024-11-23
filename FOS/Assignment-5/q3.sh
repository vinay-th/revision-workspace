#!/bin/sh
# Write a shell script to find a file that has not been accessed since one year.

find $(pwd) -type f -atime +365
