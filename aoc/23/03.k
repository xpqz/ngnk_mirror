#!../../k
x:0:"i/03"

/x:("467..114.."
/   "...*......"
/   "..35..633."
/   "......#..."
/   "617*......"
/   ".....+.58."
/   "..592....."
/   "......755."
/   "...$.*...."
/   ".664.598..")

s:#'1*:\x /shape
X:,/x

d:~"0:"'        /is digit?
n:d x           /numbers
m:N*+\0>':N:,/n /number identifiers starting from 1
u:.(,0)_=m      /values of numbers
v:`I$X u
p:~n|"."=x      /parts
t:{3|/':0,x,0}
h:t't p         /neighbourhoods of parts
i:(?m*,/h)^0
+/v i-1

D:1-!3 3
+/{*/v[r-1]*2=#r:^[;0]@?m@s/(s-1)&0|D+s\x}'&"*"=,/x
