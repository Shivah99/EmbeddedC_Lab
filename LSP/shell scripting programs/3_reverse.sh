#Write script to print given number in reverse order, for eg. If no is 123  must print as 321
#!/bin/sh


n=$1
rev=0
tmp=0

while [ $n -gt 0 ]
do
tmp=$(( $n % 10))
rev=$(( $rev * 10 + $tmp))
n=$(( $n / 10 ))
done
echo "reverse $n1 is $rev"
