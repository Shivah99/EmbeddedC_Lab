static:add.o sub.o
	ar -rcs libcal.a add.o sub.o
add.o:
	gcc -c add.c
sub.o:
	gcc -c sub.c

dynamic:libcal.so
	echo "dynamic lib done"	
libcal.so:
	gcc -c -fpic add.c sub.c
	gcc -shared -o libcal.so add.o sub.o

clean:
	rm *.o libcal.*

install:
	sudo cp libcal.* /usr/lib/
