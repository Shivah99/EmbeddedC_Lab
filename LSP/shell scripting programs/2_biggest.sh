#!/bin/sh

echo "Enter 3 numbers"
read num1
read num2
read num3

if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]
then
	echo "$num1is bigger"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]
then
	echo "$num2 is bigger"
else
	echo "$num3 is bigger"
fi
