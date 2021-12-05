#!../k
l:+'+.''" -> "\'0:"i/05" /lines, 2x2xN
l-:2#,&/&/''l            /translate to (0;0)
n:1+|/|/''l              /grid shape
/g:put line on grid (x:flattened grid, y:start cell, z:relative offset of end cell)
g:{@[x;n/y-(1&-1|z)*\:!1+|/z,-z;+;1]}
f:+/1<g/[&*/n].+'-\      /solve
f@l@\:\:&|/=/l           /part1
f@l                      /part2
