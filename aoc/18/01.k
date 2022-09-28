#!/usr/bin/env k
\l ../../l/maths.k
x:`I$(0:"i/01")^'"+"
:s:+/x /part1

/part2(Alve Björk)
s*:u:1-2*0>s
x*:u
d:,/p-/:p:(+\x)-x
m:(~s!d)&(0<d)&(*/2##p)#&1,#p
u*(p(#p)!&m)r?&/r:d@&m

//part2(ngn)
/f:{1<|/@[&1-l-|/x;x-l:&/x;+;1]} /has dupes?
/a@*{@[x;f m#a;:;m:-2!+/x]}/0,#a:(~f@){x,x+*|x}/+\x /binary search
