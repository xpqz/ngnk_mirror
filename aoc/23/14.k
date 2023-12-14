#!../../k
n:#x:0:"i/14"

roll:{@[x;(0;n)+\:&&/".O"=(-n;n)_\:x;:;"O."]}
tilt:(2#n)#roll/,/
load:+/(|1+!n)*+/'"O"=
load tilt x /1

rot:+|:
cyc:4(rot tilt@)/
rho:{t:cyc@*|x;:[^x?t;x,,t;x]}/,x
s:rho?cyc@*|rho /loop start
l:(#rho)-s      /loop length
load rho s+l!1000000000-s /2
