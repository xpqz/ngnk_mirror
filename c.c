#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define abn V*RES a,O V*RES b,U n
#define M(x,y,z) S V c##x##y(abn){x*r=AL(a);O y*p=AL(b);i(n+((1<<z)-1)>>z,j(1<<z,*r++=*p++))}
 M(H,G,4)M(G,H,4)M(H,I,3)M(I,H,3)M(G,I,3)M(I,G,3)M(H,L,2)M(L,I,2)M(I,L,2)M(G,L,2)
#undef M
S V cFL(abn){F*r=AL(a);O L*p=AL(b);i(n+3>>2,j(4,*r++=*p==NL?NF:*p;p++))}
S V cLF(abn){L*r=AL(a);O F*p=AL(b);i(n+3>>2,j(4,*r++=*p!=*p?NL:*p;p++))}
S V cGB(abn){G*r=AL(a);O G*p=AL(b);i(n,*r++=p[i>>3]>>(i&7)&1)}
S V cBG(abn){G*r=AL(a);O G*p=AL(b);MS(r,0,n+63>>6<<3);i(n,r[i>>3]|=(*p++&1)<<(i&7))}
NI A2(cTT,UC t=xv,u=yt,i=t-tB,j=u-tB;Q(i<8);P(j>7,et(y))
 S O TY(&cBG)a[][8]={{0,cBG,0,0,0,0,cBG},{cGB,0,cGH,cGI,cGL,0,0},{0,cHG,0,cHI,cHL,0,cHG},{0,cIG,cIH,0,cIL,0,cIG},{0,0,0,cLI,0,cLF,0},{0,0,0,0,cFL,0,0},{},{}};
 TY(&cBG)f=a[i][j];P(f,A z=an(yn,t);My(f(zV,yV,zn));z)
 P(t==tS,u==tC?(y=str0(y),y(sym(yV))):et(y))
 P((1<<t|1<<u)==(1<<tG|1<<tC),AT(t,mut(y)))
 cTT(t,N(cTT(u==tB?tG:G(tG,tI,tI,tL,tI,tL,tG,tC)[i],y))))
NI A2(cT,UC t=xv,u=yt;Q(xti||x==t)Q(tB<=t&&t<=tS)P(t==TT[u],y)
 Y(RmMA(r2f(cT,x,y))RE(cTT(x,gZ(y)))Rf(cT(x,N(cL(y))))Rilc(L v=gl(y);SW(t,R4(tB,tG,tH,tI,ai(v))RC(ac(v))RL(al(v))RF(af(v))RS(u==tc?as(yv):et0()))0)R_(cTT(x,y)))et(y))
A1(cB,cT(tB,x))A1(cG,cT(tG,x))A1(cH,cT(tH,x))A1(cI,cT(tI,x))A1(cL,cT(tL,x))A1(cF,cT(tF,x))A1(cC,cT(tC,x))A1(cS,cT(tS,x))
S X1(csti,RmMA(e1f(csti,x))RF(sqzZ(cL(x)))Rf(az(gf(x)))RC(cG(x))Rc(ai(xv))Ruvw(ai(xv))RilEGHIL(x)R_(et(x)))
S X1(prsI,RmMA(e1f(prsI,x))Rc(prsI(enl(x)))RC(x=str0(x);Q s=xV;P(!*s,x(_R(cn[tl])))L v=pl(&s);x(*s?_R(cn[tl]):az(v)      ))R_(et(x)))
S X1(prsF,RmMA(e1f(prsF,x))Rc(prsF(enl(x)))RC(x=str0(x);Q s=xV;P(!*s,x(_R(cn[tf])))L v=pf(&s);x(*s?_R(cn[tf]):aV(tf,1,&v)))R_(et(x)))
S Y2(pad,RmMA(e2f(pad,x,y))RC(K2("{y@(!x)+(x<0)*#y}",x,y))Rc(dlr(x,enl(y)))R_(et(y)))
X2(dlr,Rs(I v=xv;P(v-(C)v,ed(y))G(&csti,cF,cC,cS,prsI,prsF,ed)[si("ifcsIF",v|'s'*!v)](y))Ril(pad(x,y))R_(et(y)))
X1(sqzZ,/*RG(i(xn,P(xg&-2,x))cB(x))*/RH(i(xn,P(xh-(G)xh,x))sqzZ(cG(x)))RI(i(xn,P(xi-(H)xi,x))sqzZ(cH(x)))RL(i(xn,P(xl-(I)xl,x))sqzZ(cI(x)))R_(x))

A1(sqz,
 P(!xtA,x)
 A y=xx;C t=yt;U n=xn;
 P(ytMT||ytU,x)
 I(ytz,
  P(!n,x(emp(tG)))
  B l=0;i(n,A y=xa;I(ytl,l=1)E(P(!yti,x)))
  I(l,t=tL)E(I a=0;i(n,I b=_v(xa);a|=b^b>>31)t=tZ(a))
 )
 E(i(n,P(t-_t(xa),x)))
 Ym(i(n,P(!mtc_(yx,_x(xa)),x))y=aM(_R(yx),e1f(rs0,_R(yy)));i(n,PSH(y,_R(xa)))x(y))
 y=an(n,TT[t]);
 U w=yw-3;
 I(w<3,G(&cGL,cHL,cIL)[w](yV,xV,n))
 E(i(n,yl=gl_(xa)))
 x(y))

X1(blw,RA(x)Rt(aA1(x))Rm(et(x))R_(U n=xN;A y=aA(n);i(n|!n,ya=ii(x,i))x(0);I(!n,yx=mkn(yx))y))
A1(gZ,Lij x(0);P(i<0,x=az(i);x(add(x,gZ(aE(0,j-i)))))C t=MAX(tZ(i),tZ(j-1));x=an(j-i,t);tilV(xV,i,j-i,t-tG);x)
