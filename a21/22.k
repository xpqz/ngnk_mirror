#!../k
x:0:"i/22" /input
i:^x@'2 /instructions (0=off,1=on)
x:(0 1+`I$+(".."\*|)'"="\'","\)'x /cuboids (start-inclusive end-exclusive)

O:{+((x;y)@!3#2)@''!3} /octants
F:{[T;P;Q;p;q;v]p|:P;q&:Q /fill (T:octree, P,Q:octree bounds, p,q:bounds to fill, v:fill value)
   $[(p~P)&q~Q;v
     |/~p<q;T
     T~v;T
     T~*T;o[(,*'(p,'q)^'P),8#T;P;Q;p;q;v]
     [m:*T;(,m),o'[1_T;O[P;m];O[m;Q];8#,p;8#,q;v]]]}
V:{[T;P;Q]$[T~*T;T*/Q-P;[m:*T;+/o'[1_T;O[P;m];O[m;Q]]]]} /volume

P:&/*+x
Q:|/*|+x
f:V[;P;Q]@{F[x;P;Q;y 0;y 1;z]}/[0;;i]@ /solve

f -50|51&x /part1
f x /part2
