#!../k
S:(+.'2_)'(&~#'x)_x:(,""),0:"i/19"  /scanner data
P:?<'+!3#3;D:+1-2*!3#2;B:10000      /permutations,directions,base for encoding
Q:11<+/(|/=)\:                      /is there overlap? (x and y must be encoded)
QO:{((Q[B/x]@B/y+)')#-+y(,/-\:)'x}  /offset or ()
QD:{$[^i:*&0<#'O:QO[x]'D*\:y;()     /direction-offset or ()
    ,(D[i];*O[i])]}
QP:{                                /permutation-direction-offset or ()
 (d;e):(+/*/2#,(,/-\:)'/2#,:)'(x;y)
 $[67>#d^d^e;();,/(,'P),/:'QD[x]'y P]}
T:{(p;d;O):x;O+d*y@p}               /apply transform
L:(#S)#,&3                          /scanner locations
M:(2##S)#0                          /M[i;j]: have we tried to match S[i] and S[j]?
(U;V):0 1_!#S                       /indices of done and pending
{`{$[x~`;;:`];x:*V;$[M[x;y];:`;];M[x;y]:1;r:QP/S y,x
   /\,(`x;x;`y;y;`V;V;`r;r)
   $[#r;;:`];L[x]:(*r)2;S[x]:T[*r;S x];U,:x;V::1_V;r}/U
 :V@:(#V)!1+!#V}/0;

#?,/+'S /part1
|/+/'a|-a:,/L-/:\:L /part2
