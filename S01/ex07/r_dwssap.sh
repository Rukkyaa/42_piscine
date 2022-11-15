#!/bin/sh
cat /etc/passwd | cut -d : -f 1 | rev | sed -n '0~2p' | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' , | sed 's/,$/./g' | sed 's/,/, /g' 
