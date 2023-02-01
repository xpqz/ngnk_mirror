#!../../k
e:(0:"i/07")[;5 36]-"A" /edges
n:1+|//e                /number of vertices
g:(=n).[;;:;1]/e        /adjacency matrix

/part1
`0:`c$"A"+>+/0>n{x-g@x?0}\-1+/g

/part2
f:{(t;d):x /t:current time, d[i]:when will task i be done (or 0 if not started yet)
   u:5-/t<d               /number of idle workers
   a:&(~d)&1=+/g*(~d)|t<d /available tasks
   a:(u&#a)#a             /at most u of them
   $[a;d[a]:t+61+a        /schedule tasks
       t:&/(t<)#d]        /skip time till some task is completed
   (t;d)}
|/*|f/0,,&n
