STATIC=1

CC=gcc

GCC_LINKER_OPTIONS := -static
 
all:cal
	echo "Build Done"
ifdef STATIC
cal:main/main.o ../lib/libcal.a 
	${CC} -static main/main.o ../lib/libcal.a -o cal
else
cal:main/main.o ../lib/libcal.so 
	${CC} main/main.o -L ../lib/ -lcal -o cal

endif
main/main.o:
	make -C main

../lib/libcal.a:
	make -C ../lib/ static

../lib/libcal.so:
	make -C ../lib/ dynamic

clean:
	rm cal
	make -C main clean
	make -C ../lib/ clean

install:
	cp cal ../bin/
	make -C ../lib/ install
