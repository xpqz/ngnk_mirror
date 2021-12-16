#!../k
x:*0:"i/16"
b:{i+:x;2/a i+!-x}                             /x bits
l:{r:1_{b 1}{b 4}\0;16/r,b 4}                  /literal value
o0:{L:b 15;1_{i<y}[;i+L]p\0}                   /operator with length type 0
o1:{L:b 11;p'!L}                               /operator with length type 1
O:{(o0;o1)[b 1][]}                             /operator
p:{V:b 3;T:b 3;(V;T),$[4=T;l;O][]}             /packet
P:{i::0;a::,/+(4#2)\"0123456789ABCDEF"?x;p[]}

X:P x
{(*x)+$[4=x 1;0;+/o'2_x]}X                     /part1
{$[4=x 1;x 2;(+;*;&;|;:;>;<;=)[x 1]/[o'2_x]]}X /part2
