#!../../k
e:-65+(0:"i/07")[;5 36] /edges
n:1+|//e                /number of vertices
g:(=n).[;;:;1]/e        /adjacency matrix
r:>+/0>n{x-g@x?0}\-1+/g /topological sorting
`0:`c$65+r              /output
