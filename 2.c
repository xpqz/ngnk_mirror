#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
//{dex add sub mul dvd mod mnm mxm ltn gtn eql} x {o0123fspa} x {BHILD} =
// = {:+-*%!&|<>=} x {op a+a a+l l+a l+l f/ f\ f': @} x {byte short int long double}
#define hv(v,T,R,f) S R v##o##T(T x,T y)_(f)
#define hd(v,f,g) hv(v,B,B,f)hv(v,H,H,f)hv(v,I,I,f)hv(v,L,L,f)hv(v,D,D,g)
#define hc(v,f,g) hv(v,B,B,f)hv(v,H,B,f)hv(v,I,B,f)hv(v,L,B,f)hv(v,D,B,g)
#define h(v,f) hd(v,f,f)
h(dex,y)h(add,x+y)h(sub,x-y)h(mul,x*y)hv(dvd,D,D,x/y)hd(mod,x>0?(y%x+x)%x:!x?y:y<0?-1-(-1-y)/-x:y/-x,x>0?y-(L)(y/x)*x:dvdoD(y,-x))
h(mnm,min(x,y))h(mxm,max(x,y))hc(ltn,x<y,qD(x,y)<0)hc(gtn,x>y,ltn(y,x))hc(eql,x==y,*(L*)&x==*(L*)&y)
#undef h
#define hV(f,T,R,e...) SN I f(OV*RE p,OV*RE q,V*RE s,Nn)_(O T*a=p,*b=q;R*r=s;e)
#define h0(v,T,R) hV(v##0##T,T,R,*r=v##o##T(*a,*b);0)
#define h1(v,T,R) hV(v##1##T,T,R,LN(b)LN(r)TY(*a)c=*a;i(PD(n,a),*r++=v##o##T(   c,*b++))0)
#define h2(v,T,R) hV(v##2##T,T,R,LN(a)LN(r)TY(*b)c=*b;i(PD(n,a),*r++=v##o##T(*a++,   c))0)
#define h3(v,T,R) hV(v##3##T,T,R,LN(a)LN(b)LN(r)      i(PD(n,a),*r++=v##o##T(*a++,*b++))0)
#define hS(v,T,R) hV(v##2##T,T,R,v##1##T(b,a,r,n))
#define h0123(a...) h0(a)h1(a)h2(a)h3(a)
#define h01S3(a...) h0(a)h1(a)hS(a)h3(a)
                                                        h0123(dvd,D,D)
h0123(mod,B,B)h0123(mod,H,H)h0123(mod,I,I)h0123(mod,L,L)h0123(mod,D,D)
h01S3(mnm,B,B)h01S3(mnm,H,H)h01S3(mnm,I,I)h01S3(mnm,L,L)h01S3(mnm,D,D)
h01S3(mxm,B,B)h01S3(mxm,H,H)h01S3(mxm,I,I)h01S3(mxm,L,L)h01S3(mxm,D,D)
h0123(ltn,B,B)h0123(ltn,H,B)h0123(ltn,I,B)h0123(ltn,L,B)h0123(ltn,D,B)
h01S3(eql,B,B)h01S3(eql,H,B)h01S3(eql,I,B)h01S3(eql,L,B)h01S3(eql,D,B)
TY(&mod0B)aro[][5][7]={
 {{    0,mod0B,mnm0B,mxm0B,ltn0B,0,eql0B},//a+a
  {    0,mod0H,mnm0H,mxm0H,ltn0H,0,eql0H},
  {    0,mod0I,mnm0I,mxm0I,ltn0I,0,eql0I},
  {    0,mod0L,mnm0L,mxm0L,ltn0L,0,eql0L},
  {dvd0D,mod0D,mnm0D,mxm0D,ltn0D,0,eql0D}},
 {{    0,mod1B,mnm1B,mxm1B,ltn1B,0,eql1B},//a+l
  {    0,mod1H,mnm1H,mxm1H,ltn1H,0,eql1H},
  {    0,mod1I,mnm1I,mxm1I,ltn1I,0,eql1I},
  {    0,mod1L,mnm1L,mxm1L,ltn1L,0,eql1L},
  {dvd1D,mod1D,mnm1D,mxm1D,ltn1D,0,eql1D}},
 {{    0,mod2B,mnm2B,mxm2B,ltn2B,0,eql2B},//l+a
  {    0,mod2H,mnm2H,mxm2H,ltn2H,0,eql2H},
  {    0,mod2I,mnm2I,mxm2I,ltn2I,0,eql2I},
  {    0,mod2L,mnm2L,mxm2L,ltn2L,0,eql2L},
  {dvd2D,mod2D,mnm2D,mxm2D,ltn2D,0,eql2D}},
 {{    0,mod3B,mnm3B,mxm3B,ltn3B,0,eql3B},//l+l
  {    0,mod3H,mnm3H,mxm3H,ltn3H,0,eql3H},
  {    0,mod3I,mnm3I,mxm3I,ltn3I,0,eql3I},
  {    0,mod3L,mnm3L,mxm3L,ltn3L,0,eql3L},
  {dvd3D,mod3D,mnm3D,mxm3D,ltn3D,0,eql3D}}};
S C tZx(Ax)_(Ct=TX[xt];P(t,t)Xl(tZ(gl_(x)))tZ(xv))
C sup(A*p,A*q)_(Ax=*p,y=*q;Ct=max(tZx(x),tZx(y));*p=x=Ny(cT[t](x));*q=y=Nx(cT[t](y));t)
S A3(ar2,Q(ztv)XYmMA(eac2f(x,y,v2[zv]))N(sup(&x,&y));Ik=xtT<<1|ytT;P(k==3&&xn-yn,el2(x,y))
 Ct=k?min(xt,yt):max(xt,yt);V*a=xtP?(V*)&x:xV,*b=ytP?(V*)&y:yV;t=TT[t];V(f,aro[k][t-tB][zv-4]);I(z>MXM,t=tB)
 I(!k,t=max(ti,t+tc-tC);P(TP(t),Ii=0;f(a,b,&i,1);x(y(az(i)))))
 Az=xt==t&&xr==1?x:yt==t&&yr==1?y:an(t,k-1?xn:yn);f(a,b,zV,zn);x-z?x(y-z?y(z):z):y(z))
S ALA(ext,XMT(x)rsh(n,xtm?enl(x):x))
A2(dct,P(rnk(x)<0,ed2(x,y))x=ext(yN,x);y=ext(xN,y);(xN-yN?el2:am)(x,y))
A2(dex,mr(x);y)
A2(add,adm(x,y,0))
A2(sub,add(x,Nx(neg(y))))
A2(mul,adm(x,y,1))
A2(dvd,XYmMA(eac2f(x,y,dvd))ar2(Ny(cD(x)),Nx(cD(y)),DVD))
A2(mod,Xzc(YdD(Ln=gl_(x);P(!n,y)P(n<0,ar2(x,Nx(csti(y)),MOD))K("{y-x*(-x)!`i$y}",x,y))ar2(x,y,MOD))dct(x,y))
A2(mnm,ar2(x,y,MNM))
A2(mxm,ar2(x,y,MXM))
A2(ltn,ar2(x,y,LTN))
A2(gtn,ltn(y,x))
A2(eql,XYmMA(eac2f(x,y,eql))P(xtsS-ytsS,et2(x,y))P(xtsS,eql(AT(xt+ti-ts,mut(x)),AT(yt+ti-ts,mut(y))))ar2(x,y,EQL))

S A3(___f,Nn=yn,i=!x;I(i,x=ii(y,0))W(i<n,x=z2(x,ii(y,i++));B(!x))y(x))S A3 dexs;
S A3(dexf,las(dexs(x,y,z)))
S L mmmfZ(Lv,Ax/*0*/,Ii)_(Q(xtZDC)L l=-1ll<<8*xW-1,h=~l;Nn=xn;P((i?v>=h:v<=l)||!n,v)v=v<l?l:v>h?h:v;
 I(i,S4(xw,i(n,v=max(v,xb)),i(n,v=max(v,xh)),i(n,v=max(v,xi)),i(n,v=max(v,xl))))
 E(  S4(xw,i(n,v=min(v,xb)),i(n,v=min(v,xh)),i(n,v=min(v,xi)),i(n,v=min(v,xl))))v)
S A3(mmmf,Ii=zv==7;P((x&&xtd)||ytD,Lv=ordd(x?gd(cD(x)):i?-WD:WD);y=cD(y);ad(ye(OFP(y);L r=mmmfZ(v,y,i);OFP(y);dord(r))))
 Lv=x?gl(x):i?-WL:WL;az(ye(mmmfZ(v,y,i))))
S A3(admf,Ii=zv==3;Nn=yn;P((x&&xtd)||ytD,Dv=x?gd(cD(x)):i;y=cD(y);ad(ye(I(i,i(n,v*=yd))E(i(n,v+=yd))v)))
 Lv=x?gl(x):i;az(ye(I(i,S4(yw,i(n,v*=yb),i(n,v*=yh),i(n,v*=yi),i(n,v*=yl)))
                    E(  S4(yw,i(n,v+=yb),i(n,v+=yh),i(n,v+=yi),i(n,v+=yl)))v)))
S A3(subf,neg(admf(x?neg(x):yn?mul(ai(-2),ii(y,0)):0,y,ADD)))
A3(arf,Q(ztv)Q(zv<11)Q(!x||xtzdc)Q(ytZDC)T(&dexf,admf,subf,admf,___f,___f,mmmf,mmmf,___f,___f,___f)[zv](x,y,z))

S A3(___s,Ni=!x;Au=i?x=ii(y,0),enl(xR):oA;Nn=yn;W(i<n,x=z2(x,ii(y,i++));P(!x,y(u))uq(xR))x(y(u)))
S A3(dexs,x?x(y):y)
S A3(adds,L w=x?gl(x):0;Nn=yn;
 W(1,I b=1;Lv=w;Ct=yt;Au=an(t,n);
  S4(yw,i(n,ub=v+=yb;B(v-(B)v,b=0)),i(n,uh=v+=yh;B(v-(H)v,b=0)),i(n,ui=v+=yi;B(v-(I)v,b=0)),i(n,ul=v+=yl))
  P(b,y(u))y=cT[t+1](u(y)))0)
S A3(muls,L w=x?gl(x):1;Nn=yn;
 W(1,I b=1;Lv=w;Ct=yt;Au=an(t,n);I(t==tL,i(n,ul=v*=yl))J(t==tI,i(n,ui=v*=yi;B(v-(I)v,b=0)))
  J(t==tH,i(n,uh=v*=yh;B(v-(H)v,b=0)))J(t==tB,i(n,ub=v*=yb;B(v-(B)v,b=0)))E(Q(0))P(b,y(u))y=cT[t+1](u(y)))0)
S A3(subs,neg(adds(neg(x?x:mul(ai(2),ii(y,0))),y,0)))
S A3(mxms,P((!x||xtz)&&ytZ,Lv=x?gl(x):-WL,l=-1ll<<8*yW-1,h=~l;Nn=yn;I(v<=l||h<=v,P(v>=0,y(rsh(n,az(v))))v=v<0?l:h)
 Au=yr-1?an(yt,n):y;S4(yw,i(n,ub=v=max(v,yb)),i(n,uh=v=max(v,yh)),i(n,ui=v=max(v,yi)),i(n,ul=v=max(v,yl)))
 y-u?y(u):u)___s(x,y,z))
SN A1(inv,x=mut(x);Nn=xn*xW;i(PD(n,xC),xc^=-1)x)
S A3(mnms,P((!x||xtz)&&ytZ,inv(mxms(x?az(-1-gl(x)):0,inv(y),MXM)))___s(x,y,z))
A3(ars,Q(ztv)Q(zv<11)Q(!x||xtzdc)Q(ytZDC)T(&dexs,adds,subs,muls,___s,___s,mnms,mxms,___s,___s,___s)[zv](x,y,z))

S A3(dexp,cat(x,drp(-1,y)))
S A3(___p,v2[zv](y,dexp(x,yR,av)))
S A3(modp,eac2f(y,dexp(x,yR,av),mod))
S A3(mmmp,Nn=yn;I w=yw,o=z-MNM;Lv=gl(x),l=-1ll<<(8<<w)-1,h=~l;v=o&&v<=l?l:!o&&v>=h?h:v;P(o?v>=h:v<=l,rsh(n,y(az(v))))
 x=ax(y);iW(y,w,-1,v);
 I(o,S4(w,j(n,Ni=n-1-j;xb=max(yb,yB[i-1])),j(n,Ni=n-1-j;xh=max(yh,yH[i-1])),j(n,Ni=n-1-j;xi=max(yi,yI[i-1])),j(n,Ni=n-1-j;xl=max(yl,yL[i-1]))))
 E(  S4(w,j(n,Ni=n-1-j;xb=min(yb,yB[i-1])),j(n,Ni=n-1-j;xh=min(yh,yH[i-1])),j(n,Ni=n-1-j;xi=min(yi,yI[i-1])),j(n,Ni=n-1-j;xl=min(yl,yL[i-1]))))
 yn=n;x)
S A3(cmpp,I o=z-LTN,w=yw;Nn=yn;Au=aB(n);Lv=gl(x),p=iw(y,w,0);*uB=!o?p<v:o==1?p>v:p==v;
 S4(o,S4(w,j(n-1,Ni=n-1-j;ub=yb< yB[i-1]),j(n-1,Ni=n-1-j;ub=yh< yH[i-1]),j(n-1,Ni=n-1-j;ub=yi< yI[i-1]),j(n-1,Ni=n-1-j;ub=yl< yL[i-1])),
      S4(w,j(n-1,Ni=n-1-j;ub=yb> yB[i-1]),j(n-1,Ni=n-1-j;ub=yh> yH[i-1]),j(n-1,Ni=n-1-j;ub=yi> yI[i-1]),j(n-1,Ni=n-1-j;ub=yl> yL[i-1])),
      S4(w,j(n-1,Ni=n-1-j;ub=yb==yB[i-1]),j(n-1,Ni=n-1-j;ub=yh==yH[i-1]),j(n-1,Ni=n-1-j;ub=yi==yI[i-1]),j(n-1,Ni=n-1-j;ub=yl==yL[i-1])),
      {})y(u))
A3(arp,Q(ztv)Q(zv<11)Q(xtzc)Q(ytZC)T(&dexp,___p,___p,___p,___p,modp,mmmp,mmmp,cmpp,cmpp,cmpp)[zv](x,y,z))

S A4(dexa,/*1101*/P(utT&&yn-un,el2(x(y),u))Ny(sup(&x,&u));x=mut(x);P(!ina(y,xn),ei2(x(y),u))
 Nn=yn;I wx=xw,wy=yw,wu=utt?-1:uw;Lv=wu<0?gl_(u):0;ye(ue(i(n,iW(x,wx,iw(y,wy,i),wu<0?v:iw(u,wu,i)))x)))
S A4(adma,/*1101*/P(utT&&yn-un,el2(x(y),u))x=cL(x);u=cL(u);x=mut(x);P(!ina(y,xn),ei2(x(y),u))I(!ytL,y=cI(y))
 V*v=utP?&u:uV;I d=utT;Nn=yn;
 ye(ue(I(zv==1,I(ytL,i(n,xL[yl]+=uL[d*i]))E(i(n,xL[yi]+=uL[d*i])))
       E(      I(ytL,i(n,xL[yl]*=uL[d*i]))E(i(n,xL[yi]*=uL[d*i])))x)))
S A4(mmma,/*1101*/P(utT&&yn-un,el2(x(y),u))Ny(sup(&x,&u));x=mut(x);P(!ina(y,xn),ei2(x(y),u))I(!ytL,y=cI(y))
 V*v=utP?&u:uV;I d=utT;Nn=yn;
 ye(ue(switch(zv){
  case 6:{S4(xw,I(ytL,i(n,xB[yl]=min(xB[yl],uB[d*i])))E(i(n,xB[yi]=min(xB[yi],uB[d*i]))),
                I(ytL,i(n,xH[yl]=min(xH[yl],uH[d*i])))E(i(n,xH[yi]=min(xH[yi],uH[d*i]))),
                I(ytL,i(n,xI[yl]=min(xI[yl],uI[d*i])))E(i(n,xI[yi]=min(xI[yi],uI[d*i]))),
                I(ytL,i(n,xL[yl]=min(xL[yl],uL[d*i])))E(i(n,xL[yi]=min(xL[yi],uL[d*i]))))break;}
  case 7:{S4(xw,I(ytL,i(n,xB[yl]=max(xB[yl],uB[d*i])))E(i(n,xB[yi]=max(xB[yi],uB[d*i]))),
                I(ytL,i(n,xH[yl]=max(xH[yl],uH[d*i])))E(i(n,xH[yi]=max(xH[yi],uH[d*i]))),
                I(ytL,i(n,xI[yl]=max(xI[yl],uI[d*i])))E(i(n,xI[yi]=max(xI[yi],uI[d*i]))),
                I(ytL,i(n,xL[yl]=max(xL[yl],uL[d*i])))E(i(n,xL[yi]=max(xL[yi],uL[d*i]))))break;}}x)))
S A4(suba,adma(x,y,ADD,neg(u)))
A4(ara,/*1101*/Q(xtZC)Q(ytZC)Q(ztv)Q(0xcf&1<<zv)Q(utzZ||utcC)T(&dexa,adma,suba,adma,0,0,mmma,mmma)[zv](x,y,z,u))
