#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S C m[32];S I n,o;S A src; //message,length,offset,source
SN V eC(){n=0;I(src,mr(src);src=0)o=0;}
SN A e0(Qs)_(eC();n=min(Sn(s),SZ m-1);Mc(m,s,n);m[n]=0;0)
NI A e1(Ax,Qs)_(x(e0(s)))
SN A e2(Ax,Ay,Qs)_(y(e1(x,s)))
SN A eN(OA*a,In,Qs)_(mrn(n,a);e0(s))
NI I eS(Ax/*1*/,Ii)_(P(src,x(0))src=x;o=i;0)
A3(try,x=dot(x,y);P(x,z(x))I(ztF&&zK<3,Ay=aCn(m,n);z=z1(y))eC();z)
A1(epr,I h=64;Cb[3*h+6+SZ m],*r=b;*r++='\'';Mc(r,m,n);r+=n;*r++=10;
 I(src,Ax=src;C*t=xV+o,*p=t,*q=t;W(p>xC&&p>t-h&&p[-1]&&p[-1]-10,p--)W(q<xC+xn&&q<=t+h&&*q&&*q-10,q++)
  Mc(r,p,q-p);I(p<=t-h,*r=r[1]='.')I(q>t+h,r[q-p-2]=r[q-p-1]='.')r+=q-p;*r++=10;Ms(r,32,t-p);r+=t-p;*r++='^';*r++=10)
 eC();write(1,b,r-b);x)
A die(Qs)_(In=Sn(s);Cv[n+1];Mc(v,s,n);v[n]=10;write(1,v,n+1);exit(1);0)

#define h(t,m)\
 NI A0(e##t##0,e0(    #m))\
 NI A1(e##t##1,e1(x,  #m))\
 NI A2(e##t##2,e2(x,y,#m))\
 NI AA(e##t##8,eN(a,n,#m))
EA
