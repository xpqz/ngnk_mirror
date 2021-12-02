#!../k
/c:commands(0=down,1=up,2=forward),X:units,h:horizontal position,d:depth,a:aim
(c;X):("duf"?*:';`I$)@'+" "\'0:"i/02"

*/+/X*(0 1;0 -1;1 0)c

a:+\X*-/0 1=\:c
h:+/X*2=c
d:+/X*a*2=c
h*d
