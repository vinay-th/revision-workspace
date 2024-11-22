#!/bin/sh
# 2. Write a shell script to read n and generate a pattern given below
# 1
# 2 3
# 4 5 6
# 7 8 9 10

i=1
c=1
while [ $i -le 4 ]; do
    j=1
    while [ $j -le $i ]; do
        echo -n "$c "
        c=$((c + 1))
        j=$((j + 1))
    done
    echo ""
    i=$((i + 1))
done
