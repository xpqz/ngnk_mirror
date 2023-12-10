#!/usr/bin/env k
a:0:"i/10"

/a:("....."
/   ".S-7."
/   ".|.|."
/   ".L-J."
/   ".....")

/a:("..F7."
/   ".FJ|."
/   "SJ.L7"
/   "|F--J"
/   "LJ...")

/a:("FF7FSF7F7F7F7F7F---7"
/   "L|LJ||||||||||||F--J"
/   "FL-7LJLJ||||||LJL-77"
/   "F--JF--7||LJLJIF7FJ-"
/   "L---JF-JLJIIIIFJLJJ7"
/   "|F|F-JF---7IIIL7L|7|"
/   "|FFJF7L7F-JF7IIL---7"
/   "7-L-JL7||F7|L7F-7F7|"
/   "L.L7LFJ|||||FJL7||LJ"
/   "L7JLJL-JLJLJL--JLJ.L")

/a:("..........."
/   ".S-------7."
/   ".|F-----7|."
/   ".||.....||."
/   ".||.....||."
/   ".|L-7.F-J|."
/   ".|..|.|..|."
/   ".L--J.L--J."
/   "...........")

D:(-1 0;0 1;1 0;0 -1)
L:"|-LJ7F"!(1 0 1 0;0 1 0 1;1 1 0 0;1 0 0 1;0 0 1 1;0 1 1 0)

p0:*+&"S"=a                     /initial position
d0:*&(0^L@(a . p0+)'D)@'2 3 0 1 /initial direction
f:{(p;d):x;p+:D d;(p;(+/&L a . p)-2 3 0 1 d)} /next
(p;d):+{(p;d):x;~"S"=a . p+D@d}f\(p0;d0) /path (positions;directions)
-2!1+#p /1

sgn:{(0<x)-0>x}
abs:{x|-x}
cyc:{(*|y)x':y} /cyclic eachprior
area:-2!+/*/(+;-)cyc'+p
corr:-4!+/4!2+sgn[area]*cyc[-]d
abs area+corr /2
