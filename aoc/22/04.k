#!/usr/bin/env k
(a;b;c;d):`I$,/+'"-"\''+","\'0:"i/04"
+/~((a<c)&b<d)|(c<a)&d<b /part1
+/~(d<a)|b<c             /part2

/

/shorter but less intuitive
x:`I$+'"-"\''+","\'0:"i/04"
+/~|/&/'</1|:\x
+/~|/>/{|y}\+x

/both parts with one shot (gitonthescene), using grade
x:`I$"-"\''","\'0:"i/04"
`0:$+/(*||/:/~</:/@/1<:\)'x
