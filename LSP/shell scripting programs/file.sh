# Write script to determine whether given file exist or not, file name is supplied as command line argument, Also check for sufficient number of command line arguments.

#!/bin/sh
if [ $# -ne 1 ]
then
    echo "Enter only 1 file name"
    exit 1
fi

if [ -f $1 ]
then
    echo "$1 file exist"
else
    echo "Sorry, $1 file does not exist"
fi
