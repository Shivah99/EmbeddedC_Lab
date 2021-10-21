 #Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it
#!/bin/sh

echo enter file name
read file
echo enter word to remmove from files
read word
echo file before removing $word:
cat $file
grep -v $word $file > temp
mv temp $file
echo file after removing $word:
cat $file
exit 0
