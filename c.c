#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define AL(x) __builtin_assume_aligned(x,32)
#define abn V*RES a,O V*RES b,U n
#define h(x,y,z) S V c##x##y(abn){x*r=AL(a);O y*p=AL(b);i(n+((1<<z)-1)>>z,j(1<<z,*r++=*p++))}
h(H,G,4)h(G,H,4)h(H,I,3)h(I,H,3)h(G,I,3)h(I,G,3)h(H,L,2)h(L,I,2)h(I,L,2)h(G,L,2)
S V cFL(abn){F*r=AL(a);O L*p=AL(b);i(n+3>>2,j(4,*r++=*p==NL?NF:*p;p++))}
S V cLF(abn){L*r=AL(a);O F*p=AL(b);i(n+3>>2,j(4,*r++=*p!=*p?NL:*p;p++))}
S V cGB(abn){G*r=AL(a);O W*p=AL(b);i(n+63>>6,W v=*p++;j(64,*r++=!!(v&1<<j)))}
S V cBG(abn){W*r=AL(a);O G*p=AL(b);i(n+63>>6,W v=0;j(64,v|=(*p++&1ull)<<j)*r++=v)}
S O TY(&cBG)a[][8]={
// tB, tG, tH, tI, tL, tF, tC
 {  0,cBG,  0,  0,  0,  0,cBG},//tB
 {cGB,  0,cGH,cGI,cGL,  0,  0},//tG
 {  0,cHG,  0,cHI,cHL,  0,cHG},//tH
 {  0,cIG,cIH,  0,cIL,  0,cIG},//tI
 {  0,  0,  0,cLI,  0,cLF,  0},//tL
 {  0,  0,  0,  0,cFL,  0,  0},//tF
};
SN A cTT(C t,A x/*1*/)_(A y=an(xn,t);Mx(a[t-tB][xt-tB](yV,xV,yn));y)
NI X1(cB,RmMA(e1f(cB,x))             RB(x) Rilc(ai(gl(x)&1))RG(cTT(tB,x))                             R_(en(x)))
NI X1(cC,RmMA(e1f(cC,x))RE(cC(gZ(x)))RC(x) Rilc(ac(gl(x)))  RG(AT(tC,mut(x)))                         R_(cC(N(cG(x)))))
NI X1(cG,RmMA(e1f(cG,x))             RG(x) Rt(cI(x))        RC(AT(tG,mut(x)))RB(cTT(tG,x))            R_(cTT(tG,N(cI(x)))))
NI X1(cH,RmMA(e1f(cH,x))             RH(x) Rt(cI(x))        RGC(cTT(tH,x))                            R_(cTT(tH,N(cI(x)))))
NI X1(cI,RmMA(e1f(cI,x))RE(cI(gZ(x)))RI(x) Rilc(ai(gl(x)))  RfF(cI(N(cL(x))))R4(tG,tH,tL,tC,cTT(tI,x))R_(et(x)))
NI X1(cL,RmMA(e1f(cL,x))RE(cL(gZ(x)))RL(x) Rilc(al(gl(x)))  Rf(al(gf(x)))RF(cTT(tL,x))                R_(cTT(tL,N(cI(x)))))
NI X1(cF,RmMA(e1f(cF,x))             RfF(x)Rilc(af(gl(x)))                                            R_(cTT(tF,N(cL(x)))))
NI X1(cS,RmMA(e1f(cS,x))             RsS(x)RC(x=str0(x);x(sym(xV)))Rc(as(xv))                         R_(et(x)))
A1*cT[]={[tB]=cB,cG,cH,cI,cL,cF,cC,cS};
S X1(csti,RmMA(e1f(csti,x))RF(sqzZ(cL(x)))Rf(az(gf(x)))RC(cG(x))Rc(ai(xv))Ruvw(ai(xv))RilEGHIL(x)R_(et(x)))
S X1(prsI,RmMA(e1f(prsI,x))Rc(prsI(enl(x)))RC(x=str0(x);Q s=xV;P(!*s,x(_R(cn[tl])))L v=pl(&s);x(*s?_R(cn[tl]):az(v)      ))R_(et(x)))
S X1(prsF,RmMA(e1f(prsF,x))Rc(prsF(enl(x)))RC(x=str0(x);Q s=xV;P(!*s,x(_R(cn[tf])))L v=pf(&s);x(*s?_R(cn[tf]):aV(tf,1,&v)))R_(et(x)))
S Y2(pad,RmMA(e2f(pad,x,y))RC(K2("{y@(!x)+(x<0)*#y}",x,y))Rc(dlr(x,enl(y)))R_(et(y)))
X2(dlr,Rs(I v=xv;P(v-(C)v,ed(y))G(&csti,cF,cC,cS,prsI,prsF,ed)[si("ifcsIF",v|'s'*!v)](y))Ril(pad(x,y))R_(et(y)))
X1(sqzZ,/*RG(i(xn,P(xg&-2,x))cB(x))*/RH(i(xn,P(xh-(G)xh,x))sqzZ(cG(x)))RI(i(xn,P(xi-(H)xi,x))sqzZ(cH(x)))RL(i(xn,P(xl-(I)xl,x))sqzZ(cI(x)))R_(x))
A1(sqz,P(!xtA,x)U n=xn;A y=xx;C t=yt;P(ytMT||ytU,x)
 I(ytz,P(!n,x(oG))I l=0;i(n,A y=xa;I(ytl,l=1)E(P(!yti,x)))I(l,t=tL)E(I a=0;i(n,A y=xa;a=MIN(a,MIN(yv,~yv)))t=tZ(a)))E(i(n,P(t-_t(xa),x)))
 Ym(i(n,P(!mtc_(yx,_x(xa)),x))y=aM(_R(yx),e1f(rs0,_R(yy)));i(n,yq(_R(xa)))x(y))
 y=an(n,TT[t]);I v=yw;I(v<3,G(&cGL,cHL,cIL)[v](yV,xV,n))E(i(n,yl=gl_(xa)))x(y))
X1(blw,RA(x)Rt(aA1(x))Rm(et(x))R_(U n=xN;A y=aA(n);i(n|!n,ya=ii(x,i))x(0);I(!n,yx=mkn(yx))y))
A1(gZ,Lij x(0);P(i<0,x=az(i);x(add(x,gZ(aE(0,j-i)))))C t=MAX(tZ(i),tZ(j-1));x=an(j-i,t);tilV(xV,i,j-i,t-tG);x)
