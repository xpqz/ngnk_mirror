#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define AL(x) __builtin_assume_aligned(x,32)
#define abn V*RES a,O V*RES b,U n
#define h(x,y,z) S V c##x##y(abn){x*r=AL(a);O y*p=AL(b);i(n+((1<<z)-1)>>z,j(1<<z,*r++=*p++))}
 h(H,G,4)h(G,H,4)h(H,I,3)h(I,H,3)h(G,I,3)h(I,G,3)h(H,L,2)h(L,I,2)h(I,L,2)h(G,L,2)
#undef h
S V cFL(abn){F*r=AL(a);O L*p=AL(b);i(n+3>>2,j(4,*r++=*p==NL?NF:*p;p++))}
S V cLF(abn){L*r=AL(a);O F*p=AL(b);i(n+3>>2,j(4,*r++=*p!=*p?NL:*p;p++))}
S V cGB(abn){G*r=AL(a);O W*p=AL(b);i(n+63>>6,W v=*p++;j(64,*r++=!!(v&1<<j)))}
S V cBG(abn){W*r=AL(a);O G*p=AL(b);i(n+63>>6,W v=0;j(64,v|=(*p++&1ull)<<j)*r++=v)}
S O TY(&cBG)a[][7]={
// tB, tG, tH, tI, tL, tF, tC
 {  0,cBG,  0,  0,  0,  0,cBG},//tB
 {cGB,  0,cGH,cGI,cGL,  0,  0},//tG
 {  0,cHG,  0,cHI,cHL,  0,cHG},//tH
 {  0,cIG,cIH,  0,cIL,  0,cIG},//tI
 {  0,  0,  0,cLI,  0,cLF,  0},//tL
 {  0,  0,  0,  0,cFL,  0,  0},//tF
};

SN X1(_cB,Rilc(ai(1& gl(x)))                 R_(en(x)))
SN X1(_cG,Rilc(ai((G)gl(x)))RC(AT(tG,mut(x)))R_(cG(N(cI(x)))))
SN X1(_cH,Rilc(ai((H)gl(x)))                 R_(cH(N(cI(x)))))
SN X1(_cI,Rilc(ai(   gl(x)))RfF(cI(N(cL(x))))R_(et(x)))
SN X1(_cL,Rilc(al(   gl(x)))Rf(al(gf(x)))    R_(cL(N(cI(x)))))
SN X1(_cF,Rilc(af(   gl(x)))                 R_(cF(N(cL(x)))))
SN X1(_cC,Rilc(ac(   gl(x)))RG(AT(tC,mut(x)))R_(cC(N(cG(x)))))

NI A2(cT,UC t=xv,u=yt;U i=t-tB,j=u-tB;Q(xti||x==t)Q(t<8)
 P(t==TT[u],y)
 YmMA(r2f(cT,x,y))
 YE(cT(x,gZ(y)))
 YS(et(y))
 TY(&cBG)f;
 P(i<L(a)&&j<L(*a)&&(f=a[i][j]),A z=an(yn,t);My(f(zV,yV,zn));z)
 P(t==tS,Yc(as(yv))YC(y=str0(y);y(sym(yV)))et(y))
 G(&_cB,_cG,_cH,_cI,_cL,_cF,_cC)[t-tB](y))

#define h(T) NI A1(c##T,cT(t##T,x))
 h(B)h(G)h(H)h(I)h(L)h(F)h(S)h(C)
#undef h

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
