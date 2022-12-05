#!/usr/bin/env k
c:(^:)_'+|-1_c@\:&~^*|c:(i:*<#'x)#x:0:"i/05"
(m;f;t):@[;0;-:]@[;1 2;+;-1]`I$@[;1 3 5]@+" "\'(1+i)_x /(-move;from-1;to-1)
g:{`0:{*|x}'{[x;c;m;f;t]c[t],:x m#c f;c[f]:m_c f;c}[x]/[c;m;f;t]}
g[|:] /part1
g[::] /part2
