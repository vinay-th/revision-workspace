#!/bin/sh
# 13. Write a shell script to create a file with following contents:
# No Item_Name Quantity Price
# 1 Pen 45 $3.45
# 2 Pencil 25 $2.45
# 3 Eraser 5 $4.45
# 4 Pen 25 $3.45
# 5 Stapler 15 $1.45
# 6 Pen 30 $3.45
cat <<EOF >f2.txt
No Item_Name Quantity Price
1 Pen 45 \$3.45
2 Pencil 25 \$2.45
3 Eraser 5 \$4.45
4 Pen 25 \$3.45
5 Stapler 15 \$1.45
6 Pen 30 \$3.45
EOF

# Diplay all the Records starting with 'P' character.
grep "P" f2.txt
# Count all records having quantity =25
count=$(awk '$3 == 25 {count++} END {print count}' f2.txt)
echo "The count of all records having quantity =25 is: $count"
# Display the record with maximum price
awk 'NR>1 {print $0, substr($4,2)}' f2.txt | sort -k 5,5 -r | head -1
