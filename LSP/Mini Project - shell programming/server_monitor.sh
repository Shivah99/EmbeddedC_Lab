<<EE
Mini Project - shell programming:

Write a network monitor application server_monitor.sh which show the below information

OS name
Architecture version
Kernel version
Internet status
IP Address
Memory Usage
Disk file systems usage
system uptime
EE
echo "OS Name:`uname `\n"
echo "Architecture Version:`uname -m`\n"

echo "Kernel Version:`uname -r`\n"
if ping -c 3 www.google.com > /dev/null  2> /dev/null 
then 
	echo "Internet status: Internet is Working\n"
else
	echo "Internet status: Internet is not Working\n" 
fi
echo "IP Address: `hostname -i`\n\n"
echo "Memory Usage: `du -sh ~ `\n\n"
echo "Disk file systems usage :`df -h ~`\n\n"
echo "system uptime :`uptime`\n\n"
