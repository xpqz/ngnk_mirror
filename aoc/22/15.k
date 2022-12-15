#!/usr/bin/env k
abs:{x|-x}
D:+/abs@-/(S;B):|'2 2#`I$+{(" "\x^",:xy=")2 3 8 9}'0:"i/15"

/part1
R:2000000 /row
d:D-abs R-*S
u:S[1]-d
v:S[1]+d+1
(u;v):(u;v)[;&u<v]
(u;v):(u;v)[;<u]
(u;v):{(u;v):x;u|: :':v;v|:u;(u;v)}/(u;v)
(+/0|v-u) - (#?B[1;&R=B 0]) + (#?S[1;&R=S 0])

/part2
f:{
 c:,/(x-!2),/:\:y-!2 /4corners
 $[|/&/~D</:+/'abs c-\:S;:0
   (2>-/|x)&2>-/|y;:(*x)+4000000**y;]
 xm:-2!+/x
 ym:-2!+/y
 +/(o[x[0],xm;y[0],ym]
    o[x[0],xm;ym,y[1]]
    o[xm,x[1];y[0],ym]
    o[xm,x[1];ym,y[1]])}
f/2#,0 4000001
