km@km-VirtualBox:~/KM_GIT/GDB$ gdb 2_grade 
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
Reading symbols from 2_grade...done.
(gdb) b 7
Breakpoint 1 at 0x75a: file 2_grade.c, line 7.
(gdb) b 8
Breakpoint 2 at 0x77c: file 2_grade.c, line 8.
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x000000000000075a in main 
                                                   at 2_grade.c:7
2       breakpoint     keep y   0x000000000000077c in main 
                                                   at 2_grade.c:8
(gdb) r
Starting program: /home/km/KM_GIT/GDB/2_grade 
enter the total marks out of 600: 543

Breakpoint 1, main () at 2_grade.c:7
7		 p=(t/600)*100;  
(gdb) p p
$1 = 4.59163468e-41
(gdb) c
Continuing.

Breakpoint 2, main () at 2_grade.c:8
8		 printf("Percentage= %.2f \n",p);
(gdb) p p
$2 = 90.5
(gdb) c
Continuing.
Percentage= 90.50 
HONOURS[Inferior 1 (process 4272) exited normally]
(gdb) Quit
(gdb) 
