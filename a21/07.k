#!../k
a:`I$","\*0:"i/07"     /input
a-:&/a                 /translate left end to 0
a@:<a                  /sort
n:#a                   /length
s:+\0,a                /partial sums
S:s n                  /sum
Q:+/a*a                /sum of squares

f:{(x*-n-2*i)+s[n]-2*s i:a'x} /cost function (sum of distances to x)
m:0.5*+/a@-2!0 1+n     /median
&/f'(_m;-_-m)          /part1

g:{-2!Q+(-2*x*S)+(x*x*n)+f x} /cost function (sum of squares of distances to x)
m:S%n                  /mean
&/g'(_m;-_-m)          /part2
