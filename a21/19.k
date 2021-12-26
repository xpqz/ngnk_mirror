#!../k
S:(+.'2_)'(&~#'x)_x:(,""),0:"i/19"     /scanner data
P:?<'+!3#3;D:+1-2*!3#2;B:10000         /permutations,directions,base for encoding
Q:11<+/(|/=)\:                         /is there overlap? (x and y must be encoded)
Q1:{{$[#x;x;   y z;      ,z;x]}/[();Q[B/x]@B/y+;+x(,/-\:)'y]} /() or ,offset
Q2:{{$[#x;x;#r:y z;,(z; *r);x]}/[();Q1[x]y*;D]} /() or ,(direction;offset)
Q3:{{$[#x;x;#r:y z;,(,z),*r;x]}/[();Q2[x]y@;P]} /() or (permutation;direction;offset)
QH:{(d;e):(+/*/2#,(,/-\:)'/2#,:)'(x;y);$[67>#d^d^e;();Q3[x]y]}
T:{x[2]+x[1]*y@*x}                     /apply transform
L:(#S;3)#0                             /scanner locations
M:(2##S)#0                             /M[i;j]: have we tried to match S[i] and S[j]?
(U;V):0 1_!#S                          /indices of done and pending
{`{$[x~`;;:`];x:*V;$[M[x;y];:`;];M[x;y]:1;r:QH/S y,x
   $[#r;;:`];L[x]:(*r)2;S[x]:T[*r]S x;U,:x;V::1_V;r}/U
 :V@:(#V)!1+!#V}/0;

#?,/+'S /part1
|/+/'a|-a:,/L-/:\:L /part2
