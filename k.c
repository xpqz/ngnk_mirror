#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include"k.h"
C TK(K x)_(Tk[xt])
N NK(K x)_(xn)
V*dK(K x)_(xV)
S V VK(C t,V*a,K x){I(xtZ,x=cT[t](x))MC(a,xV,(W)xn*TW[t]>>3);I(xtR,I(xr==1,AN(0,x))E(mRn(xn,xV)))x(0);}

//            constructors                                                     accessors
//    atom                     list                                    atom                 list
K Kc(C v)_(ac(v))    K KC(C*a ,N n)_(aV(tC,n,a))                   C cK(K x)_(xv)  V CK(C*a,K x){VK(tC,a,x);}
K Ks(C*s)_(sym(s))   K KS(C**a,N n)_(A x=aS(n);i(n,xi=sym(a[i]))x)
K Ki(I v)_(az(v))    K KI(I*a ,N n)_(aV(tI,n,a))                   I iK(K x)_(xv)  V IK(I*a,K x){VK(tI,a,x);}
K Kf(F v)_(af(v))    K KF(F*a ,N n)_(aV(tF,n,a))                   F fK(K x)_(*xF) V FK(F*a,K x){VK(tF,a,x);}
                     K KL(K*a ,N n)_(a?aV(tA,n,a):aA(n))                           V LK(K*a,K x){VK(tA,a,x);}
K Kp(V*p)_(al((L)p))

V KA(Q s,K x){x=x(d8(A(as(sym(s)),oA,av,x),4));if(x)mr(x);}
V KR(Q s,V*f,I n)_(KA(s,ax(f,n)))
K KE(Q s)_(err0(s))

K ref(K x)_(xR)
V unref(K x){mr(x);}

K K0(K*p,Q s,K*a,I n)_(k8(p,s,a,n))
