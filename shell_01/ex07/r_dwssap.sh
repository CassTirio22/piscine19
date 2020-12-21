#!/bin/sh
cat /etc/passwd | sed -e /#/d | sed -n 'n;p' | sed 's/:.*//g'| rev | sort -r | sed -n -e "${FT_LINE1},${FT_LINE2}p" | tr "\n" " " | sed 's/ /, /g' | rev | sed 's/ ,/./' | rev
