#!../k
x:*0:"i/17"
/x:"target area: x=20..30, y=-10..-5"
(tx;ty):0 1+/:`I$".."\'*'|'"="\'","\x

/parameters to test
vx:!1000       /velocities by x
vy:-1000+!2000 /velocities by y
k:5000         /steps

rx:</tx>\:+\'0|vx-\:!k
ry:</ty>\:+\'  vy-\:!k
r:(*vx;*vy)+/: ,/,/' (&'+rx) ,/:\:' &'+ry

+/1+!|/*'|'r /part1
#?r          /part2
