#!../k
l:`I$","\''" -> "\'0:"i/05" /lines, 2x2xN
l:l-\:\:&/&/l               /translate to (0;0)
n:1+|/|/l                   /grid shape
/g:put line on grid (x:flattened grid, y:(start cell;end cell))
g:{@[x;n/y[0]+(1&-1|d)*\:!1+|/d,-d:--/y;+;1]}
f:+/1<(&*/n)g/              /solve (put lines on grid and count intersections of >1)
f(|/'=/')#l                 /part1
f@l                         /part2
