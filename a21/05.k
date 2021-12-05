#!../k
x:0:"i/05"        /input
l:+'+.''" -> "\'x /lines
l-:2#,&/&/''l     /translate to (0;0)
n:1+|/|/''l       /grid shape
a:&*/n            /flattened grid
g:{ /put line on the grid (x:grid, y:start point, z:relative distance to end point)
 @[x;n/y+((0>z)-0<z)*(|/k)#'!'k:1+z|-z;+;1]}
f:+/1<g/[a].+'-\  /solve
f l@\:\:&|/=/l    /part1
f l               /part2
