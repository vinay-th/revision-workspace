#!/bin/sh
# 2. Write a shell script to display
# i. User name,
echo "Current user: $(whoami)"
# ii. Users home directory.
echo "User's home dir: $HOME"
# iii. Terminal name
echo "Terminal name: $(tty)"
# iv. Terminal type.
echo "Terminal type: $TERM"
# v. Machine name.
echo "Machine's name: $(hostname)"
