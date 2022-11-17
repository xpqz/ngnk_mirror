#!/usr/bin/env k
iol:"iol"-"a"
f:{$[2>#?x@&=':x;0;~|/&':(1+-1_x)=1_x;0;~|//iol=\:x]} /valid password?
g:(~f@26\)(1+)/ /next valid
`0:`c$"a"+26\'a,g 1+a:g@26/-"a"-*0:"i/11" /both parts
