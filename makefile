#faster builds: export MAKEFLAGS=-j8
M=mkdir -p $(@D)
0:;$(MAKE) k && $(MAKE) t #default target
k:;$(MAKE) a N=$@ R=k O='-O3 -march=native' L='-lm'
libk.so:;$(MAKE) a N=$@ R=$@ O='-O3 -march=native -nostdlib -ffreestanding -fPIC -Dshared' L='-shared'
o/$N/%.o:%.c *.h;$M;$(CC) @opts $O -o $@ -c $<
o/$N/bin:$(patsubst %.c,o/$N/%.o,$(wildcard *.c));$(CC) $O -o $@ $^ @lopts $L # ;$(STRIP) -R .comment $@ -R '.note*'
a:o/$N/bin;cp o/$N/bin $R

o/t:t/t.c;$(CC) $< -o $@ -Wall -Wno-unused-result -Werror
o/asm/%.s:%.c *.h;$M;$(CC) -O3 @opts -march=native -nostdlib -ffreestanding -c $< -o $@ -S -masm=intel

#/usr/lib/llvm-17/bin/wasm-ld must be on $PATH
#apt-get install gcc-multilib-x86-64-linux-gnux32
w:k o/w/fs.h o/w/k.wasm.lz4 o/w/index.html $(patsubst w/x/%.k,o/w/x/%.k,$(wildcard w/x/*.k)) #wasm
h:w o/w/http;cd o/w;./http
O_WASM=@opts -Oz -nostdlib -ffreestanding --target=wasm32 -U __SIZEOF_INT128__ -Dwasm -I/usr/x86_64-linux-gnux32/include/
o/w/%.o:%.c *.h o/w/fs.h;$M;clang $(O_WASM) -o $@ -c $<
o/w/k.wasm0:$(patsubst %.c,o/w/%.o,$(wildcard *.c));clang $(O_WASM) -o $@ $^\
 -Wl,--export=main,--export=kinit,--export=kargs,--export=rep,--export=open,--export=close,--export=write,--export=evs\
 -Wl,--export=__heap_base,--no-entry,--initial-memory=33554432,--allow-undefined
o/w/k.wasm:o/w/k.wasm0;wasm-opt -Oz $< -o $@
o/w/k.wasm.lz4:o/w/k.wasm;lz4 -12 <$< >$@
o/w/fs.h:repl.k LICENSE|k w/fs.k;$M;./k w/fs.k $^ >$@
o/w/x/%.k:w/x/%.k;$M;ln -f $< $@
o/w/index.html:w/index.html k w/inl.k w/*.js;$M;cd w && ./inl.k index.html *.js >../$@ && cd -
o/w/http:w/http.c;$(CC) $< -o $@

# O_32=@opts -m32
# o/32/%.o:%.c *.h;$M;$(CC) $(O_32) -o $@ -c $<
# k32:$(patsubst %.c,o/32/%.o,$(wildcard *.c));$(CC) $(O_32) -o $@ $^ -lgcc -lm

t:tu td tg te ta #all tests
tu:o/t;o/t #unit
td:;dy/a.sh #dyalog
tg:;cd g;./a.k #codegolf
te:te0 te1 te2 te3 #projecteuler
te0:;l/runparts.k e 01.k 26.k
te1:;l/runparts.k e 26.k 51.k
te2:;l/runparts.k e 51.k 76.k
te3:;l/runparts.k e 76.k
ta:t22 t21 t20 t19 t18 t17 t16 t15 #adventofcode
t22:;l/runparts.k aoc/22
t21:;l/runparts.k aoc/21
t20:;l/runparts.k aoc/20
t19:;l/runparts.k aoc/19
t18:;l/runparts.k aoc/18
t17:;l/runparts.k aoc/17
t16:;l/runparts.k aoc/16
t15:;l/runparts.k aoc/15

c:;rm -rf o k libk.so #clean
.PHONY: 0 t tu td tg te te0 te1 te2 te3 ta t22 t21 t20 t19 t18 t17 t16 t15 c k w h a
