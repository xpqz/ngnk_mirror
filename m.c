#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include<unistd.h>
#include<fcntl.h>
#include<sys/mman.h>
#ifndef MAP_NORESERVE
 #define MAP_NORESERVE 0
#endif
S ST{V*p;Ln;UC f;}reg[128];S UC nreg,npnd,pnd[L(reg)];
S V mc(){P(!npnd)i(npnd,Ij=pnd[i];munmap(reg[j].p,reg[j].n);Q(reg[j].f);reg[j].p=0)npnd=0;Ij=0;i(nreg,I(reg[i].p,MC(reg+j,reg+i,SZ*reg);j++))nreg=j;}
S A mu(V*p)_(i(nreg,P(reg[i].p==p,pnd[npnd++]=i;0))die("UNMAP"))
S V*mm(U n,U f)_(V*p=mmap(0,n,PROT_READ|PROT_WRITE,MAP_NORESERVE|MAP_PRIVATE|MAP_ANON,-1,0);P((L)p<pg,(V*)0)I(nreg==L(reg),mc();I(nreg==L(reg),die("MMAP")))reg[nreg++]=(TY(*reg)){p,n,f};p)
S A mx(U n)_(V*p=mm(n,0);P(!p,die("OOM"))(A)(p+HD))
A mf(U f,U i,U n)_(V*p=mm(pg+n,1);P(!p,eo0())Ax=(A)(p+pg);xn=n;AT(tC,x);P(mmap(p+pg,n,PROT_READ|PROT_WRITE,MAP_NORESERVE|MAP_PRIVATE|MAP_FIXED,f,i)!=p+pg,mu(p);eo0())xR)

S A z[SZ(N)==4?27:35]={[L(z)-1]=1};DBG(S I lck;)
S A mb(C b,A x)_(xX=0;xr=0;DBG(AN(-1,AT(0,x));*xL=0);xU=b;x)
A an(U n,C t)_(Q(!lck);Q(LH(tA,t,tn-1));Q(!TP(t));Cb=59-__builtin_clzll(HD|HD-1+n*TW[t]);P(n>1ull<<L(z)||b>L(z)-2,die("OOM"))
 Ax=z[b];Ii=b;W(!z[i],i++)I(i<L(z)-1,x=z[i];z[i]=xX)E(x=mb(b,mx(HD<<(i=MAX(b,24)))))I(b<i,xU=b;W(b<i--,z[i]=mb(i,(A)x+(HD<<i))))xr=1;AT(t,AN(n,x)))
A1(m0,DBG(lck++);Q(x);XP(0)Q(xr>0);P(--xr,0)Cb=xU;P(!b,mu(xV-pg))xX=z[b];z[b]=(A)xV;XR(mrn(xn|!xn,xA);x)x)DBG(A1(m1,lck--;P(!x||!xU,0)MS(xV,0xab,xZ);AN(-1,AT(0,x));0))
V mrn(U n,OA*a){i(n,mr(a[i]))}
V mRn(U n,OA*a){i(n,_R(a[i]))}
A1(mRa,mRn(xn,xA);x)
A1(_R,Q(x);XP(x)Q(xr>=0);xr++;x)
A1(mr,DBG(m1)(m0(x)))

A aV(Ct,U n,OV*v)_(Ax=an(n,t);MC(xV,v,n*TW[t]);x)
A aA0(U n)_(Ax=AN(0,aA(n));xx=oC;x)
A1(aA1,Ay=an(1,tA);yx=x;y)
A2(aA2,/*11*/a2t(x,y,tA))
A3(aA3,/*111*/Au=an(3,tA);ux=x;uy=y;uz=z;u)
A a2t(Ax,Ay,Ct/*11t*/)_(Az=an(2,t);zx=x;zy=y;z)
A2(aM,/*11*/Q(xtMT)Q(ytA)Q(xN==yN)a2t(x,y,tM))
A2(am,/*11*/Q(xtMT)Q(ytMT)Q(xN==yN)a2t(x,y,tm))
A aA(U n)_(an(n,tA))
A aG(U n)_(an(n,tG))
A aC(U n)_(an(n,tC))
A aI(U n)_(an(n,tI))
A aL(U n)_(an(n,tL))
A aF(U n)_(an(n,tF))
A aS(U n)_(an(n,tS))
A aCn(Q s,U n)_(aV(tC,n,s))
A aCm(Q p,Q q)_(aCn(p,q-p))
AQ(aCz,aCn(s,SL(s)))
A az(L n)_(n-(I)n?al(n):ai(n))A al(Lv)_(aV(tl,1,&v))A af(Fv)_(aV(tf,1,&v))A aE(Li,Lj)_(Q(i<=j)P(i==j,oG)Ax=an(tE,2);*xL=i;xL[1]=j;x)
A1(mut,XP(x)P(xr==1,x)x=x(aV(xt,xn,xV));XR(mRa(x))x)C tZ(Lv)_(tL-((v==(G)v)+(v==(H)v)+(v==(I)v)))A kv(A*p)_(Ax=*p;Q(xn==2);P(xr>1,--xr;*p=_R(xx);_R(xy))*p=xx;AZ(x);x(xy))
A room(L n,A x)_(P(xr==1&&n*xW<=xZ,AN(n,x))Ay=an(n,xt);MC(yV,xV,xn*xW);I(ytR,I(xr==1,AZ(x))E(i(xn,_R(ya))))x(y))L gl_(Ax)_(XP(xv)*xL)L gl(Ax)_(Lv=gl_(x);x(0);v)F gf(Ax)_(Fv=*xF;x(0);v)
A AT(W t,A x)_(Q(IN(t,tn));P(TP(t),x=Lt(t)|x<<8>>8)_t1(x)=t;x)
A AV(W v,A x)_(Q(v<32);x&~31ll|v)
A AW(C w,A x)_(Q(w<6);xE=w;x)
A AK(C k,A x)_(Q(k<9);xk=k;x)
A AO(UC o,A x)_(Xs(x&~(0xffll<<32)|(W)o<<32)xG[-13]=o;x)
A AN(U n,Ax)_(xL[-1]=n;x)
A1(AZ,AT(tG,x))

S C s0[1<<16],*s1=s0+1;
Q qs(O L*p)_(*p<0?s0-*p:(V*)p)
S I sq(Qs)_(Nn=SL(s);P(n<4||(n==4&&!(s[3]&128)),Iv=0;MC(&v,s,n);v)Qp=s0+1;W(p<s1,P(!strcmp(p,s),s0-p)p+=SL(p)+1)n++;P(s1+n>s0+SZ s0,die("SYMS"))MC(s1,s,n);s1+=n;s0-s1+n)
AQ(sym,as(sq(s)))

S AQ(bs0,en0())
S AQ(bsbs,exit(0);0)
S AQ(bscd,P(!*s,Cb[256];getcwd(b,SZ b)?eo0():aCz(b))chdir(s)?eo0():au)
S AQ(bsd,P(!*s,as(gp))s+=*s=='.';gp=sq(s);au)
  AQ(bsl,If=open(s,0,0);Ax=u1c(ai(f));close(f);N(x);P(!xn,x(au))C*p=xC,*e=p+xn-1;P(*e-10,x(err0("eoleof")))*e=0;I(*p=='#'&&p[1]=='!',p=strchrnul(p,10);p+=!!*p)x(evs(p,1)))
S AQ(bsf,K1("{`0:($!h),'\":\",'`k'. h:(&x=^`o`p`q`r`u`v`w`x?@'h)#h:``repl_.:0#`}",ai(!s)))
S AQ(bst,Ln=s[-1]=='t'&&*s==':'?++s,pl(&s):1;Qp=s;Ax=N(pk(&p,10));x=N(cpl(aCm(s,p),x,0));L t=now();i(n,mr(Nx(run(x,0,0))))x(az((now()-t+500)/1000)))
S AQ(bsv,bsf(0))
S A bs_(Q*p)_(C b[256];Qs=*p,e=strchrnul(s,10);P(e-s+1>=L(b),ez0())MC(b,s,e-s);b[e-s]=0;*p=e+!!*e;C c=*b,d=b[1];P(c=='c'&&d=='d'&&(!b[2]||b[2]==32),bscd(b+2+(b[2]==32)))
 P(!d||d==10||d==32||d==':',G(&bsl,bst,bsd,bsbs,bsf,bsv,bsm,bs0)[si("ltd\\fvm",c)](b+1+(d==32)))K1("0x0a\\`x(,,\"/bin/sh\"),,:",aCz(b)))

U gn;L gp,gk[];A gv[],cns,ce[tn],cn[tn];Q*argv,*env;
S A evs1(Q*p)_(Qs=*p;P(*s=='\\',++*p;bs_(p))Ax=pk((V*)p,10);N(x);x=N(cpl(aCm(s,*p),x,0));x(run(x,0,0)))
A evs(Qs,B r)_(W(*s,Ax=evs1(&s);P(!x,I(r,s=strchrnul(s,10);s+=!!*s;epr(0))0)I(r,x(out(x)))E(P(!*s,x)x(0))mc())au)
B rep()_(S Cb[256];C*s=b,*q;
 W(1,Ln=read(0,s,b-s+SZ b);P(n<=0,0)s+=n;q=memchr(s-n,10,n);
     P(q,C*p=b;W(q,*q=0;evs(p,1);p=q+1;q=memchr(p,10,s-p))MC(b,p,s-p);s+=b-p;1)
     P(b+SZ b<=s,die("LONGLINE")))1)
V repl(){W(rep())}
L k(Qs)_(Ax=N(evs(s,0));mc();Xz(gl(x))x(0))
V kf(Qs,A2 f){d8(A(sym(s),au,av,AT(tx,(A)f)),4);}
V kinit(){S I l;P(l)l=1;pg=sysconf(_SC_PAGESIZE);z[L(z)-1]=1;A b[32],*c=b;i(tS-tA+1,*c++=ce[tA+i]=an(0,tA+i))*c++=ce[tm]=am(oS,oA);_x(ce[tA])=oC;
 cn[tA]=ce[tC];*c++=cn[tE]=cn[tG]=cn[tH]=cn[tI]=cn[tL]=cn[ti]=cn[tl]=al(NL);*c++=cn[tF]=cn[tf]=af(NF);cn[tC]=cn[tc]=ac(32);cn[tS]=cn[ts]=as(0);i(tn-to,cn[to+i]=au)
 Q(c-b<=32);cns=aV(tA,c-b,b);}
V kargs(In,Q*a){argv=(Q*)a;env=(Q*)a+n+1;n=MAX(0,n-2);Ax=n?aA(n):oA;i(n,xa=aCz(a[2+i]))gk[gn]='x';gv[gn++]=x;}

SN U ow(Q s,U n)_(write(1,s,n))
SN V o8(W v){Cb[16],*s=b;i(16,Cc=v>>4*(15-i)&15;*s++="0W"[9<c]+c)ow(b,16);}
U os(Q s)_(ow(s,SL(s)))
W ov_(Q s,W v)_(os(s);o8(v);ow("\n",1);v)
#define mms(a...) i(nreg,If=reg[i].f;V*p=reg[i].p,*q=f?p:p+reg[i].n;a)
#define obs(a...) mms(Ax=(A)(p+HD*!f+pg*f),y=(A)q;W(x<y,a;x+=xZ+HD))
#define xys(a...) obs(I(xtR&&xr,i(xn|!xn,Ay=xa;a)))
#define rts(a...) {i(gn,Ax=gv[i];I(x,a))Ax=cns;a;}
SN V od(Lv){Cb[32];ow(b,sl(b,v)-b);}
SN V osd(Qs,Lv){os(s);od(v);}
SN A1(ox,o8(x);osd(" U",xU);Ct=_t1(x);os(" t");I(LH(1,t,tn),ow(&TS[t],1))E(od(t))osd(" r",xr);osd("=",xm);osd(" n",xn);i(MIN(5,xZ/8),os(" ");o8(xl))os("\n");x)
AQ(bsm,obs(xm=0)xys(I(!ytP,ym++))rts(I(!xtP,xm++))
// In=0;obs(ox(x);n++);osd("nObjs:",n)
// os("mapped regions:\n");mms(os(f?"[f] ":"[x] ");o8((L)p);os("-");o8((L)q);osd(" N",q-p);os("\n"));os("\n");
 obs(I(!LH(tA,xt,tn-1)&&xr,os("!type:");ox(x)))
 obs(I(xr-xm,os("!refc:");ox(x)))
 xys(I(!yt,os("!dngl:");ox(x);ox(y)))
 obs(I(xtA&&!xn&&!xx,os("!prot:");ox(x)))
 au)
