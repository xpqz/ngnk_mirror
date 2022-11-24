#!/usr/bin/env k
X:","\*0:"i/16" /instructions
a:`c$"a"+!16 /initial position
s:{@[x;y;:;x@|y]} /swap x[y[0]] and x[y[1]]
f:{$["s"=*y;,/|(0,(#x)-.1_y)_x /apply instruction
     "x"=*y;s[x]`I$"/"\1_y
     "p"=*y;s[x]x?"/"\1_y]}
g:f/[;X] /apply dance
`0:g a /part1
`0:((#g\a)!_1e9)g/a /part2 (#g\a is loop size)
