#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define Mh(x,y) (MC(x,y,L(y)-1)+L(y)-1)
S Qq="0001020304050607080910111213141516171819202122232425262728293031323334353637383940414243444546474849"
     "5051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899";
S C*S8(C*s,UI v)_(i(4,MC(s+6-2*i,q+v%100*2,2);v/=100)s+8) S C*s8(C*s,UI v)_(Cb[8],*p=b+6;W(1,MC(p,q+v%100*2,2);v/=100;B(!v)p-=2)p+=*p=='0';In=b+8-p;MC(s,p,n)+n)
S C*S16(C*s,UL v)_(S8(S8(s,v/(UI)1e8),v%(UI)1e8))         S C*s16(C*s,UL v)_(v<(UI)1e8?s8(s,v):S8(s8(s,v/(UI)1e8),v%(UI)1e8))
S C*su(C*s,UL v)_(v<(UL)1e16?s16(s,v):S16(s8(s,v/(UL)1e16),v%(UL)1e16))C*sl(C*s,Lv)_(I(v<0,P(v==NL,Mh(s,"0N"))v=-v;*s++='-')su(s,v))
// github.com/ulfjack/ryu (apache2|boost license)
#if defined(__SIZEOF_INT128__)
 S UL msh(UL m,O UL*a,Ii)_(__uint128_t g=m;((g**a>>64)+g*a[1])>>(i-64))S UL msha(UL m,O UL*a,Ii,UL*v,UL*w,I sh)_(*v=msh(m+2,a,i);*w=msh(m-1-sh,a,i);msh(m,a,i))
#else
 S UL shr(UL l,UL h,UI d)_(h<<(64-d)|l>>d)
 S UL mult(UL a,UL b,UL*rh)_(UI al=a,ah=a>>32,bl=b,bh=b>>32;UL c=(UL)al*bl,u=(UI)(c>>32)+(UL)ah*bl,v=(UI)u+(UL)al*bh;*rh=(UI)(u>>32)+(UI)(v>>32)+(UL)ah*bh;v<<32|(UI)c)
 S UL msha(UL m,O UL*a,Ii,UL*v,UL*w,I sh)_(m>>=1;UL t,l=mult(m,*a,&t),h,m0=t+mult(m,a[1],&h);h+=m0<t;UL l2=l+*a,m2=m0+a[1]+(l2<l),h2=h+(m2<m0);*v=shr(m2,h2,i-65);
  I(sh==1,UL l3=l-*a,m3=m0-a[1]-(l3>l),h3=h-(m3>m0);*w=shr(m3,h3,i-65))E(UL l3=l+l,m3=m0+m0+(l3<l),h3=h+h+(m3<m0),l4=l3-*a,m4=m3-a[1]-(l4>l3),h4=h3-(m4>m3);*w=shr(m4,h4,i-64))shr(m0,h,i-65))
#endif
S UL I5[342][2],P5[326][2];S UL addcll(UL x,UL y,UL c,UL*p)_(UL u=x+y+c;*p=u<x||u<y;u) // or __builtin_addcll
S V shr3(UL*x,UL*y,I d){i(2,x[i]=y[i]>>d|y[i+1]<<(64-d))x[2]=y[2]>>d;}S V shr2(UL*a){*a>>=1;*a|=a[1]<<63;a[1]>>=1;}S V inc2(UL*a){a[1]+=!++*a;}
S V pws5(UL(*a)[2],In,L u,Lv,L w){UL x[]={u,v,w},y[3],c;i(n,MC(a+i,x+1,16);shr3(y,x,2);c=0;i(3,x[i]=addcll(x[i],y[i],c,&c))I(x[2]>>61,shr3(x,x,1)))}
S V initp5(){pws5(I5,L(I5),0xebd5cf2016a52921,0x4ac7ca59a424c507,0x9558b4661b6565f8);pws5(P5,L(P5),0,0,1ll<<61);I5[0][0]=0x0958f94b348498a0;I5[0][1]=0x12ab168cc36cacbf;
 shr2(I5[1]);shr2(I5[1]);shr2(I5[2]);shr2(I5[3]);i(L(I5),inc2(&I5[i][0]))inc2(I5[L(I5)-1]);shr2(P5[0]);}
S UI dm(UL*p)_(UL x=*p,q=x/10;*p=q;(UI)x-10*(UI)q)S I l10p2(I x)_(x*78913>>18)S I l10p5(I x)_(x*732923>>20)S I p5b(I x)_(x*1217359>>19)
S I mp5(UL x,UI p)_(i(p,UL q=x/5;P((UI)x-5*(UI)q,0)x=q)1)S I mp2(UL x,UI p)_(!(x&((1ll<<p)-1)))
C*sf(C*s,L d)_(UL x=d,m=x<<12>>12;I e=x<<1>>53;I(x>>63,*s++='-')P(e==2047,m?Mh(s,"0n"):Mh(s,"0w"))P(!m&&!e,Mh(s,"0.0"))
 m|=(UL)!!e<<52;e+=!e-1077;I t,ev=!(m&1),h=m<<12||e<-1075,u0=0,w0=0;UL u,v,w;m<<=2;I(!**I5,initp5())
 I(e>1,t=l10p2(e)-(e>7);u=msha(m,I5[L(I5)-1-t],t-e+p5b( t)+125,&v,&w,h);I(t<22,!(m%5)?u0=mp5(m,t):ev?w0=mp5(m-1-h,t):(v-=mp5(m+2,t))))
 E( t=e+l10p5(-e)-(e<3);u=msha(m,P5[       -t],t-e-p5b(-t)+124,&v,&w,h);I(t<e+2,u0=1;ev?w0=h:--v)J(t<e+63,u0=mp2(m,t-e)))
 I(w0||u0,Cd=0;W((v/=10)>w/10,w0&=!dm(&w);u0&=!d;d=dm(&u);t++)I(w0,W(!dm(&w),u0&=!d;d=dm(&u);t++))I(u0&&d==5&&!(u&1),d=4)u+=d>=5||(u==w&&!(ev||w0)))
 E(Cd=0;W((v/=10)>(w/=10),d=dm(&u);t++)u+=u==w||d>=5)
 s++;I l=su(s,u)-s-1;s[-1]=*s;t+=l;P(IN(t,16),Ik=l<t?l:t;memmove(s,s+1,k);MS(s+l,'0',MAX(0,t-l));s+=t;*s++='.';s+=l-k;I(t>=l,*s++='0')s)
 P(-4<t&&t<0,i(l+1,s[l-t-i]=s[l-i])s[-1]='0';*s++='.';MS(s,'0',-t-1)+l-t)I(l>0,*s++='.';s+=l)*s++='e';I(t<0,t=-t;*s++='-')su(s,t))
A1(str0,Q(xtC);Nn=xn;x=AN(n,room(n+1,x));xC[n]=0;x)
A1(str,Xzf(Ay=aC(24);TY(sf)*f=xtf?sf:sl;AN(f(yC,gl(x))-yC,y))Xs(Lv=xv;aCz(qs(&v)))Xc(enl(x))XU(kst(x))e1f(str,x))
V hexC(Qs,Nn,C*r){S Qq="0123456789abcdef";i(n,Cc=*s++;*r++=q[(UC)c>>4];*r++=q[c&15])}
A1(hex,XC(Ay=aC(2*xn);xe(hexC(xV,xn,yV);y))XmMA(e1f(hex,x))et1(x))
SN V unh0(C*q){MS(q,-1,256);i(10,q['0'+i]=i)i(6,q['A'+i]=q['a'+i]=10+i)}
A unhC(Qs,Nn)_(P(n&1,el0())S C q[256];I(!*q,unh0(q))Cv=0;i(n,v|=q[s[i]])P(v<0,ed0())Ax=aC(n>>1);i(xn,xc=q[*s]<<4|q[s[1]];s+=2)x)
A1(unh,XC(x(unhC(xV,xn)))XmMA(e1f(unh,x))et1(x))

S A pre(Cc,Ax)_(cat(ac(c),x))
S A1(par,apc(pre('(',x),')'))
S A1(ek,e1f(kst,x))
S A1(kss,S C e[128]={'0',[9]='t','n',[13]='r',[34]='"',[92]='\\'};Nn=xn+2;i(xn,Cc=xc;P(c>126u||(c<32&&!e[c]),cat11(aCz("0x"),hex(x)))n+=!!e[c])
 Ay=aC(n);C*s=yC;*s++='"';i(xn,Cc=xc;I(e[c],*s++='\\';c=e[c])*s++=c)*s='"';x(y))
S A kp(Ax,Qp,Qq,Qs)_(Ct=TS[xt];(strchr(p,t)?xn==1:strchr(q,t)?xn<2:!!strchr(s,t))?par(kst(x)):kst(x))
A1(kl,kp(x,"AC","IFS","Mmqruvw"))
A1(kr,kp(x,"","","qruvw"))
A1(kw,kp(x,"AC","IFS","Mmpqw"))
A1(kst,
 SW(xt,
  CR(tc,kss(enl(x)))
  CR(tm,Ay=kv(&x);cat11(apc(kl(x),'!'),kr(y)))
  CR(tM,pre('+',kst(flp(x))))
  CR(to,x(_R(xx)))
  CR(tp,x=val(x);Ay=xx,z=xy;
        P(xn==3&&((ytv&&y-av)||ytr)&&xy-PLH&&xz==PLH,z=kl(zR);y=kst(fir(x));CA9(zC[zn-1])&&(CA9(*yC)||*yC==':'||*yC=='-')?cts(cat11(apc(y,'['),z),";]",2):cat11(z,y))
        x=ek(x);Nm=_n(xx);x=apc(jc(';',x),']');Q(xr==1);xC[m]='[';x)
  CR(tq,raz(ek(val(x))))
  CR(tr,x=val(x);Ay=_R(xy);cat11(kw(fir(x)),str(y)))
  CR(ts,x=str0(str(x));I(xC+xn-pID(xC),x=kst(x);I(*xC==',',x=drp(1,x)))pre('`',x))
  CR(tu,apc(kst(au^av^x),':'))
  CR(tv,P(x==PLH,oC)Ay=aCn(vc+xv,1);xv<20?y:apc(y,':'))
  CR(tw,aCn(&"':/:\\:"[xv%3*2],1+xv/3))
  case ti:case tl:CR(tf,str(x)))
 P(xn==1,pre(',',kr(fir(x))))
 SW(xt,
  CR(tA,P(!xn&&!(_t(xx)==tC&&!_n(xx)),cat11(aCz("0#,"),kst(x(_R(xx)))))par(jc(';',ek(x))))
  CR(tC,kss(x))
  case tB:case tH:case tI:case tL:CR(tF,xn?jc(32,e1f(str,x)):x(aCz(xtF?"0#0n":"!0")))
  CR(tS,xn?raz(ek(x)):x(aCz("0#`"))))
 aCz("???"))
A1(out,P(x==au,x)mr(v0c(ai(1),xtA&&1<xn?par(jC("\n ",2,ek(xR))):kst(xR)));x)
