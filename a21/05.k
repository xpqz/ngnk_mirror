#!../k
sgn:{(0<x)-0>x}
abs:{x|-x}

x:0:"i/05"        /input
l:+'+.''" -> "\'x /lines
l-:2#,&/&/''l     /translate to (0;0)
n:1+|/|/''l       /grid shape
a:&*/n            /flattened grid
f:{+/1<({@[x;n/y+sgn[z-y]*(|/k)#'!'k:1+abs z-y;+;1]}/).(,a),+'x}
f l@\:\:&|/=/l    /part1
f l               /part2
