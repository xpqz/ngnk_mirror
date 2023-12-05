# manual steps:
#   go to ../..
#   make c  (for "clean")
#   edit makefile to add "-Wl,-E" to compiler options
#   make k libk.so
#   come back to this directory

0:libadd.so
	LD_LIBRARY_PATH=../.. ./add.k
libadd.so:add.c
	$(CC) -I../.. -L../.. -shared -fPIC $^ -o $@ -lk
