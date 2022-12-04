#!/usr/bin/env k
x:`I$+'"-"\''+","\'0:"i/04" / "a-b,c-d" -> ((a;b);(c;d))
((a;b);(c;d)):x
(⩽):~>
+/((a⩽c)&d⩽b)|((c⩽a)&b⩽d) /part1
+/(a⩽d)&c⩽b               /part2
