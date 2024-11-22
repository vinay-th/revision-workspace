#!/bin/sh
# 8. Write a shell script to create two files f1 and f2 and perform the following operation.
# • Compare these two files.
touch f1 f2
echo "Helooooo World" >f1
echo "World" >f2
# • Display the difference of these two files.
diff f1 f2
# • Display the common between these two files.
comm f1 f2
rm f1 f2
