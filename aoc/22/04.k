#!/usr/bin/env k
(a;b;c;d):`I$,/+'"-"\''+","\'0:"i/04"
+/1>(a-c)*b-d /part1
+/1>(a-d)*b-c /part2

/

/shorter but less intuitive
x:`I$+'"-"\''+","\'0:"i/04"
+/1>*/-/x
+/1>*/-/{|y}\x

/both parts with one shot (gitonthescene), using grade
x:`I$"-"\''","\'0:"i/04"
`0:$+/(*||/:/~</:/@/1<:\)'x
