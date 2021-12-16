#!../k
x:-48+0:"i/15" /input
D:(|1 -1*)\!2  /cardinal directions
f:{            /solve
 n::#'1*:\x    /shape
 a::,/x        /flattened input
 d::&*/n       /distances
 q::0,9999#,!0 /q[x]:list of cells at distance x
 {q[d[i]:x+a i],:i:?(d@)_n/(n-1)&0|,'/D+\:n\q x;(~*|d)+x}/0 /wave
 *|d}
f x /part1
f 1+9!-1+,/,'/'5':x+/:!9 /part2
