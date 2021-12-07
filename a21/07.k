#!../k
a:`I$","\*0:"i/07"     /input
a-:&/a                 /translate left end to 0
a@:<a                  /sort

c:{+/d|-d:a-x}         /cost function
m:0.5*+/a@-2!0 1+#a    /median
&/c'(_m;-_-m)          /part1

c:{+/-2!d*1+d|:-d:a-x} /cost function
m:(+/a)%#a             /mean
&/c'(_m;-_-m)          /part2
