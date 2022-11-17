#!/usr/bin/env k
x:0:"i/08"
t:(1 0 0;0 2 0;3 3 3;0 0 0) /states:0=norm,1=aftbs,2=aftbsx,3=aftbsxx  charclasses:0=bs,1=x,2=other
+/(2+/0<0{t[x;y]}\2^"\\x"?)'x /part1
+/(2++//"\\\""=\:)'x /part2
