#!/usr/bin/env k
x:*'(`I$2_')#0:"i/09"
d:"RDLU"!(|-1 1*)\!2 /directions
h:(,0 0),+\d x /head
f:0 0{$[&/m:~-1 2'x-y;x;-2!(y*1+m)+x*~m]}\ /follow
#?  f h /part1
#?9 f/h /part2
