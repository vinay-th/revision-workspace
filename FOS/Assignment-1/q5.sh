#!/bin/sh
# 5. Write a shell script to execute following commands
# • Create a file called text and store name,age and address in it.
read -p "Enter name: " name
read -p "Enter age: " age
read -p "Enter address: " address

touch text.txt
echo "Name: $name" >text.txt
echo "Age: $age" >>text.txt
echo "Address: $address" >>text.txt

# • Display the contents of the file text on the screen.

echo "\n\nContent of text.txt: \n"

cat text.txt

rm text.txt

# • Display version of operating system.
echo "The version of OS is $(uname -r)"
