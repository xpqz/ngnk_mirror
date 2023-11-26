#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define h(x,y,z) S V c##x##y(V*RES a,O V*RES b,U n){x*r=a;O y*p=b;i(n+((1<<z)-1)>>z,j(1<<z,*r++=*p++))}
h(H,G,4)h(G,H,4)h(H,I,3)h(I,H,3)h(G,I,3)h(I,G,3)h(L,H,2)h(H,L,2)h(L,I,2)h(I,L,2)h(G,L,2)
S V cFL(V*RES a,O V*RES b,U n){F*r=a;O L*p=b;i(n+3&-4,r[i]=p[i]==NL?NF:p[i])}
S V cLF(V*RES a,O V*RES b,U n){L*r=a;O F*p=b;i(n+3&-4,r[i]=p[i]!=p[i]?NL:p[i])}
S V cGB(V*RES a,O V*RES b,U n){G*r=a;O G*p=b;i(n,r[i]=p[i>>3]>>(i&7)&1)}
S V cBG(V*RES a,O V*RES b,U n){G*r=a;O G*p=b;MS(r,0,n+63>>6<<3);i(n,r[i>>3]|=(p[i]&1)<<(i&7))}
S A tfx(C t,TY(cBG)*f,A x/*1*/)_(A y=an(xn,t);Mx(f(yV,xV,yn));y)
X1(cA,RA(x)Rt(aA1(x))Rm(et1(x))R_(U n=xN;A y=aA(n);i(n|!n,ya=ii(x,i))x(0);I(!n,yx=mkn(yx))y))
X1(cB,RmMA(e1f(cB,x))RB(x)Ril(ai(gl(x)&1))RG(tfx(tB,cBG,x))R_(en1(x)))
X1(cC,RmMA(e1f(cC,x))RcC(x)Ril(ac(gl(x)))RG(AT(tC,mut(x)))RE(cC(gZ(x)))R_(cC(N(cG(x)))))
X1(cG,RmMA(e1f(cG,x))RG(x)Rt(cI(x))RC(AT(tG,mut(x)))RB(tfx(tG,cGB,x))R_(tfx(tG,cGI,N(cI(x)))))
X1(cH,RmMA(e1f(cH,x))RH(x)Rt(cI(x))R_(tfx(tH,cHI,N(cI(x)))))
X1(cI,RmMA(e1f(cI,x))RI(x)Rilc(ai(gl(x)))RfF(cI(N(cL(x))))R4(tG,tH,tL,tC,tfx(tI,G(&cIG,cIH,0,cIL,0,cIG)[xt-tG],x))RE(gZ(x))R_(et1(x)))
X1(cL,RmMA(e1f(cL,x))RlL(x)Ric(al(xv))RF(tfx(tL,cLF,x))Rf(al(gf(x)))RE(cL(gZ(x)))R_(tfx(tL,cLI,N(cI(x)))))
X1(cF,RmMA(e1f(cF,x))RfF(x)Rilc(af(gl(x)))R_(tfx(tF,cFL,N(cL(x)))))
X1(cS,RmMA(e1f(cS,x))RsS(x)RC(x=str0(x);x(sym(xV)))Rc(as(xv))R_(et1(x)))
A1*cT[]={[tA]=cA,[tB]=cB,[tG]=cG,cH,cI,cL,[tF]=cF,[tC]=cC,[tS]=cS};
S X1(pI,RmMA(e1f(pI,x))Rc(pI(enl(x)))RC(x=str0(x);Q s=xV;P(!*s,x(_R(cn[tl])))L v=pl(&s);x(*s?_R(cn[tl]):az(v)      ))R_(et1(x)))
S X1(pF,RmMA(e1f(pF,x))Rc(pF(enl(x)))RC(x=str0(x);Q s=xV;P(!*s,x(_R(cn[tf])))L v=pf(&s);x(*s?_R(cn[tf]):aV(tf,1,&v)))R_(et1(x)))
S X1(csti,RmMA(e1f(csti,x))RF(sqzZ(cL(x)))Rf(az(gf(x)))RC(cG(x))Rc(ai(xv))Ruvw(ai(xv))RilEGHIL(x)R_(et1(x)))
S Y2(pad,RmMA(e2f(pad,x,y))RC(K2("{y@(!x)+(x<0)*#y}",x,y))Rc(cst(x,enl(y)))R_(et1(y)))
X2(cst,Rs(I v=xv;P(v-(C)v,ed1(y))G(&csti,cF,cC,cS,pI,pF,ed1)[si("ifcsIF",v|'s'*!v)](y))Ril(pad(x,y))R_(et1(y)))
X1(sqzZ,/*RG(i(xn,P(xg&-2,x))cB(x))*/RH(i(xn,P(xh-(G)xh,x))sqzZ(cG(x)))RI(i(xn,P(xi-(H)xi,x))sqzZ(cH(x)))RL(i(xn,P(xl-(I)xl,x))sqzZ(cI(x)))R_(x))
A1(sqz,P(!xtA,x)N n=xn;A y=xx;C t=yt;P(ytMT||ytU,x)
 I(ytz,P(!n,x(oG))I l=0;i(n,A y=xa;I(ytl,l=1)E(P(!yti,x)))I(l,t=tL)E(I a=0;i(n,A y=xa;a=MIN(a,MIN(yv,~yv)))t=tZ(a)))E(i(n,P(t-_t(xa),x)))
 Ym(i(n,P(!mtc_(yx,_x(xa)),x))y=aM(_R(yx),e1f(rs0,_R(yy)));i(n,yq(_R(xa)))x(y))
 y=an(n,TT[t]);I v=yw;I(v<3,G(&cGL,cHL,cIL)[v](yV,xV,n))E(i(n,yl=gl_(xa)))x(y))
A1(gZ,Lij x(0);P(i<0,x=az(i);x(add(x,gZ(aE(0,j-i)))))C t=MAX(tZ(i),tZ(j-1));x=an(j-i,t);tilV(xV,i,j-i,t-tG);x)
A wdn(A x,U i,U j,U n)_(C t=xt;Q(xtZC);A y=an(n,t+1);Mx(G(&cHG,cIH,cLI,cFL,0,cHG)[t-tG](yV,xV+((W)i*TW[t]>>3),j-i))y)
