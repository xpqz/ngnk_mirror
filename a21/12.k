#!../k
x:0:"i/12"
/x:" "\"start-A start-b A-c A-b b-d A-end b-end"
/x:" "\"dc-end HN-start start-kj dc-start dc-HN LN-dc HN-end kj-sa kj-HN kj-dc"

x:`$"-"\'x
v:?`start`end,v@:>v:,/x /vertices
m:+/v=_v /number of small caves
M:(#v)-m /number of big caves
g|:+g:((2##v)#0).[;;:;1]/v?x /graph (adjacency matrix)

/part1
B:*/m#2
base:0,m#2
t:(B*#v)#0N
t[-2!B]:1
f:{$[~^t x;:t x;]
   (p;s):0 1_base\x;p@:0
   :t[x]:$[p<m
           $[s p
             +/o'(2/@[s;p;:;0])+B*&g[p]&s,M#1
             0]
           +/o'(2/s)+B*&g[p]&s,M#1]}
+/f'B+!B

/part2
B:2*/m#2
D:*/m#2
base:0 2,m#2
t:(B*#v)#0N
t[-4!B]:1
f:{$[~^t x;:t x;]
   (p;d;s):0 1 2_base\x;p@:0;d@:0
   :t[x]:$[p<m
           $[s p
             $[d&p>1
               +/o',/((2/@[s;p;:;0])+D+B*&g[p]&s,M#1
                      (2/s)           +B*&g[p]&s,M#1)
               +/o'(2/@[s;p;:;0])+(D*d)+B*&g[p]&s,M#1]
             0]
           +/o'(2/s)+(D*d)+B*&g[p]&s,M#1]}
+/f'B+!B
