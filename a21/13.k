#!../k
x:0:"i/13"
i:*&~#'x                        /index of empty line
c:.'i#x                         /coordinates
w:(2!*|:;.:)@'/:"="\'(i+1)_x    /fold instructions
p:+((1+|/c)#0).[;;:;1]/c        /paper
f:{{x||z,&(#x)-#z}.(0;x;x+1)_y} /fold 1d  f[index;paper]
F:{(f/:;f)[*y][y 1;x]}          /fold 2d  F[paper;(axis;index)]
+//F[p;*w]                      /part1
`0:" #"@p F/w                   /part2
