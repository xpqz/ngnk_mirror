#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/blob/master/LICENSE
#define h(T) SN V i##T(V*p,Nn)_(T*a=p;LN(a)i(PD(n,a),a[i]=i))\
             SN V r##T(V*p,V*q)_(T*a=p,*b=q;LN(a)W(a<b,SWP(*a,*b);a++;b--))\
             SN V w##T(L*RE p,Nn,V*RE r)_(T*a=r;LN(p)LN(a)i(n,j(p[i],*a++=i)))
h(B)h(H)h(I)h(L)
#define c_(T,R,p) SN V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]))
#define cN(T,R,p) SN V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]==N##T?N##R:a[i]))
c_(C,H,r)c_(B,H,r)c_(H,C,a)c_(C,I,r)c_(B,I,r)c_(I,C,a)c_(I,B,a)c_(L,C,a)
c_(H,I,r)c_(I,H,a)c_(H,L,r)c_(L,H,a)c_(I,L,r)c_(L,I,a)cN(L,D,a)cN(D,L,a)
A1(flp,XM(AT(tm,mut(x)))Xm(Ay=xy;Er(!ytA||!yn,x)i(yn,Az=ya;En(!ztT,x))Lm=_n(yx);i(yn,Az=ya;El(zn-m,x))AT(tM,mut(x)))
 Xt(enl(enl(x)))P(!xtA||!xn,enl(x))K("{(,/n#'x)(n*!#x)+/:!n:|/#'x}",x))
A tilL(Ln)_(P(n<0,n-NL?add(az(n),tilL(-n)):ed0())Ez(n>1<<30)Ax=atn(tZ(n-1),n);CH(xt-tB,&iB,iH,iI,iL)(xC,n);x)
A1(til,Xz(tilL(gl(x)))XZ(K("{x((*a)#&#)'1_a:|*\\|x,1}",x))XmM(x(_R(xx)))Xo(val(x))Xs(til(N(enl(x))))
 XS(til(N(val(x))))Et(!xtA||xn,x)x)
A1(whr,XA(K("{$[`A~@x;(,&#'*'x),,'/x@\\:!0|/#'x:o'x;,&x]}",x))Xm(Ay=kv(&x);idx(x,Nx(whr(y))))XM(et1(x))
 x=N(cL(enla(x)));Ln=0;i(xn,Ed(xl<0,x)n+=xl)Ct=tZ(xn-!!xn);Ez(t>tI,x)Ay=atn(t,n);x2(n=0;CH(t-tB,&wB,wH,wI)(xL,xn,yC);y))
A1(rev,XT(x=mut(x);CH(Zt[xt],&rB,rH,rI,rL,rL)(xC,xC+ZT[xt]*(xn-1));x)
 Xm(Ay=kv(&x);am(rev(x),rev(y)))XM(Ay=kv(&x);aM(x,Nx(eac1(y,rev))))x)
A1(typ,x(as(TS[xt])))
A1(len,x(az(xN)))N _N(Ax/*0*/)_(xtT?xn:xtm?_N(xy):!xtM?1:_n(xy)?_N(*(A*)_V(xy)):1)
A1(unq,XT(xN<2?x:K("{x@i@<i@:&@[;0;:;1]@~~':x@i:<x}",x))Xz(rndD(gl(x)))et1(x))
A2(fil,YmMA(eac2(x,y,EXC))YF(y==au0?x:x(y))Yt(fir(fil(x,enl(y))))K("{@[y;&^y;:;x]}",x,y))
A2(exc,Xt(fil(x,y))En(xtmM||ytmM,x,y)y=enla(y);P(!xn||!yn,y(x))K("{x@&~(x~\\:y),!0}/",x,y))
A wdn(Ax,Ni,Nj,Nn)_(Ct=xt;Q(xtZC);Ay=atn(t+1,n);x2(CH(t-tB,&cBH,cHI,cIL,cLD,0,cCH)(xC+ZT[t]*i,yC,j-i);y))
SN A cZ(Ax,Ct)_(P(xt==t,x)x=N(cI(x));Xt(t==tC?ac(xv):x)Ay=atn(t,xn);x2(CH(t-tB,&cIB,cIH,0,0,0,cIC)(xC,yC,yn);y))
A1(cC,cZ(x,tC))A1(cB,cZ(x,tB))A1(cH,cZ(x,tH))
A1(cI,XI(x)Xzc(ai(gl(x)))XdD(cI(N(cL(x))))XZC(Ay=aI(xn);x2(CH(xt-tB,&cBI,cHI,0,cLI,0,cCI)(xC,yC,yn);y))et1(x))
A1(cL,XlL(x)Xzc(al(gl(x)))Xt(fir(N(cL(enl(x)))))XD(Ay=aL(xn);x2(cDL(xC,yC,yn);y))x=N(cI(x));Ay=aL(xn);x2(cIL(xC,yC,yn);y))
A1(cD,XdD(x)Xzc(ad(gl(x)))Xt(fir(N(cD(enl(x)))))x=N(cL(x));Ay=aD(xn);x2(cLD(xC,yC,yn);y))
A1(cS,XsS(x)XC(x=str0(x);x(as(syP(xC))))Xc(as(xv))XmMA(eac1(x,cS))et1(x))
A1(pI,XmMA(eac1(x,pI))Xc(pI(enl(x)))XC(x=str0(x);Qs=xC;P(!*s,x(_R(cn[tl])))Lv=pl(&s);x(*s?_R(cn[tl]):az(v)))et1(x))
U(cT,{[tA]=blw,cB,cH,cI,cL,cD,cC,cS})
A2(cst,P(xtS||ytmMA,eac2(x,y,CST))P(xtz&&ytcC,K("{y@(!x)+(x<0)*#y}",x,enla(y)))
 Xs(Ss("b","h","i","l","d","c","","s","I")Sf(x,y,cB,cH,cI,cL,cD,cC,cS,cS,pI))en2(x,y))
A1(sqz,P(!xtA||!xn,x)Nn=xn;Ay=xx;Ct=yt;Ym(y=oA;i(n,yq(_R(xa)))x(y))P(!c3(ti,t,ts),x)
 I(ytz,i(n,Ay=xa;P(!ytz,x)t=max(t,yt)))E(i(n,P(t-_t(xa),x)))
 y=atn(tT(t),n);Iv=Zt[yt];I(v<3,CH(v,&cLC,cLH,cLI)(xC,yC,n))E(i(n,yl=gl_(xa)))x(y))
A1(blw,XA(x)Xt(a1(x))Et(xtm,x)Nn=xN;Ay=aA(n);i(yn,ya=get(x,i))x(y))
L tru(Ax/*1*/)_(Lv=xtF?x==av0:xtt?gl_(x):xN;x(0);v)
I mtc_(Ax,Ay/*00*/)_(P(x==y,1)P(xtZ&&ytZ&&xn==yn,gl(rdc(MUL,A(eql(xR,yR)),1)))P(xtz&&ytz,gl_(x)==gl_(y))
 P(xt-yt||xtP||(xtr&&xw-yw)||xn-yn,0)P(!xtR,i(xn*ZT[xt],P(xc-yc,0))1)i(xn,P(!mtc_(xa,ya),0))1)
A2(mtc,x(y(ai(mtc_(x,y)))))
S L ordd(Dv)_(Li=*(L*)&v;i^(UL)(i>>63)>>1)S A1(ordD,Q(xtdD);x=AT(xt-tD+tL,mut(x));i(PD(xn,xL),xl=ordd(xd))x)
S C ordt(Ax)_(xtz?tl:xtZ?tL:xt)S I qL(Li,Lj)_(i<j?-1:i>j)I qD(D u,Dv)_(qL(ordd(u),ordd(v)))
S I cA(Ax,Ay/*00*/)_(P(mtc_(x,y),0)P(xtd&&ytd,qD(*xD,*yD))P(xtzc&&ytd,qD(gl_(x),*yD))P(xtd&&ytzc,qD(*xD,gl_(y)))
 Iv=ordt(x)-ordt(y);P(v,v)Xzc(qL(gl_(x),gl_(y)))Xd(*xD<*yD?-1:*xD>*yD?1:0)Xs(strcmp(syp(&x),syp(&y)))
 I(!xtP,Iv=qL(xn,yn);XT(i(min(xn,yn),Az=get(x,i),u=get(y,i);I d=cA(z,u);mr(z(u));P(d,d))v))qL(x,y))
S I*ascZ(O UC*v,UC*g,I*a,I*b,In,I w)_(UI c[257];iI(a,n);
 j(w,Ms(c,0,SZ c);i(n,g[i]=v[w*a[i]+j])i(n,c[g[i]+1]++)I(c[1+*g]-n,i(255,c[i+1]+=c[i])i(n,b[c[g[i]]++]=a[i])SWP(b,a)))a)
S V mrg(OA*v,I*p,I*p1,I*q,I*q1,I*r){W(p<p1&&q<q1,*r++=cA(v[*p],v[*q])<=0?*p++:*q++)Mc(r,p<p1?p:q,p1-p+q1-q<<2);}
S V ascA(OA*v,I*a,In,I*b){P(n<2,I(n,*b=*a);)I m=n/2;ascA(v,a+m,n-m,b+m);ascA(v,a,m,a+m);mrg(v,a+m,a+2*m,b+m,b+n,b);}
A1(asc,XZC(In=xn;Ez(n-xn,x)x=N(K("{x-&/x}",x));Ay=aC(n),z=aI(n),u=aI(n);x2(y2(ascZ(xC,yC,zI,uI,n,ZT[xt])==zI?u(z):z(u))))
 XA(In=xn;Ez(xn-n,x)Im=n/2;OA*v=xA;Ay=aI(n),z=aI(n-m);I*a=yI,*b=zI;iI(a,n);
  ascA(v,a+m,n-m,b);ascA(v,a,m,a+n-m);mrg(v,a+n-m,a+n,b,b+n-m,a);x(z(y)))
 XS(asc(str(x)))XD(asc(ordD(x)))Xm(K("{(!x)@<. x}",x))XM(K("{(!#x){x@<y x}/|.+x}",x))P(xts||xti,opn(x))et1(x))
A1(dsc,Xz(cls(x))Xm(Ay=kv(&x);idx(x,Nx(dsc(y))))Et(!xtT,x)x=rev(asc(rev(x)));sub(ai(xN-1),x))
A1(grp,Xz(K("{x=/:x:!x}",x))Xt(et1(x))Xm(Ay=grp(kv(&x));yy=idx(x,yy);y)
 K("{x[(*'g),!0]!g@:<g:(&(~x~':x i),!0)_i:<x}",x))
A2(bin,Xmt(er2(x,y))YMT(K("{x''y}",x,y))Li=-1,j=xn;W(i+1<j,Lm=(i+j)/2;Az=get(x,m);cA(y,z)<0?j=m:(i=m);z(0))x(y(az(i))))
