#!../../k
x:4(+|"~",)/0:"i/12"
n:#*x
a:,/x
(S;E):a?"SE" /start;end
a[S,E]:"az"
h*:(a-2)</:a@h:(1;-1;n;-n)+\:!#a /neighbours
f:*E_{x&1+&/x h}/(#a)*~: /wave
f S=!#a /part1
f "a"=a /part2
