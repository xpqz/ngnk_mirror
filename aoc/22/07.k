#!/usr/bin/env k
x:0:"i/07"
s:,0 /stack of current sizes of ancestors of current directory
t:!0 /total sizes of processed directories
{$["$ cd .."~x;[t,:-1#s;s::-1_s]
   "$ cd /" ~x;[t,: 1_s;s:: 1#s]
   "$ cd "~5#x;s,:0
   ~"0:"'*x;s+:`I$*a:" "\x
   "$ ls"~x;
   "dir "~4#x;
   unknown]}'x;
t,:s
+/(100000>)#t        /part1
&/>[;-40000001+*s]#t /part2
