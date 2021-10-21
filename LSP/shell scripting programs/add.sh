
#!/bin/sh

echo "Enter two numbers to ADD"
read num1
read num2
if [ $# -le  2 ]
then
	echo "$(( $num1 + $num2 ))"
else
	echo "error"
fi
