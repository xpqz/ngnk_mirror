#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include"k.h"
C TK(K x)_(Tk[xt])
N NK(K x)_(xn)
V*dK(K x)_(xV)
S V VK(Ct,V*a,K x){I(xtZ,x=cT[t](x))Mc(a,xV,xn*TZ[t]);I(xtR,I(xr==1,AN(0,x))E(mRn(xn,xV)))x(0);}

//            constructors                                                    accessors
//    atom                     list                                   atom                 list
K Kc(Cv)_(ac(v))     K KC(C*a,Nn)_(aV(tC,n,a))                   C cK(K x)_(xv)  V CK(C*a,K x){VK(tC,a,x);}
K Ks(C*s)_(sym(s))   K KS(C**a,Nn)_(Ax=aS(n);i(n,xi=sym(a[i]))x)
K Ki(Iv)_(az(v))     K KI(I*a,Nn)_(aV(tI,n,a))                   I iK(K x)_(xv)  V IK(I*a,K x){VK(tI,a,x);}
K Kf(Dv)_(ad(v))     K KF(D*a,Nn)_(aV(tD,n,a))                   D fK(K x)_(*xD) V FK(D*a,K x){VK(tD,a,x);}
                     K KL(K*a,Nn)_(a?aV(tA,n,a):aA(n))           V LK(K*a,K x){VK(tA,a,x);}
K Kp(V*p)_(al((L)p))

V KA(Qs,K x){x=x(d8(A(as(sym(s)),oA,av,x),4));if(x)mr(x);}
V KR(Qs,V*f,In)_(KA(s,ax(f,n)))
K KE(Qs)_(err0(s))

K ref(K x)_(xR)
V unref(K x){mr(x);}

K K0(K*p,Qs,K*a,In)_(k8(p,s,a,n))
