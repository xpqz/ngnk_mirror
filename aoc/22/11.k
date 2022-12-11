#!/usr/bin/env k
(a;O;d;t;f):+{(`I$", "\*|": "\x 1;6_*|": "\x 2),(.*|" "\)'3#3_x}'0N 7#0:"i/11"
/(items;operation;divBy;throwIfTrue;throwIfFalse)
I:{old::y;y:m!.O x;v[$[d[x]!y;f;t]x],:y} /monkey x inspects item of worry level y
M:{r[x]+:#x I'v x;v[x]:!0} /monkey x inspects available items
R:{M'!#v} /round

r:&#v:a;m:-3 ;R'!20   ;*/r@2#>r /part1
r:&#v:a;m:*/d;R'!10000;*/r@2#>r /part2
