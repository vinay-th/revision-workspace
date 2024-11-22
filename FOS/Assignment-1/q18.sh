#!/bin/sh
# 18. Check the current working directory and who is the user then make a directory and a file in it
# named as “Demo.sh”. Change its permission to make it executable and then rename that file with
# “New_file.sh”
echo "Current working dir is : $(pwd)"
echo "Current user is : $(whoami)"

touch Demo.sh

chmod +x demo.sh
mv demo.sh New_File.sh

rm New_File.sh
