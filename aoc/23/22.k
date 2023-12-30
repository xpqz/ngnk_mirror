#!../../k
x:0:"i/22"

/x:("1,0,1~1,2,1"
/   "0,0,2~2,0,2"
/   "0,2,3~2,2,3"
/   "0,0,4~0,2,4"
/   "2,0,5~2,2,5"
/   "0,1,6~2,1,6"
/   "1,1,8~1,1,9")

b:(.'"~"\)'x /bricks[fromOrTo;xyz;brickID]
b@:<b[;0;2]  /sort by z0
h:10 10#0    /heights
f:10 10#-1   /fallen bricks ids
s:(#b)#,!0   /s[i]: supporters of brick i

drop:{((x0;y0;z0);(x1;y1;z1)):x
 i:x0_!1+x1
 j:y0_!1+y1
 hij:,/h[i;j]
 m:|/hij
 s[y]:?(,/f[i;j])[&m=hij]^-1
 h[i;j]:m+1+z1-z0
 f[i;j]:y}

drop'[b;!#b];
c:@[&#b;s;+;1] /c[i]: how many bricks does brick i support?
+/~@[&#b;s@&1=#'s;:;1] /1
