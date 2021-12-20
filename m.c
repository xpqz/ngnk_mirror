// ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include"a.h"
#include<fcntl.h>
#include<sys/mman.h>
#ifndef MAP_NORESERVE
 #define MAP_NORESERVE 0
#endif
S I nm;S ST{V*p;Ln;}m[8];SN A0(oom,die("oom"))
S V*mm(V*p,Nn,If)_(p=mmap(p,n,PROT_READ|PROT_WRITE,MAP_NORESERVE|MAP_PRIVATE|(p?MAP_FIXED:0)|(f<0?MAP_ANON:0),f,0);
 P((L)p<ZP,eo0();(V*)0)P(f>0,p)I(nm==ZZ(m),die("mmap lmt"))*(C*)p=nm;m[nm++]=(TY(*m)){p,n};p)
S A mu(V*p,Nn)_(munmap(p,n);i(ZZ(m),B(m[i].p==p,Mc(m+i,m+i+1,(--nm-i)*SZ m[0])));0)
S A mx(Nn)_(V*p=mm(0,n,-1);P(!p,oom())*(C*)p=0;(A)(p+ZA))
A mf(If,Nn)_(V*p=mm(0,ZP+n,-1);P(!p,0)Ax=(A)(p+ZP);*(C*)p=1;x=AT(tC,AN(n,x));xR;P(!mm(p+ZP,n,f),x(0))x)

S Az[SZ(N)==4?27:35];S I lck;
S A mb(Cb,Ax)_(xX=0;xr=0;DBG(AN(-1,AT(0,x)));xU=b;x)
V mrn(Nn,OA*a){i(n,mr(a[i]))}V mRn(Nn,OA*a){i(n,_R(a[i]))}A1(mRa,i(xn,_R(xa))x)
A1(m0,DBG(lck++);Q(x);XP(0)Q(xr>0);P(--xr,0)Cb=xU;P(!b,x=AT(tn,x))xX=z[b];z[b]=(A)xV;XR(mrn(xn,xA);x)x)
A1(m1,DBG(lck--);P(!x,0)P(xt==tn,mu(xV-ZP,xn+ZP))DBG(Ms(xV,0xab,xZ);DBG(AN(-1,AT(0,x))));0)A1(mr,m1(m0(x)))
A an(Ct,Nn)_(Q(!lck);Q(c3(tA,t,tn-1));Q(!TP(t));Cb=59-__builtin_clzll(ZA|ZA-1+n*TZ[t]);P(n>1ull<<ZZ(z)||b>ZZ(z)-2,oom())
 Ax=z[b];Ii=b;W(!z[i],i++)I(i<ZZ(z)-1,x=z[i];z[i]=xX)E(x=mb(b,mx(ZA<<(i=max(b,24)))))
 I(b<i,xU=b;W(b<i--,z[i]=mb(i,(A)x+(ZA<<i))))xr=1;AT(t,AN(n,x)))
A aV(Ct,Nn,OV*v)_(Ax=an(t,n);Mc(xV,v,n*TZ[t]);x)A1(ax,xr>1?xr--,an(xt,xn):x)A0(aa0,am(enl(as(0)),enl(au)))
S A a2t(Ax,Ay,Ct)_(Az=an(t,2);zx=x;zy=y;z)
A1(a1,Ay=an(tA,1);yx=x;y)A3(a3,Au=an(tA,3);ux=x;uy=y;uz=z;u)A2(a2,a2t(x,y,tA))A2(aM,a2t(x,y,tM))A2(am,a2t(x,y,tm))
AL(aA,an(tA,n))AL(aB,an(tB,n))AL(aC,an(tC,n))AL(aI,an(tI,n))AL(aL,an(tL,n))AL(aD,an(tD,n))AL(aS,an(tS,n))
A al(Lv)_(aV(tl,1,&v))A ad(Dv)_(aV(td,1,&v))A aCn(Qs,Nn)_(aV(tC,n,s))A aCm(Qp,Qq)_(aCn(p,q-p))AQ(aCz,aCn(s,Sn(s)))
C tZ(Lv)_(v==(B)v?tB:v==(H)v?tH:v==(I)v?tI:tL)A kv(A*p)_(Ax=*p;Q(xn==2);P(xr>1,--xr;*p=_R(xx);_R(xy))*p=xx;AN(0,x);x(xy))
AL(az,n-(I)n?al(n):ai(n))A1(mut,XP(x)P(xr==1,x)x=x(aV(xt,xn,xV));XR(mRa(x))x)
ALA(room,P(xr==1&&n*xW<=xZ,AN(n,x))Ay=an(xt,n);Mc(yV,xV,xn*xW);I(ytR,I(xr==1,AN(0,x))E(i(xn,_R(ya))))x(y))
L gl_(Ax)_(XP((I)x)*xL)L gl(Ax)_(Lv=gl_(x);x(0);v)D gd(Ax)_(Dv=*xD;x(0);v)

S C s0[1<<16],*s1=s0+1;
Q qs(O L*p)_(*p<0?s0-*p:(V*)p)
AQ(sym,Nn=Sn(s);P(n<4||(n==4&&!(s[3]&128)),Iv=0;Mc(&v,s,n);as(v))Qp=s0+1;W(p<s1,P(!SQ(p,s),as(s0-p))p+=Sn(p)+1)
 n++;P(s1+n>s0+SZ s0,die("syms oom"))Mc(s1,s,n);s1+=n;as(s0-s1+n))

S AQ(cps,Ax=N(pk(s));cpl(str0(aCz(s)),x,oS))
S AQ(bscd,P(!*s,Cb[256];getcwd(b,SZ b)?eo0():aCz(b))chdir(s)?eo0():au)
S AQ(bsbs,exit(0);0)
S AQ(bsd,P(!*s,aCz(gp))Nn=Sn(s);P(n>=SZ gp,ez0())Mc(gp,s,n+1);au)
S AQ(bsv,K("{`0:($!h),'\":\",'`k'. h:(&x=^`o`p`q`r`u`v`w`e?@'h)#h:``repl_.:0#`}",ai(!!s)))
S AQ(bsf,bsv(0))
S AQ(bst,Ln=*s==':'?++s,pl(&s):1,t=now();Ax=N(cps(s));i(n,mr(Nx(run(x,0,0))))x(az((now()-t+500)/1000)))
S C*skp(C*s)_(W(!MQ(s,"/\n",2),C*p=SS(s+1,"\n\\\n");s=p?p+3:s+Sn(s))s)
S I ln(Qs)_(Ax=evs(s);P(x,x(out(x));1)epr(0))
S A lns(C*p,Nn)_(Q(n)P(p[n-1]-10,e0("eoleof"))p[n-1]=0;I(!MQ(p,"#!",2),p=SC0(p+2,10))
 C*v=p;W(p<v+n,C*q=p=skp(p);W(*q&&(*q-10||si(" }",q[1])<2),q++)*q=0;N(ln(p));p=q+1)au)
AQ(bsl,If=open(s,O_RDONLY,0600);P(f<0,ei0())Ln=lseek(f,0,2);P(n<0,ei0())C*p=mm(0,n,f);close(f);P(!n,au)P(!p,0)Ax=lns(p,n);mu(p,n);x)
AQ(evs,P(*s-'\\',Ax=N(cps(s));x(run(x,0,0)))Cc=s[1],d=s[2];P(c=='c'&&d=='d'&&(!s[3]||s[3]==32),bscd(s+3+(s[3]==32)))
 P(!d||d==32||d==':',T(&bsl,bst,bsd,bsbs,bsf,bsv,bsm,en0)[si("ltd\\fvm",c)](s+2+(d==32)))
 K("0x0a\\`x(,,\"/bin/sh\"),,:",aCz(s+1)))

I gn,gk[256];C gp[32];A gv[256],cns,ce[tn],cn[tn],ci[2][5];Q*argv,*env;
I rep()_(Cb[256];Ln=read(0,b,SZ(b)-1);P(n<0,0)b[n]=0;C*p=b;W(*p,C*q=SC0(p,10);*q=0;ln(p);p=q+1)1)V repl(){W(rep())}
L k(Qs)_(Ax=N(evs(s));Xz(gl(x))x(0))
V kf(Qs,L(*f)(L)){dmd(A(sym(s),au,av,AT(te,(A)f)),4);}
V kinit(){z[ZZ(z)-1]=1;Ax=AN(0,aA(32)),*c=xA;i(tS-tA+1,*c++=ce[tA+i]=an(tA+i,0))*c++=ce[tm]=am(oS,oA);
 cn[tA]=ce[tC];*c++=cn[tB]=cn[tH]=cn[tI]=cn[tL]=cn[ti]=cn[tl]=al(NL);*c++=cn[tD]=cn[td]=ad(ND);
 cn[tC]=cn[tc]=ac(32);cn[tS]=cn[ts]=as(0);i(tn-to,cn[to+i]=au)
      ci[0][0]=ai(0);     ci[0][1]=ai(1);*c++=ci[0][2]=al(WL);*c++=ci[0][3]=al(-WL);ci[0][4]=cn[tL];
 *c++=ci[1][0]=ad(0);*c++=ci[1][1]=ad(1);*c++=ci[1][2]=ad(WD);*c++=ci[1][3]=ad(-WD);ci[1][4]=cn[tD];
 xn=c-xA;Q(xn<=32);cns=x;}
V kargs(In,Q*a){argv=(Q*)a;env=(Q*)a+n+1;n=max(0,n-2);Ax=aA(n);i(n,xa=aCz(a[2+i]))gn=1;*gk='x';*gv=x;}

A AT(UL t,Ax)_(Q(c3(0,t,tn));P(TP(t),x=Lt(t)|x<<8>>8)_t1(x)=t;x)
A AV(UL v,Ax)_(Q(v<32);x&~31ll|v)
A AW( C w,Ax)_(Q(w<6);xw=w;x)
A AK( C k,Ax)_(Q(k<9);xk=k;x)
A AO(UC o,Ax)_(Xs(x&~(0xffll<<32)|(UL)o<<32)xB[-13]=o;x)
A AN(  Nn,Ax)_(Q(n<1ll<<48||n==-1);xL[-1]=n;x)
A1(_R,Q(x);XP(x)Q(xr>=0);xr++;x)

SN I ow(Qs,Nn)_(write(1,s,n))
SN V o8(Lv){Cb[16],*s=b;i(16,Cc=v>>4*(15-i)&15;*s++="0W"[9<c]+c)ow(b,16);}
I os(Qs)_(ow(s,Sn(s)))
L ov_(Qs,Lv)_(os(s);o8(v);ow("\n",1);v)

#define mms(a...) i(nm,V*p=m[i].p,*q=p+m[i].n;If=!!*(C*)p;a)
#define obs(a...) mms(Ax=(A)p+ZA+ZP*f,y=(A)q;W(x<y,a;x+=xZ+ZA))
#define xys(a...) obs(I(xtR&&xr,i(xn,Ay=xa;a)))
#define rts(a...) {i(gn,Ax=gv[i];I(x,a))Ax=cns;a;}
SN V od(Lv){Cb[32];ow(b,sl(b,v)-b);}
SN V osd(Qs,Lv){os(s);od(v);}
SN A1(ox,o8(x);osd(" U",xU);Ct=_t1(x);os(" t");I(c3(1,t,tn),ow(&TS[t],1))E(od(t))
 osd(" r",xr);osd("=",xm);osd(" n",xn);i(min(5,xZ/8),os(" ");o8(xl))os("\n");x)
AQ(bsm,obs(xm=0)xys(I(!ytP,_m(y)++))rts(I(!xtP,xm++))
// In=0;obs(ox(x);n++);osd("nObjs:",n)
// os("mapped regions:");mms(o8((L)p);os("-");o8((L)q);osd(" F",*(C*)p);osd(" N",q-p))
 obs(I(!c3(tA,xt,tn-1)&&xr,os("!type:");ox(x)))
 obs(I(xr-xm,os("!refc:");ox(x)))
 xys(I(!yt,os("!dngl:");ox(x);ox(y)))au)
