#!/usr/bin/env k
x:+\`I$(0:"i/01")^'"+"
*|x /part1

/part2
f:{1<|/@[&1-l-|/x;x-l:&/x;+;1]} /has dupes?
a@*{@[x;f m#a;:;m:-2!+/x]}/0,#a:(~f@){x,x+*|x}/x /binary search
