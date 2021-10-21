
#!/bin/sh
for file in *
do
if [ -f $file ]
then
echo " $file is  a file "
echo " no of lines in the file are: `wc -l $file` "
elif [ -d $file ]
then
echo " $file is  a directory "

fi
done

