#!../k
a:`I$","\*0:"i/07"     /input
a-:&/a                 /translate left end to 0
a@:<a                  /sort
n:#a                   /length
s:+\0,a                /partial sums

c:{(x*-n-2*i)+s[n]-2*s i:a'x} /cost function (sum of distances to x)
m:0.5*+/a@-2!0 1+#a    /median
&/c'(_m;-_-m)          /part1

c:{+/-2!d*1+d|:-d:a-x} /cost function (sum of squares of distances to x)
m:s[n]%#a              /mean
&/c'(_m;-_-m)          /part2
