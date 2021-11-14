km@km-VirtualBox:~/KM_GIT/GDB$ gdb ./1_gdb_sample
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
Reading symbols from ./1_gdb_sample...done.
(gdb) r
Starting program: /home/km/KM_GIT/GDB/1_gdb_sample 

Program received signal SIGFPE, Arithmetic exception.
0x0000555555554684 in error_with_code () at 1_gdb_sample.c:59
59	    result = 10 / divide_value;
(gdb) b 59
Breakpoint 1 at 0x55555555467e: file 1_gdb_sample.c, line 59.
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x000055555555467e in error_with_code 
                                                   at 1_gdb_sample.c:59
(gdb) r
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: /home/km/KM_GIT/GDB/1_gdb_sample 

Breakpoint 1, error_with_code () at 1_gdb_sample.c:59
59	    result = 10 / divide_value;
(gdb) s

Program received signal SIGFPE, Arithmetic exception.
0x0000555555554684 in error_with_code () at 1_gdb_sample.c:59
59	    result = 10 / divide_value;
(gdb) p result
$1 = 2880
(gdb) p divide_value
$2 = 0
(gdb) p Change_Value
$3 = 0
(gdb) s

Program terminated with signal SIGFPE, Arithmetic exception.
The program no longer exists.
(gdb) s
The program is not being run.
(gdb) s
The program is not being run.
(gdb) b
Breakpoint 2 at 0x555555554684: file 1_gdb_sample.c, line 59.
(gdb) c
The program is not being run.
(gdb) r
Starting program: /home/km/KM_GIT/GDB/1_gdb_sample 

Breakpoint 1, error_with_code () at 1_gdb_sample.c:59
59	    result = 10 / divide_value;
(gdb) c
Continuing.

Breakpoint 2, 0x0000555555554684 in error_with_code () at 1_gdb_sample.c:59
59	    result = 10 / divide_value;
(gdb) c
Continuing.

Program received signal SIGFPE, Arithmetic exception.
0x0000555555554684 in error_with_code () at 1_gdb_sample.c:59
59	    result = 10 / divide_value;
(gdb) 
