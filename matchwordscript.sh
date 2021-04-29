#!/bin/bash
#match a keyword provided by the user and find the number of occurrences of that word in myexamfile.txt
echo "Type a keyword"
read key_word
grep -o -i $key_word myexamfile.txt | wc -l 
 
