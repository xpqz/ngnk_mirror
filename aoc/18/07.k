#!../../k
e:(0:"i/07")[;5 36]-"A" /edges
n:1+|//e                /number of vertices
g:(=n).[;;:;1]/e        /adjacency matrix

/part1
`0:`c$"A"+>+/0>n{x-g@x?0}\-1+/g

/part2
f:{(t;d):x /t:current time, d[i]:when will task i be done (or 0 if not started yet)
   i:(1&#i)#i:&(~d)&1=+/g*(~d)|t<d /next task, if available (list of size 0 or 1)
   u:5-/t<d /number of idle workers
   $[(~u)|~#i
     t:&/(t<)#d   /skip time till some task is completed
     d[i]:t+61+i] /schedule task i
   (t;d)}

|/*|f/0,,&n
