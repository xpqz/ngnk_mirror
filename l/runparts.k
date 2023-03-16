#!../k
v:0 /verbose?
skip:(`I$","\*x)^0N
k:{$[82<#x:`k x;(80#x),"..";x]}
a@:<`I$-2_'a:(>/"/9"<\:*:')#."\\ls" /0:,"."
u:{(|6$|$-1000!500+x),"ms"}
OK:1
t:-`t[]
{$[v;`1:-2_x;]
 e:.[1::;,"o/",-2_x;""];
 t:-`t[];r:`x(,x;"");t+:`t[];OK&:ok:e~r
 $[~ok;`1:"\nFAIL\n expected:",k[e],"\n   actual:",k[r],"\n"
   v;`1:u[t],"\n"]
 }'a^{x,".k"}'$skip;
t+:`t[]
$[v;`1:"      ",u[t],$[#skip;" (skipped: ",`k[skip],")";""],"\n";]
`exit@~OK
