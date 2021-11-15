km@km-VirtualBox:~/KM_GIT/GDB/Supermarket_ver1$ gdb ./super 
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./super...done.
(gdb) bt
No stack.
(gdb) list
1	#include"super.h"
2	int main()
3	{
4	
5	printf("!!Welcome_/\\_ ! to our Super Market!!\n\n");
6	supermarket();
7	}(gdb) list
Line number 8 out of range; main.c has 7 lines.
(gdb) list super.h
Function "super.h" not defined.
(gdb) b main.c:6
Breakpoint 1 at 0x77a: file main.c, line 6.
(gdb) b purchase.c:2
Breakpoint 2 at 0x84c: file purchase.c, line 2.
(gdb) b purchase.c:9
Breakpoint 3 at 0x884: file purchase.c, line 9.
(gdb) b purchase.c:10
Breakpoint 4 at 0x88e: file purchase.c, line 10.
(gdb) b sales.c:2
Breakpoint 5 at 0x8d4: file sales.c, line 2.
(gdb) b sales.c:15
Breakpoint 6 at 0x921: file sales.c, line 15.
(gdb) b stock.c:11
Breakpoint 7 at 0x9ba: file stock.c, line 11.
(gdb) b stock.c:16
Breakpoint 8 at 0x9ed: file stock.c, line 16.
(gdb) r
Starting program: /home/km/KM_GIT/GDB/Supermarket_ver1/super 
!!Welcome_/\_ ! to our Super Market!!


Breakpoint 1, main () at main.c:6
6	supermarket();
(gdb) p s
$1 = 500
(gdb) p n
No symbol "n" in current context.
(gdb) c
Continuing.
1)To check available stock 
2)To purchase new stock 
3)To sell items 
To exit enter any other key
1
Available stock= 500
1)To check available stock 
2)To purchase new stock 
3)To sell items 
To exit enter any other key
4
Thank you! for shopping.
[Inferior 1 (process 4073) exited normally]
(gdb) p a
No symbol "a" in current context.
(gdb) p s
$2 = 500
(gdb) c
The program is not being run.
(gdb) r
Starting program: /home/km/KM_GIT/GDB/Supermarket_ver1/super 
!!Welcome_/\_ ! to our Super Market!!


Breakpoint 1, main () at main.c:6
6	supermarket();
(gdb) c
Continuing.
1)To check available stock 
2)To purchase new stock 
3)To sell items 
To exit enter any other key
3

Breakpoint 5, sales () at sales.c:6
6	sell();
(gdb) c
Continuing.
Enter the items to be sold:
 234

Breakpoint 6, sell () at sales.c:15
15	        if(s>items)
(gdb) p s
$3 = 500
(gdb) c
Continuing.

Breakpoint 8, deletestock (n=234) at stock.c:16
16	      printf("%d Items sold Successfully \n",n);
(gdb) p s
$4 = 266
(gdb) p n
$5 = 234
(gdb) c
Continuing.
234 Items sold Successfully 
1)To check available stock 
2)To purchase new stock 
3)To sell items 
To exit enter any other key
1
Available stock= 266
1)To check available stock 
2)To purchase new stock 
3)To sell items 
To exit enter any other key
2

Breakpoint 2, purchase () at purchase.c:4
4	{
(gdb) 345
Undefined command: "345".  Try "help".
(gdb) c
Continuing.

Enter the items to be purchased: 234

Breakpoint 3, purchase () at purchase.c:9
9		if(s>0)
(gdb) p s
$6 = 266
(gdb) c
Continuing.

Breakpoint 4, purchase () at purchase.c:10
10	    addstock(items);
(gdb) p s
$7 = 266
(gdb) n

Breakpoint 7, addstock (n=234) at stock.c:11
11	    printf("Purchase of %d items  Successful\n",n);
(gdb) c
Continuing.
Purchase of 234 items  Successful
1)To check available stock 
2)To purchase new stock 
3)To sell items 
To exit enter any other key
3

Breakpoint 5, sales () at sales.c:6
6	sell();
(gdb) c
Continuing.
Enter the items to be sold:
 34

Breakpoint 6, sell () at sales.c:15
15	        if(s>items)
(gdb) p s
$8 = 500
(gdb) p s
$9 = 500
(gdb) s
17	            deletestock(items);
(gdb) c
Continuing.

Breakpoint 8, deletestock (n=34) at stock.c:16
16	      printf("%d Items sold Successfully \n",n);
(gdb) c
Continuing.
34 Items sold Successfully 
1)To check available stock 
2)To purchase new stock 
3)To sell items 
To exit enter any other key
4
Thank you! for shopping.
[Inferior 1 (process 4078) exited normally]
(gdb) clear
Deleted breakpoint 8 
(gdb) 
No breakpoint at this line.
(gdb) 
No breakpoint at this line.
(gdb) clear
No breakpoint at this line.
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x000055555555477a in main at main.c:6
	breakpoint already hit 1 time
2       breakpoint     keep y   0x000055555555484c in purchase 
                                                   at purchase.c:2
	breakpoint already hit 1 time
3       breakpoint     keep y   0x0000555555554884 in purchase 
                                                   at purchase.c:9
	breakpoint already hit 1 time
4       breakpoint     keep y   0x000055555555488e in purchase 
                                                   at purchase.c:10
	breakpoint already hit 1 time
5       breakpoint     keep y   0x00005555555548d4 in sales at sales.c:2
	breakpoint already hit 2 times
6       breakpoint     keep y   0x0000555555554921 in sell at sales.c:15
	breakpoint already hit 2 times
7       breakpoint     keep y   0x00005555555549ba in addstock 
                                                   at stock.c:11
	breakpoint already hit 1 time
(gdb) delete 1
(gdb) delete 2
(gdb) i b
Num     Type           Disp Enb Address            What
3       breakpoint     keep y   0x0000555555554884 in purchase 
                                                   at purchase.c:9
	breakpoint already hit 1 time
4       breakpoint     keep y   0x000055555555488e in purchase 
                                                   at purchase.c:10
	breakpoint already hit 1 time
5       breakpoint     keep y   0x00005555555548d4 in sales at sales.c:2
	breakpoint already hit 2 times
6       breakpoint     keep y   0x0000555555554921 in sell at sales.c:15
	breakpoint already hit 2 times
7       breakpoint     keep y   0x00005555555549ba in addstock 
                                                   at stock.c:11
	breakpoint already hit 1 time
(gdb) delete 3
(gdb) delete 4
(gdb) delete 5
(gdb) delete 6
(gdb) delete 7
(gdb) i b
No breakpoints or watchpoints.
(gdb) c
The program is not being run.
(gdb) 
