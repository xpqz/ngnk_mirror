#!/usr/bin/env k
\l ../../l/maths.k
x:`I$(0:"i/01")^'"+"
:s:+/x /part1

/part2(Alve Björk)
p:(+\x)-x
d:,/p-/:p
m:(~abs[s]!d)&(=/sgn'(s;d))&~,/=#p
(p(#p)!&m)@(#r)^r?&/r:abs d@&m

//part2(ngn)
/f:{1<|/@[&1-l-|/x;x-l:&/x;+;1]} /has dupes?
/a@*{@[x;f m#a;:;m:-2!+/x]}/0,#a:(~f@){x,x+*|x}/+\x /binary search
