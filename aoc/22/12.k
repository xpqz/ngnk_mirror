#!/usr/bin/env k
x:4(+|"z",)/0:"i/12"
n:#*x
a:,/x
w:#a /∞
S:*&"S"=a /start
E:*&"E"=a /end
a[S,E]:"az"
h*:(-2+a)</:a@h:(1;-1;n;-n)+\:!#a /neighbours
f:*E_{x&/1+x h}/w*~: /wave
f S=!#a /part1
f "a"=a /part2
