#Write a shell script that accepts a list of file names as its arguments, counts and reports the occurrence of each word that is present in the first argument file on other argument files

#!/bin/sh

for i in `cat $1`
do
echo -e " word = $i\n"
grep -wc "$i" $*
echo -e "\n"
done







