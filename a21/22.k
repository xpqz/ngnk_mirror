#!../k
x:0:"i/22" /input
i:^x@'2 /instructions (0=off,1=on)
x:(0 1+`I$+(".."\*|)'"="\'","\)'x /cuboids (start-inclusive end-exclusive)

r:{x+!y-x} /range
f:{
 u::{?x@<x}'+,/x /unique points on each axis
 a:(#'u)#0
 a:{x[r[u[0]?y[0;0];u[0]?y[1;0]]
      r[u[1]?y[0;1];u[1]?y[1;1]]
      r[u[2]?y[0;2];u[2]?y[1;2]]]:z;x}/[a;x;i]
 a:a*    (1_-':u[0]),0
 a:a*\:  (1_-':u[1]),0
 a:(+/(+/((1_-':u[2]),0)*)')'a
 +//a}

f 51&-50|x /part1
f x /part2
