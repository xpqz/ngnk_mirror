#!../k
x:0:"i/14"
p:*x                 /initial polymer
r@:<r:,/'" -> "\'2_x /rules
e@:<e:?,//r          /elements
E:+e@!2##e           /pairs of elements
t:((2##E)#0).[;;+;1]/E?r@\:((0 2;2 1);0 1) /transition matrix
m:(+/*)\:            /matrix multiplication
v:@[&#E;;+;1]E?2':p  /initial vector
d:{(|/x)-&/x}        /max-min difference
f:{d @[;e?*p;+;1]@+/(2##e)#x m[t]/v}
f 10                 /part1
f 40                 /part2
