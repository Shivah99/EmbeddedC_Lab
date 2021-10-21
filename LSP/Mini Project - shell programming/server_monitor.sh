# Mini Project - shell programming:

echo "OS Name:`uname `"
echo "Architecture Version:`uname -m`"

echo "Kernel Version:`uname -r`\n"
if ping -c 3 www.google.com > /dev/null  2> /dev/null 
then 
	echo "Internet status: Internet is Working"
else
	echo "Internet status: Internet is not Working" 
fi
echo "IP Address: `hostname -i`"
echo "Memory Usage: `du -sh ~ `"
echo "Disk file systems usage :`df -h ~`"
echo "system uptime :`uptime`"
