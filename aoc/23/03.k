#!../../k
x:0:"i/03"
d:~"0:"'         /is digit?
D:1-3\(!9)_4     /8 directions
n:d x            /numbers mask
p:~n|"."=x       /parts mask
m:N*+\0>':N:,/n  /identify numbers (starting from 1)
u:.(,0)_=m       /for each number: positions of its digits
v:`I$(,/x)u      /values of numbers
t:{3|/':0,x,0}   /OR with left and right neighbour
+/v@-1+i:(?m*,/t't p)^0 /1

s:#'1*:\x /shape
+/{*/v[r-1]*2=#r:^[;0]@?m@s/(s-1)&0|D+s\x}'&"*"=,/x /2
