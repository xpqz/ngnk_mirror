#!/usr/bin/env k
e:-65+{*'(" "\x)1 7}'0:"i/07" /edges
n:1+|//e                      /number of vertices
g:(=n).[;;:;1]/e              /adjacency matrix
r:>+/0>n{x-g@*>~x}\-1+/g      /topological sorting
`0:`c$65+r                    /output
