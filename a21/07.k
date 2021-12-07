#!../k
a:`I$","\*0:"i/07"     /input
a-:&/a                 /translate left end to 0
a@:<a                  /sort

/part1
c:{+/d|-d:a-x}         /cost function
&/c'0 1+a@-2!#a        /best is near the median

/part2
c:{+/-2!d*1+d|:-d:a-x} /cost function
&/c'0 1+_(+/a)%#a      /best is near the average
