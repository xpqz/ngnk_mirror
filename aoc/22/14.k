#!/usr/bin/env k
x:(|'.'" -> "\)'0:"i/14"
s:0 500     /source of sand
h:2+|/*+,/x /height
w:1000      /width
a:((h;w)#"."){.[x;m+!1+(|/y)-m:&/y;:;"#"]}/,/2':'x;

drop:{
 $["."=a. r:1  0+x;r
   "."=a. r:1 -1+x;r
   "."=a. r:1  1+x;r
   x]}/

/part1
:r:{r:drop s
 $[(h-1)=*r;:x;]
 a[r 0;r 1]:"o"
 1+x}/0

/part2
{r:drop s
 a[r 0;r 1]:"o"
 x+"."=a. s}/1+r
