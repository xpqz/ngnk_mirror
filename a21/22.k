#!../k
x:0:"i/22" /input
i:^x@'2 /instructions (0=off,1=on)
x:(0 1+`I$+(".."\*|)'"="\'","\)'x /cuboids (start-inclusive end-exclusive)

r:{x+!y-x} /range
f:{
 u:{?x@<x}'+,/x /unique points on each axis
 a:.[;;:;]/[(-1+#'u)#0;r'/'u?'/:/:x;i]
 d:1_'-':'u
 +/d[0]*(+/d[1]*(+/d[2]*)')'a}

f 51&-50|x /part1
f x        /part2
