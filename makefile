MAKEFLAGS=-j
M=mkdir -p $(@D)
0:;$(MAKE) k && $(MAKE) t #default target
k:;$(MAKE) a N=$@ R=k O='-O3 -march=native' L='-lm'
libk.so:;$(MAKE) a N=$@ R=$@ O='-O3 -march=native -nostdlib -ffreestanding -fPIC -Dshared' L='-shared'
o/$N/%.o:%.c *.h;$M;$(CC) @opts $O -o $@ -c $<
o/$N/bin:$(patsubst %.c,o/$N/%.o,$(wildcard *.c));$(CC) $O -o $@ $^ @lopts $L # ;$(STRIP) -R .comment $@ -R '.note*'
a:o/$N/bin;cp o/$N/bin $R

o/asm/%.s:%.c *.h;$M;$(CC) -O3 @opts -march=native -nostdlib -ffreestanding -c $< -o $@ -S -masm=intel

#/usr/lib/llvm-17/bin/wasm-ld must be on $PATH
#apt-get install gcc-multilib-x86-64-linux-gnux32
w:k o/w/fs.h o/w/k.wasm.lz4 o/w/index.html $(patsubst w/x/%.k,o/w/x/%.k,$(wildcard w/x/*.k)) #wasm
h:w o/w/http;cd o/w;./http
O_WASM=@opts -Oz -nostdlib -ffreestanding --target=wasm32 -U __SIZEOF_INT128__ -Dwasm -I/usr/x86_64-linux-gnux32/include/
o/w/%.o:%.c *.h o/w/fs.h;$M;clang $(O_WASM) -o $@ -c $<
o/w/k.wasm0:$(patsubst %.c,o/w/%.o,$(wildcard *.c));clang $(O_WASM) -o $@ $^\
 -Wl,--export=main,--export=kinit,--export=kargs,--export=rep,--export=open,--export=close,--export=write,--export=evs\
 -Wl,--export=__heap_base,--no-entry,--initial-memory=33554432,-z,stack-size=8388608,--allow-undefined
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
tu:k o/t;o/t #unit
o/t:t/t.c;$(CC) $< -o $@ -Wall -Wno-unused-result -Werror
td:k;cd dy;./a.k;echo td done #dyalog
tg:k;cd g;./a.k echo tg done #codegolf
te:te0 te1 te2 te3 te4 te5 te6 te7 te8 te9 #projecteuler
te0:k;l/runparts.k e 01.k 10.k ;echo te0 done
te1:k;l/runparts.k e 10.k 10.k ;echo te1 done
te2:k;l/runparts.k e 20.k 20.k ;echo te2 done
te3:k;l/runparts.k e 30.k 30.k ;echo te3 done
te4:k;l/runparts.k e 40.k 40.k ;echo te4 done
te5:k;l/runparts.k e 50.k 50.k ;echo te5 done
te6:k;l/runparts.k e 60.k 60.k ;echo te6 done
te7:k;l/runparts.k e 70.k 70.k ;echo te7 done
te8:k;l/runparts.k e 80.k 80.k ;echo te8 done
te9:k;l/runparts.k e 90.k      ;echo te9 done
ta:t22 t21 t20 t19 t18 t17 t16 t15 #adventofcode
t22:k;l/runparts.k aoc/22 ;echo t22 done
t21:k;l/runparts.k aoc/21 ;echo t21 done
t20:k;l/runparts.k aoc/20 ;echo t20 done
t19:k;l/runparts.k aoc/19 ;echo t19 done
t18:k;l/runparts.k aoc/18 ;echo t18 done
t17:k;l/runparts.k aoc/17 ;echo t17 done
t16:k;l/runparts.k aoc/16 ;echo t16 done
t15:k;l/runparts.k aoc/15 ;echo t15 done

c:;rm -rf o k libk.so #clean
.PHONY: 0 c k w h a t tu td tg te te0 te1 te2 te3 ta t22 t21 t20 t19 t18 t17 t16 t15
