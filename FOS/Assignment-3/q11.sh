#!/bin/sh
# 11. Create a demo.txt file contain list of atleast 20 name of the cities and implement following
cat <<EOF >city.txt
Mumbai
Delhi
Bengaluru
Hyderabad
Chennai
Kolkata
Pune
Ahmedabad
Jaipur
Surat
Lucknow
Kanpur
Nagpur
Bhopal
Patna
Indore
Vadodara
Coimbatore
Thiruvananthapuram
Varanasi
EOF
# commands:
# Cut the 2 -4 characters from`` all cities
cut -c 2,4 city.txt
# Sort all city names
sort city.txt
# Display first five cities
head -5
# Display last five cities
tail -5
