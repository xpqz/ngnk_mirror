#!../k
x:0:"i/22" /input
i:^x@'2 /instructions (0=off,1=on)
x:(0 1+`I$+(".."\*|)'"="\'","\)'x /cuboids (start-inclusive end-exclusive)

/a cuboid is ((lowx;lowy;lowz);(highx;highy;highz))
/an octree is either a fillvalue or ((midx;midy;midz);(subtree0;subtree1;..;subtree7))
c:{+(x@!3#2)@''!3} /cuboid corners
O:{+c'2':(*x;y;*|x)} /octants (x:cuboid; y:midpoint)
f:{[x;y;z;b]b:(|;&)@'/(b;x) /fill (x:octree bounds, y:octree, z:fillvalue, b:bounds to fill)
 $[x~b;z;(y~z)|/~</b;y;y~*y;o[x;(*'(+b)^'*x;8#y);z;b];(*y;o[;;z;b]'[O[x;*y];*|y])]}
v:{$[y~*y;y*/-/|x;+/O[x;*y]o'*|y]} /volume
b:(&/;|/)@'+x      /global bounds
g:v[b]@f[b]/[0;i]@ /solve
g -50|51&x         /part1
g x                /part2
