p:0.5 0.5;v:0 0f;r:1e-2;a:1e-3;g:1e-4
stop:{`0:x;tick::draw::(::)}
tick:{p+:v;v[1]+:g
 $[p[0]<  r;stop"hit left wall"
   p[0]>1-r;stop"hit right wall"
   p[1]>1-r;stop"landed with v=",$%+/v*v]}
draw:{`js@,//(""
 "g.clearRect(0,0,1,1);"
 "g.fillStyle='red';"
 "g.fillRect(",($p[0]-r),",",($p[1]-r),",",($2*r),",",($2*r),");")}
kd:{$[~37 41'x;v[~2!x]+:a*-1 1@38<x;]} /keydown(x:37=left,38=up,39=right,40=down)
`js"tickPeriod=50;hgr()";
