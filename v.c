#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://git.sr.ht/~ngn/k/blob/master/LICENSE
#define i_(T)     S V i##T(V*p,Nn)_(T*a=p;AL(a)i(PD(n,a),a[i]=i))
#define r_(T)     S V r##T(V*p,V*q)_(T*a=p,*b=q;AL(a)W(a<b,SWP(*a,*b);a++;b--))
#define c_(T,R,p) S V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]))
#define cN(T,R,p) S V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]==N##T?N##R:a[i]))
i_(B)i_(H)i_(I)i_(L)r_(B)r_(H)r_(I)r_(L)
c_(C,H,r)c_(B,H,r)c_(H,C,a)c_(C,I,r)c_(B,I,r)c_(I,C,a)c_(I,B,a)c_(L,C,a)
cN(H,I,r)cN(I,H,a)cN(H,L,r)cN(L,H,a)cN(I,L,r)cN(L,I,a)cN(L,D,a)cN(D,L,a)
TY(&cCH)wf[]={cCH,cBH,cHI,cIL,cLD};
A1(flp,XM(AT(tm,x))Xm(Ay=xy;Er(!ytA||!yn,x)i(yn,Az=ya;En(!ztT,x))Lm=An(yx);i(yn,Az=ya;El(zn-m,x))AT(tM,x))
 Xt(enl(enl(x)))P(!xtA||!xn,enl(x))K("{(,/n#'x)(n*!#x)+/:!n:|/#'x}",x))
A1(til,Xz(Ln=gl_(x);Im=n<0;n*=1-2*m;Ez(n>1<<30,x)Au=atn(tT(xt),n);CH(xt-tb,&iB,iH,iI,iL)(uC,n);m?add(x,u):x(u))
 XZ(K("{x((*a)#&#)'1_a:|*\\|x,1}",x))Xm(fir(AT(tA,x)))Xo(val(x))Xs(Iv=gs(x);e0(syp(&v)))Et(!xtA||xn,x)x)
A1(whr,XA(K("{$[`A~@x;(,&#'*'x),,'/x@\\:!0|/#'x:o'x;,&x]}",x))Xm(Ay=kv(&x);idx(x,Nx(whr(y))))Et(xtM,x)
 x=N(gL(enla(x)));Nn=0;i(xn,Ed(xl<0,x)n+=xl)Au=aL(n);m2(x,n=0;i(xn,j(xl,uL[n++]=i))u))
A1(rev,XT(x=mut(x);CH(Zt[xt],&rB,rH,rI,rL,rL)(xC,xC+ZT[xt]*(xn-1));x)
 Xm(AT(tm,N(ea1(rev,AT(tA,x)))))XM(Ay=kv(&x);aM(x,Nx(ea1(rev,y))))x)
A1(typ,x(as(TS[xt])))
A1(len,x(az(xN)))L _N(Ax/*0*/)_(xtT?xn:xtm?_N(xy):!xtM?1:An(xy)?_N(*(A*)dat(xy)):1)
A1(unq,Et(!xtT,x)xn<2?x:K("{x@&@[&#x;i;:;]@[;0;:;a=a:*a]@a:~$[`A=@x;~;=]':x@i:<x}",x))
A2(fil,YmMA(eac(cv('^'),A(x,y),2))YF(y==au0?x:x(y))Yt(fir(fil(x,enl(y))))K("{@[y;&^y;:;x]}",x,y))
A2(xpt,Xt(fil(x,y))En(xtmM||ytmM,x,y)y=enla(y);Y(xtA,y=blw(y))K("{x@&^y?x}",x,y))
A2(cut,Ym(K("{((!y)^x)#y}",x,y))
 YT(x=Ny(gL(x));K("{n:#y;y$[x~*x;$[n<x|-x;!0;x<0;!n+0^x;x+!n-x];$[|/0<':x,#y;!`dom;x+!'1_-':x,#y]]}",x,y))
 Yz(Et(!xtT,x,y)Li=gl(y);P(!in(i,xn),x)
  Au=atn(xt,xn-1);L w=ZT[xt];mc(uC,xC,i*w);mc(uC+i*w,xC+i*w+w,(xn-i-1)*w);Y(xtA,u=sqz(mRa(u)))x(u))
 et2(x,y))
A wdn(Ax,Ni,Nj,Nn)_(Ct=xt;Q(c3(tC,t,tI));Au=atn(t+1,n);wf[t-tC](xC+ZT[t]*i,uC,j-i);x(u))
S A gt(Ax,A1*f)_(fir(N(f(enl(x)))))
A1(gC,XcC(x)Xt(gt(x,gC))x=N(gI(x));Au=aC(xn);m2(x,cIC(xC,uC,un);u))
A1(gB,XbB(x)Xt(gt(x,gB))x=N(gI(x));Au=aB(xn);m2(x,cIB(xC,uC,un);u))
A1(gH,XhH(x)Xt(gt(x,gH))x=N(gI(x));Au=aH(xn);m2(x,cIH(xC,uC,un);u))
A1(gI,XiI(x)XdD(gI(N(gL(x))))P(xtc||xtz,ai(gl(x)))
 XC(Au=aI(xn);m2(x,cCI(xC,uC,un);u))
 XB(Au=aI(xn);m2(x,cBI(xC,uC,un);u))
 XH(Au=aI(xn);m2(x,cHI(xC,uC,un);u))
 XL(Au=aI(xn);m2(x,cLI(xC,uC,un);u))et1(x))
A1(gL,XlL(x)Xt(gt(x,gL))XD(Au=aL(xn);m2(x,cDL(xC,uC,un);u))x=N(gI(x));Au=aL(xn);m2(x,cIL(xC,uC,un);u))
A1(gD,XdD(x)Xt(gt(x,gD))x=N(gL(x));Au=aD(xn);m2(x,cLD(xC,uC,un);u))
A1(gS,XsS(x)XC(x=str0(x);x(as(syP(xC))))Et(!xtc,x)as(gc(x)))
TY(ct)ct={blw,gC,gB,gH,gI,gL,gD,gS};
A2(cst,P(xtS||ytmMA,eac(cv('$'),A(x,y),2))P(xtz&&ytC,K("{y@(!x)+(x<0)*#y}",x,y))
 Xs(SF(x,y,"`c`b`h`i`l`d``s",gC,gB,gH,gI,gL,gD,gS,gS))en2(x,y))
A1(sqz,P(!xtA||!xn,x)Au=aA0;i(xn,uq(mR(xa)))x(u))
A1(blw,XA(x)Xt(a1(x))Et(xtm,x)Nn=xN;Au=aA(n);x(iua(get(x,i))))
L tru(Ax/*1*/)_(Lv=xtQ?gl_(x):xtF?!xtu||xv:xn;x(0);v)A1(fir,xtt?x:x(getr(x,0)))A1(las,xtt?x:x(getr(x,xn-1)))
I mtc_(Ax,Ay/*00*/)_(P(x==y,1)P(xtZ&&ytZ&&xn==yn,gl(rdc(cv('*'),(A[]){eql(xR,yR)},1)))P(xtz&&ytz,gl_(x)==gl_(y))
 P(xt-yt||xtP||(xtr&&xv-yv)||xn-yn,0)P(!xtR,i(xn*ZT[xt],P(xc-yc,0))1)i(xn,P(!mtc_(xa,ya),0))1)
A2(mtc,x(y(ai(mtc_(x,y)))))
S I cL(Li,Lj)_(i<j?-1:i>j)
S C cT(Ax)_(xtz?tl:xtZ?tL:xt)
S I c(Ax,Ay/*00*/)_(P(mtc_(x,y),0)Iv=cT(x)-cT(y);P(v,v)P(xtc||xtz,cL(gl_(x),gl_(y)))
 Xd(Dv=gd_(x),w=gd_(y);v<w?-1:v>w?1:0)Xs(Iv=gs(x),w=gs(y);strcmp(syp(&v),syp(&w)))
 Y(!xtP,Iv=cL(xn,yn);XT(i(min(xn,yn),Az=get(x,i),u=get(y,i);I d=c(z,u);mr(z(u));P(d,d))v))cL(x,y))
S I bef(A*a,Ii,Ij)_(Iv=c(a[i],a[j]);v?v<0:i<j)
S V sft(A*a,I*l,Ii,Ij)_(W(1,Lk=1+2*i;Y(k>j,BR)Y(k+1<=j&&bef(a,l[k],l[k+1]),k++)Y(!bef(a,l[i],l[k]),BR)SWP(l[i],l[k])i=k))
S A1(asci,Ez(xn>WI,x)x=N(K("{x-&/x}",x));I w=ZT[xt];UI n=xn;Ay=aC(n),z=aI(n),u=aI(n);C*a=dat(y);UI c[257];iI(uI,n);
 m2(x,m2(y,j(w,ms(c,0,Z c);i(n,a[i]=xC[w*ui+j])i(n,c[a[i]+1]++)Y(c[1+*a]-n,i(255,c[i+1]+=c[i])i(n,zI[c[a[i]]++]=ui)SWP(z,u)))z(u))))
A1(asc,XA(Ez(xn>WI,x)A*a=xA,u=til(ai(xn));In=xn,i=n/2;W(i-->0,sft(a,uI,i,n-1))i=n-1;W(i>0,SWP(ui,*uI)sft(a,uI,0,--i))x(u))
 Xm(Ay=kv(&x);idx(x,N(asc(y))))P(xtC||xtZ,asci(x))XS(asc(N(ea1(str,x))))XD(asc(blw(x)))Et(!(xts||xti),x)hop(x))
A1(dsc,Xi(hcl(x))Xm(Ay=kv(&x);idx(x,Nx(dsc(y))))Et(!xtT,x)sub(ai(xN-1),rev(asc(rev(x)))))
A1(grp,Xz(K("{(2#x)#1,&x}",x))Xt(et1(xt))Xm(Au=grp(kv(&x));Q(ur==1);uy=idx(x,uy);u)
 Ay=atn(xt,0),u=aA0;C w=Zt[xt];
 i(xn,Lj=!w?fpB(&y,xb):w==1?fpH(&y,xh):w==2?fpI(&y,xi):w==3?fpL(&y,xl):fpA(&y,mR(xa));Y(j==un,uq(aL0))uA[j]=apv(uA[j],&i))
 am(x(y),u))
