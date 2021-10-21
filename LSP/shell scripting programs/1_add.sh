#!/bin/sh

sum=$(($1 + $2))
if [ $# -eq  2 ]
then
echo "Sum = $sum"
else 
	echo "error"
fi

