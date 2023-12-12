#!../../k
f:{[x;y;i;j] /count arrangements for suffixes of x and y of lengths i and j
 :t[i;j]: :[-1<v:t[i;j];v
            i<-1+/1+(-j)#y;0
            ~j;~+/"#"=(-i)#x
            +/(o[x;y;i-1;j]*|/".?"=*(-i)#x
               o[x;y;0|i-k;j-1]*&/|/(k#(-i)#x)=/:"#.?"2,,|~!k:1+*(-j)#y)]}

x:@[;1;.:]'" "\'0:"i/12"
g:+/{x[0],:".";t::(1+n:#'x)#-1;f . x,n}'
g@x                     /1
g@{("?"/;,/)@'5#','x}'x /2
