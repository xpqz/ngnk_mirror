#!../../k
e:(0:"i/07")[;5 36]-"A" /edges
n:1+|//e                /number of vertices
g:(=n).[;;:;1]/e        /adjacency matrix
t:>+/0>n{x-g@x?0}\-1+/g /topological sorting
`0:`c$"A"+t             /output
