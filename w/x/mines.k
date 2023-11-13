D:10 10 / shape
C:15    / number of bombs
Ds:`c$"0"+!10
W:1
`prng@0
N:(!*/2+D)+/:(~~:)#(2+D)/+,/,/:\:/2#,-1+!3
gen:{-,/4(+|0N,)/D#@[2+&d;(-C)?-1+d:*/D;:;1]}
fld:{@[x;&(~^x)&|/((~0>x)&~+/-1=n:x@N)@N;:;0]}
cnt:{+/(+/-1=x@N;x)*~:\~0>x}

tick:{G::cnt@fld@G;$[~+/-2=G;tick::(::);]}
b:0.9*B:1%*D
u:0.3 0.6

c:{"g.fillStyle='",($x),"';"}            /set colour
w:{"g.fillText(",(","/(,`k[x]),$y),");"} /write text
q:{"g.fillRect(",(","/$(B*x),2#b),");"}

md:{ $[~tick;:tick
       -1~G[i::(2+D)/1+I::p:_(x%e)%B]; [W::0;tick::(::)]
       -2~G[i];G::cnt@@[G;i;:;0]]}

d:{$[0>i:G[(2+D)/1+x];(c`green;q x);(c`blue;q x;c`white;w[Ds@i;B*u+x])]}
draw:{cc:d'+!D;m:"you ",("lost";"won")W
       `js@,//("g.clearRect(0,0,1,1);";d'+!D)
       $[tick;:tick;~W;`js@,//(c`red;q I)]
        b:(c`white),/:w["X"]'+B*u+-1+(2+D)\&-1=G
        `js@,//(b;c`white;w[m;1%4 2])}

`js"tickPeriod=150";     /tick[] will be called every half second
`js"hgr()";              /enter graphics mode
e:.`js@"[cnv.width,cnv.height]"
G:gen[]

/thanks @hermetian
