#include"k.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - http://bitbucket.org/ngn/k/raw/master/LICENSE
A1(neg,sub(ai(0),x))A1(not,xtaAX?ea1(not,x):fun(x)?mtc(x,au0):eql(x,xtsS?as(0):ac(0)))
A1(sqr,P(xtaAX,ea1(sqr,x))x=N(gD(x));A u=Ar(x)-1?atn(xt,xn):x;F(un,udi=__builtin_sqrt(xdi))$(xc-uc,xr)u)
A1(nul,xtaAX?ea1(nul,x):eql(x,mR(cn[xt])))S C lwc(C c)_(c+32*C3('A',c,'Z'))S L fl1(D d)_(d<0?(L)d-(d<(L)d):(L)d)
A1(flr,P(xtlL||xtiI,x)P(xtc,ac(lwc(gc(x))))P(xtC,A u=aC(xn);mr2(x,F(un,uci=lwc(xci))u))P(xtaAX,ea1(flr,x))
 x=N(gD(x));A u=atn(xtd?tl:tL,xn);F(un,uli=fl1(xdi))xr;u)

#define divi(x,y) (y?x/y:!x?_0Ni:a>0?_0Wi:-_0Wi)
#define divl(x,y) (y?x/y:!x?_0N :a>0?_0W :-_0W )
#define divd(x,y) (x/y)
#define modi(x,y) (x>0?(y%x+x)%x:x?y/-x:_0Ni)
#define modl(x,y) (x>0?(y%x+x)%x:x?y/-x:_0N )
#define modd(x,y) ((V)x,(V)y,_0n)
#define hf(x,t,rt,c) SN V x(t*a,t*b,rt*r,L n){c;}
#define ha(x,xiI,xIi,xII,xlL,xLl,xLL,xdD,xDd,xDD,rD)\
 hf(x##iI,I,I,xiI)hf(x##Ii,I,I,xIi)hf(x##II,I,I,xII)\
 hf(x##lL,L,L,xlL)hf(x##Ll,L,L,xLl)hf(x##LL,L,L,xLL)\
 hf(x##dD,D,rD,xdD)hf(x##Dd,D,rD,xDd)hf(x##DD,D,rD,xDD)
#define htTo(o)__typeof__(*a)v=*a;F(n,r[i]=v o b[i])
#define htT(f)__typeof__(*a)v=*a;F(n,r[i]=f(v,b[i]))
#define hTto(o)__typeof__(*b)v=*b;F(n,r[i]=a[i]o v)
#define hTt(f)__typeof__(*b)v=*b;F(n,r[i]=f(a[i],v))
#define hTTo(o)F(n,r[i]=a[i]o b[i])
#define hTT(f)F(n,r[i]=f(a[i],b[i]))
#define hs b,a,r,n
#define hv (V*)a,(V*)b,r,n
#define hn(x)__typeof__(*b)v=-*b;x(a,&v,r,n);
//     iI       ,Ii       ,II       ,lL       ,Ll       ,LL       ,dD       ,Dd       ,DD
ha(add,htTo(+)  ,addiI(hs),hTTo(+)  ,htTo(+)  ,addlL(hs),hTTo(+)  ,htTo(+)  ,hTto(+)  ,hTTo(+)  ,D)
ha(sub,htTo(-)  ,hn(addIi),hTTo(-)  ,htTo(-)  ,hn(addLl),hTTo(-)  ,htTo(-)  ,hn(addDd),hTTo(-)  ,D)
ha(mul,htTo(*)  ,muliI(hs),hTTo(*)  ,htTo(*)  ,mullL(hs),hTTo(*)  ,htTo(*)  ,muldD(hs),hTTo(*)  ,D)
ha(div,htT(divi),hTt(divi),hTT(divi),htT(divl),hTt(divl),hTT(divl),htT(divd),hTt(divd),hTT(divd),D)
ha(mod,htT(modi),hTt(modi),hTT(modi),htT(modl),hTt(modl),hTT(modl),htT(modd),hTt(modd),hTT(modd),D)
ha(mnm,htT(min) ,mnmiI(hs),hTT(min) ,htT(min) ,mnmlL(hs),hTT(min) ,htT(min) ,mnmdD(hs),hTT(min) ,D)
ha(mxm,htT(max) ,mxmiI(hs),hTT(max) ,htT(max) ,mxmlL(hs),hTT(max) ,htT(max) ,mxmdD(hs),hTT(max) ,D)
ha(ltn,htTo(<)  ,hTto(<)  ,hTTo(<)  ,htTo(<)  ,hTto(<)  ,hTTo(<)  ,htTo(<)  ,hTto(<)  ,hTTo(<)  ,L)
ha(gtn,ltnIi(hs),ltniI(hs),ltnII(hs),ltnLl(hs),ltnlL(hs),ltnLL(hs),ltnDd(hs),ltndD(hs),ltnDD(hs),L)
ha(eql,htTo(==) ,eqliI(hs),hTTo(==) ,htTo(==) ,eqllL(hs),hTTo(==) ,eqllL(hv),eqllL(hv),eqlLL(hv),L)
#undef hn
#undef hv
#undef hs
#undef hTT
#undef hTTo
#undef hTt
#undef hTto
#undef htT
#undef htTo
#undef ha
#undef hf

#define h(x){{x##iI,x##lL,x##dD},{x##Ii,x##Ll,x##Dd},{x##II,x##LL,x##DD}},
S O V*arf[10][3][3]={h(add)h(sub)h(mul)h(div)h(mod)h(mnm)h(mxm)h(ltn)h(gtn)h(eql)};
#undef h
S A pen2(A x,A y,I v)_(P(xta&&yta,A u=gkv(&y);am1(A_(x,y,av(v),u),4))P(xtaAX||ytaAX,eac(av(v),A_(x,y),2))
 A1*g=xtdD||ytdD?gD:xtlL||ytlL?gL:gI;x=Ny(g(x));y=Nx(g(y));I k=xtT<<1|ytT;P(k==3&&xn-yn,el(x,y))
 V*a=xti?(V*)&x:xc,*b=yti?(V*)&y:yc;void(*f)(V*,V*,V*,L)=arf[v-1][k-!!k][xt-(xtt?ti:tI)];UC t=xtdD&&v<8?tD:xtiI?tI:tL;
 $(!k,t+=ti-tI;P(t==ti,I r;f(a,b,&r,1);ai(r)))
 P(xt==t&&Ar(x)==1,mr2(y,f(a,b,xc,xn);x))
 P(yt==t&&Ar(y)==1,mr2(x,f(a,b,yc,yn);y))
 A u=atn(t,k-1?xn:yn);mr2(x,mr2(y,f(a,b,uc,un);u)))
S A1(s2l,xts?al(gs(x)):AT(tL,x))A2(eql,$(xtsS&&ytsS,x=s2l(x);y=s2l(y))pen2(x,y,vi('=')))
A2(mod,P(xtl,xtl&&*xl==_0N?xr,out(y):pen2(x,y,vi('!')))$(xtt||xta,$(xta,x=enl(x))x=rsh(al(len_(y)),x))
                                                       $(ytt||yta,$(yta,y=enl(y))y=rsh(al(len_(x)),y))len_(x)-len_(y)?el(x,y):aa(x,y))
#define h(c,s) A2(s,pen2(x,y,vi(c)))
h('+',add)h('-',sub)h('*',mul)h('%',dvd)h('&',mnm)h('|',mxm)h('<',ltn)h('>',gtn)
#undef h
