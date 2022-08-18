0:a makefile
	LD_LIBRARY_PATH=../.. ./a
a:../../libk.so a.c makefile
	$(CC) -L../.. -lk a.c -o a

liba.so:a.c makefile
	$(CC) -L../.. a.c -o liba.so -g -march=native -Dlibc -fPIC -Dshared -undefined -shared

../../libk.so:../../*.c ../../*.h
	$(MAKE) -C../.. libk.so
