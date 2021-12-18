#!../k
p:{$[x~*x;,!0;,/0 1,''o'x]}                    /paths
e:{$[^i:*&(5=#'u)&~':-1_'u:p x;x               /explode
     .[;-1_u i;:;0](i>1).[;u i-2;+;*w]/(i<-1+#u).[;u i+1;+;*|w:x.-1_u i]/x]}
s:{$[^i:*&9<v:,//x;x;.[x;p[x]i;:;-2!0 1+v i]]} /split
a:{(s@e/)/(x;y)}                               /add
m:{$[x~*x;x;+/3 2*o'x]}                        /magnitude

x:_`j?'0:"i/18"                                /input
m@a/x                                          /part1
|/{m a[x;y]}'/x@!2##x                          /part2
