#!../k
x:0:"i/11"  /input
n:(#x;#*x)  /shape
x:,/x-48    /flatten
h:&'3>+/*/2#,-\:'/2#,!n /neighbours
f:{(~~x)*(~m)*@[x;h@&m:9<x;+;1]}/1+ /step
+//~100 f\x /part1
-1+#(|/)f\x /part2
