#!/bin/sh
# 9. Write a shell script to print odd numbers from 1 to 100 making use of until loop.
i=1

until [ $i -ge 100 ]; do
    if [ $((i % 2)) -ne 0 ]; then
        echo $i
    fi
    i=$((i + 1))
done
