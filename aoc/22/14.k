#!/usr/bin/env k
x:(|'.'" -> "\)'0:"i/14"
h:2+|/*+,/x /height
w:1000      /width
s:500       /source of sand
a:(&h*w){@[x;w/m+!1+(|/y)-m:&/y;:;1]}/,/2':'x; /grid
d:{$[~a r:   w+x;r /drop
     ~a r:-1+w+x;r
     ~a r: 1+w+x;r
     x]}/
:r:{p:d s;a[p]:1;x+(#a)>p+w}/0 /part1
{   p:d s;a[p]:1;x+~a s}/2+r   /part2
