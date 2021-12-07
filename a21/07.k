#!../k
a:`I$","\*0:"i/07"         /input
a-:&/a                     /translate left end to 0
a@:<a                      /sort
n:#a                       /length
s:+\0,a                    /partial sums
S:s n                      /sum
Q:+/a*a                    /sum of squares

f:{(x*-n-2*i)+S-2*s@i:a'x} /cost function (sum of distances to x)
m:a@-2!n                   /median
&/f'(_m;-_-m)              /part1

g:{-2!f[x]+x/(n;-2*S;Q)}   /cost function (sum of squares of distances to x)
m:S%n                      /mean
&/g'(_m;-_-m)              /part2
