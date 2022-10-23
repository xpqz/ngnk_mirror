#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S C b[PG],*r=b;S I d;
NI A err0(Qs)_(r=b;d=0;Nn=min(Sn(s),32);r=b;*r++='\'';Mc(r,s,n);r+=n;*r++=10;0)
SN A err1(Ax,Qs)_(x(err0(s)))
SN A err2(Ax,Ay,Qs)_(y(err1(x,s)))
SN A errN(OA*a,In,Qs)_(mrn(n,a);err0(s))
NI V eQ(Qs,Nn,Ni){I(++d>=5,I(d==5,Mc(r," ..\n",4);r+=4)return)
 Qp=s+i,q=p,t=p;I h=64;W(p>s&&p>t-h&&p[-1]&&p[-1]-10,p--)W(q<s+n&&q<=t+h&&*q&&*q-10,q++)
 *r++=32;Mc(r,p,q-p);I(p<=t-h,*r=r[1]='.')I(q>t+h,r[q-p-2]=r[q-p-1]='.')r+=q-p;*r++=10;
 Ms(r,32,t-p+1);r+=t-p+1;*r++='^';*r++=10;}
NI V eS(Ax/*0*/,Ni)_(eQ(xV,xn,i))
A3(try,/*001*/x=dot(x,yR);P(x,z(x))I(ztU,z=z1(aCn(b,r-b)))r=b;d=0;z)
A1(epr,write(2,b,r-b);r=b;x)
A1(err,XC(x=str0(x);err1(x,xV))P(x==au,aCn(b,r-b))err1(x,"err"))
NI A die(Qs)_(In=Sn(s);Cv[n+1];Mc(v,s,n);v[n]=10;write(2,v,n+1);exit(1);0)

#define h(t,m)\
 NI A0(e##t##0,err0(    #m))\
 NI A1(e##t##1,err1(x,  #m))\
 NI A2(e##t##2,err2(x,y,#m))\
 NI AA(e##t##8,errN(a,n,#m))
EA
