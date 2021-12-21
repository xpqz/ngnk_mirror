#!../k
x:`I${*|" "\x}'0:"i/21" /input

/part1
c:0 /counter
r:{1+100!-1+c+:1} /roll
f:{(p;s):x;s[0]+:p[0]:1+10!-1+p[0]+r[]+r[]+r[];(|p;|s)} /turn
c*&/*|{(p;s):x;1000>|/s}f/(x;&2)

/part2
(D;K):(!:;.:)@\:#'=3+/!3#3 /possible 3die rolls and their multiplicities
m:11 11 21 21 2#0N /memoization
f:{[p;q;s;t] /p,q:positions, s,t:scores
 $[20<t;!2;~^*r:m[p;q;s;t];r;m[p;q;s;t]:|+/K*o[q;;t;]'[p1;s+p1:1+10!-1+p+D]]}
|/f. x,&2
