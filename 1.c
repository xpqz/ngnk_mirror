#include<math.h> // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include"a.h"
#define hf(f,T,e...) S N f(OV*RE a0,V*RE r0,Nn)_(O T*a=a0;T*r=r0;LI(a)LI(r)e)
#define NG(T) hf(neg##T,T,Ni=0;I g=HD/SZ(T);W(i<n,I o=0;j(g,o|=a[j]==(T)(1<<SZ(T)*8-1))P(o,i)j(g,r[j]=-a[j])a+=g;r+=g;i+=g)n)
#define F1(f,T,c...) hf(f##T,T,i(PD(n,a),r[i]=({c;}))n)
TD size_t(*F1)(OV*,V*,N);NG(B)NG(H)NG(I)F1(neg,L,-a[i])F1(neg,F,-a[i])

A pen(Ax,A1*f)_(XmMA(e1f(f,x))et1(x))
A1(neg,XmMA(e1f(neg,x))Xzc(az(-gl(x)))Xf(af(-gf(x)))XC(neg(cB(x)))
 XZF(S O F1 f[]={negB,negH,negI,negL,negF};Nn=xn;Ay=xr>1?an(n,xt):x;Nm=f[xt-tB](xV,yV,n);
  I(m<n,I(x-y,x=wdn(x,m,n,n-m);y=wdn(y,0,m,n))E(x=y=wdn(y,0,n,n))N mw=m*yW;f[xt-tB](xV+(x-y?0:mw),yV+mw,n-m))x-y?x(y):y)
 et1(x))
A1(not,XmMA(e1f(not,x))XU(x(ai(x==au)))eql(xtsS?as(0):ai(0),x))
A1(nul,XmMA(e1f(nul,x))XU(x(ai(x==au)))XF(Ay=aB(xn);xe(i(xn,yb=xf!=xf);y))Xf(x(ai(*xF!=*xF)))eql(cn[xt],x))
A1(flr,XmMA(e1f(flr,x))XcC(K1("`c$@[!256;65+!26;+;32]",x))XsS(cS(flr(str(x))))XzZ(x)XfF(Ay=an(xn,xt+tl-tf);xe(i(yn,yl=xf<0?(L)xf-(xf<(L)xf):(L)xf)y))et1(x))

#define h(k,f) A1(k,XfF(Ay=xr-1?an(xn,xt):x;i(PD(xn,xF),yf=f(xf));x-y?x(y):y)XmMA(e1f(k,x))k(N(cF(x))))
h(ksin,sin)h(kcos,cos)h(klog,log)h(kexp,exp)h(sqr,__builtin_sqrt)
