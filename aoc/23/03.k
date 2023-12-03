#!../../k
x:0:"i/03"
d:~"0:"'         /is digit?
D:1-3\(!9)_4     /8 directions
t:{3|/':0,x,0}   /OR with left and right neighbour

/1
n:d x            /numbers
p:~n|"."=x       /parts
m:N*+\0>':N:,/n  /identify numbers (starting from 1)
u:.(,0)_=m
v:`I$(,/x)u      /values of numbers
i:(?m*,/t't p)^0
+/v i-1

/2
s:#'1*:\x        /shape
+/{*/v[r-1]*2=#r:^[;0]@?m@s/(s-1)&0|D+s\x}'&"*"=,/x
