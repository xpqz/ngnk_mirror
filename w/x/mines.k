D:10 10 /dimensions
C:15    /bomb count
W:1     /0=lose 1=win
`prng 0
N:(!*/2+D)+/:(~~:)#(2+D)/+,/,/:\:/2#,-1+!3    /neighbour cells
gen:{-,/4(+|0N,)/D#@[2+&d;(-C)?-1+d:*/D;:;1]} /generate a grid
fld:{@[x;&(~^x)&|/((~0>x)&~+/-1=n:x N)N;:;0]} /one level of flood fill
cnt:{+/(+/-1=x N;x)*~:\~0>x}

tick:{G::cnt fld G;$[~+/-2=G;tick::(::);]}
b:0.9*B:1%*D /inner(b) and outer(B) box size
u:0.3 0.6 /position of win/lose message

c:{"g.fillStyle='",($x),"';"}           /set colour
w:{"g.fillText(",(","/(,`j x),$y),");"} /write text
q:{"g.fillRect(",(","/$(B*x),2#b),");"} /draw box

/mousedown event handler
md:{$[~tick;:tick
      2=x`buttons; /todo: toggle flag
      1-x`buttons;0
      -1~G[i::(2+D)/1+I::_x[`xy]%B]; [W::0;tick::(::)]
      -2~G[i];G::cnt@@[G;i;:;0]]}

d:{$[0>i:G[(2+D)/1+x];(c`green;q x);(c`blue;q x;c`white;w[(~i)_$i;B*u+x])]}
draw:{cc:d'+!D;m:"you ",("lost";"won")W
      `js@,//("g.clearRect(0,0,1,1);";d'+!D)
      $[tick;:tick;~W;`js@,//(c`red;q I)]
       b:(c`white),/:w["X"]'+B*u+-1+(2+D)\&-1=G
       `js@,//(b;c`white;w[m;1%4 2])}

`js"tickPeriod=150"; /how often tick[] will be called
`js"hgr()";          /enter graphics mode
G:gen[] /grid (including 1-cell padding around it)

/thanks @hermetian
