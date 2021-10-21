# Write shell script that will add two nos, which are supplied as command line
 # argument, and if this two nos are not given show error and its usage

#!/bin/sh

echo "Enter two numbers to ADD"
read num1
read num2
if [ $# !=  2 ]
then
	echo "$(( $num1 + $num2 ))"
else
	echo "error"
fi
