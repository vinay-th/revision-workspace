#!/bin/sh
# Create a file named “First_shell” using cat command. Check if this file is readable, writable and
# executable or not. If it is not executable then make it executable and then list out all the files and see
#  if it became execuatble.
car >First_shell <<EOF
helloooooo
EOF

[ -r First_shell ] && echo "The file is readable" || echo "The file is not readable"
[ -w First_shell ] && echo "The file is writable" || echo "The file is not writable"
[ -x First_shell ] && echo "The file is executable" || echo "The file is not executable"

rm First_shell
