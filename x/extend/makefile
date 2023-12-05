# manual step: edit ../../makefile to add "-Wl,-E" to compiler options

0:libadd.so
	$(MAKE) -C../.. k libk.so
	LD_LIBRARY_PATH=../.. ./add.k
libadd.so:add.c
	$(CC) -I../.. -L../.. -shared -fPIC $^ -o $@ -lk
