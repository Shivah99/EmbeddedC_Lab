#Write a shell script that accepts a file name, starting and ending line numbers as arguments and displays all the lines between the given line numbers.
#!/bin/sh
echo -e "contents of file \n`cat $1`"
echo -e "content from line $2 to $3 is \n"
echo -e "`head -$3 $1 | tail +$2 `"



