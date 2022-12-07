#!/usr/bin/env k
x:0:"i/07"
d:,"" /current directory
t:()!0 /total sizes
{$["$ cd .."~x;d::(),-1_d
   "$ cd /"~x;d::,""
   "$ cd "~5#x;d,:,*|" "\x
   "$ ls"~x;
   "dir "~4#x;
   ~"0:"'*x;t["/"/',\,'d]+:`I$*a:" "\x
   unknown]}'x;
+/t@&t<100000         /part1
&/t@&~t<-40000000+t"" /part2
