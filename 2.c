#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
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
#define hiT(i,T) mod##i##T,mnm##i##T,mxm##i##T,ltn##i##T,0,eql##i##T
#define hi(i) {{0,hiT(i,B)},{0,hiT(i,H)},{0,hiT(i,I)},{0,hiT(i,L)},{dvd##i##D,hiT(i,D)}},
TY(&mod0B)aro[][5][7]={hi(0)hi(1)hi(2)hi(3)};//a+a a+l l+a l+l
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
A2(ltn,P((1<<xt|1<<yt)&(1<<tm|1<<tM|1<<tA|1<<tS),eac2f(x,y,ltn))P(xts&&yts,ai(qA(x,y)<0))ar2(x,y,LTN))
A2(gtn,ltn(y,x))
A2(eql,XYmMA(eac2f(x,y,eql))P(xtsS-ytsS,et2(x,y))P(xtsS,eql(AT(xt+ti-ts,mut(x)),AT(yt+ti-ts,mut(y))))ar2(x,y,EQL))

#define i4(w,n,a,b,c,d) S4(w,i(n,a),i(n,b),i(n,c),i(n,d))
#define MIN(x,y) (x)=min(x,y)
#define MAX(x,y) (x)=max(x,y)
SN A1(inv,x=mut(x);Nn=xn*xW;i(PD(n,xC),xc^=-1)x)

S A3(___f,Nn=yn,i=!x;I(i,x=ii(y,0))W(i<n,x=z2(x,ii(y,i++));B(!x))y(x))S A3 dexs;
S A3(dexf,las(dexs(x,y,z)))
S L mmmfZ(Lv,Ax/*0*/,Ii)_(Q(xtZDC)L l=-1ll<<8*xW-1,h=~l;Nn=xn;P((i?v>=h:v<=l)||!n,v)v=v<l?l:v>h?h:v;
 I(i,i4(xw,n,MAX(v,xb),MAX(v,xh),MAX(v,xi),MAX(v,xl)))E(i4(xw,n,MIN(v,xb),MIN(v,xh),MIN(v,xi),MIN(v,xl)))v)
S A3(mmmf,Ii=zv==7;P((x&&xtd)||ytD,Lv=ofpd1(x?gd(cD(x)):i?-WD:WD);y=cD(y);ad(ye(OFP1(y);L r=mmmfZ(v,y,i);OFP0(y);ofpd0(r))))
 Lv=x?gl(x):i?-WL:WL;az(ye(mmmfZ(v,y,i))))
S A3(admf,Ii=zv==3;Nn=yn;P((x&&xtd)||ytD,Dv=x?gd(cD(x)):i;y=cD(y);ad(ye(I(i,i(n,v*=yd))E(i(n,v+=yd))v)))
 Lv=x?gl(x):i;az(ye(I(i,i4(yw,n,v*=yb,v*=yh,v*=yi,v*=yl))E(i4(yw,n,v+=yb,v+=yh,v+=yi,v+=yl))v)))
S A3(subf,neg(admf(x?neg(x):yn?mul(ai(-2),ii(y,0)):0,y,ADD)))
A3(arf,Q(ztv)Q(zv<11)Q(!x||xtzdc)Q(ytZDC)T(&dexf,admf,subf,admf,___f,___f,mmmf,mmmf,___f,___f,___f)[zv](x,y,z))

S A3(___s,Ni=!x;Au=i?x=ii(y,0),enl(xR):oA;Nn=yn;W(i<n,x=z2(x,ii(y,i++));P(!x,y(u))uq(xR))x(y(u)))
S A3(dexs,x?x(y):y)
S A3(adds,L w=x?gl(x):0;Nn=yn;
 W(1,I b=1;Lv=w;Ct=tB+yw;Au=an(t,n);
  i4(yw,n,ub=v+=yb;B(v-(B)v,b=0),uh=v+=yh;B(v-(H)v,b=0),ui=v+=yi;B(v-(I)v,b=0),ul=v+=yl)P(b,y(u))y=cT[t+1](u(y)))0)
S A3(muls,L w=x?gl(x):1;Nn=yn;
 W(1,I b=1;Lv=w;Ct=yt;Au=an(t,n);I(t==tL,i(n,ul=v*=yl))J(t==tI,i(n,ui=v*=yi;B(v-(I)v,b=0)))
  J(t==tH,i(n,uh=v*=yh;B(v-(H)v,b=0)))J(t==tB,i(n,ub=v*=yb;B(v-(B)v,b=0)))E(Q(0))P(b,y(u))y=cT[t+1](u(y)))0)
S A3(subs,neg(adds(neg(x?x:mul(ai(2),ii(y,0))),y,0)))
S A3(mxms,P((!x||xtz)&&ytZ,Lv=x?gl(x):-WL,l=-1ll<<8*yW-1,h=~l;Nn=yn;I(v<=l||h<=v,P(v>=0,y(rsh(n,az(v))))v=v<0?l:h)
 Au=yr-1?an(yt,n):y;i4(yw,n,ub=MAX(v,yb),uh=MAX(v,yh),ui=MAX(v,yi),ul=MAX(v,yl))y-u?y(u):u)___s(x,y,z))
S A3(mnms,P((!x||xtz)&&ytZ,inv(mxms(x?az(~gl(x)):0,inv(y),MXM)))___s(x,y,z))
S A3(eqls,Lv=x?gl(x):~*yL;Au=ytB&&yr==1?y:aB(yn);i4(yw,yn,ub=v=v==yb,ub=v=v==yh,ub=v=v==yi,ub=v=v==yl)y-u?y(u):u)
A3(ars,Q(ztv)Q(zv<11)Q(!x||xtzc)Q(ytZC)T(&dexs,adds,subs,muls,___s,___s,mnms,mxms,___s,___s,eqls)[zv](x,y,z))

S A3(dexp,cat(x,drp(-1,y)))
S A3(___p,v2[zv](y,dexp(x,yR,av)))
S A3(modp,eac2f(y,dexp(x,yR,av),mod))
S A3(mxmp,YC(mxmp(x,cB(y),z))
 I w=yw;Lv=gl(x),l=-1ll<<(8<<w)-1,h=~l;MAX(v,l);Nn=yn;P(v>=h,rsh(n,y(az(v))))x=ax(y);iW(y,w,-1,v);Nj=n-1;
 i4(w,n,xB[j]=max(yB[j],yB[j-1]);j--,xH[j]=max(yH[j],yH[j-1]);j--,xI[j]=max(yI[j],yI[j-1]);j--,xL[j]=max(yL[j],yL[j-1]);j--)
 yn=n;x)
S A3(mnmp,inv(mxmp(az(~gl(x)),inv(y),MXM)))
S A3(cmpp,I o=z-LTN,w=yw;Nn=yn;Au=aB(n);Lv=gl(x),p=iw(y,w,0);*uB=!o?p<v:o==1?p>v:p==v;Lm=n-1;Lj=m;
 S4(o,i4(w,m,uB[j]=yB[j]< yB[j-1];j--,uB[j]=yH[j]< yH[j-1];j--,uB[j]=yI[j]< yI[j-1];j--,uB[j]=yL[j]< yL[j-1];j--),
      i4(w,m,uB[j]=yB[j]> yB[j-1];j--,uB[j]=yH[j]> yH[j-1];j--,uB[j]=yI[j]> yI[j-1];j--,uB[j]=yL[j]> yL[j-1];j--),
      i4(w,m,uB[j]=yB[j]==yB[j-1];j--,uB[j]=yH[j]==yH[j-1];j--,uB[j]=yI[j]==yI[j-1];j--,uB[j]=yL[j]==yL[j-1];j--),)y(u))
A3(arp,Q(ztv)Q(zv<11)Q(xtzc)Q(ytZC)T(&dexp,___p,___p,___p,___p,modp,mnmp,mxmp,cmpp,cmpp,cmpp)[zv](x,y,z))

S A4(dexa,/*1101*/Ny(sup(&x,&u));x=mut(x);Nn=yn;I wx=xw,wy=yw,wu=utt?-1:uw;Lv=wu<0?gl_(u):0;
 ye(ue(I(utt,i4(wx,n,xB[iw(y,wy,i)]=v ,xH[iw(y,wy,i)]=v ,xI[iw(y,wy,i)]=v ,xL[iw(y,wy,i)]=v ))
       E(    i4(wx,n,xB[iw(y,wy,i)]=ub,xH[iw(y,wy,i)]=uh,xI[iw(y,wy,i)]=ui,xL[iw(y,wy,i)]=ul))x)))
S A4(adma,/*1101*/x=cL(x);u=cL(u);x=mut(x);I(!ytL,y=cI(y))Nn=yn;
 I(utt,Lv=gl(u);ye(I(zv==1,I(ytL,i(n,xL[yl]+=v ))E(i(n,xL[yi]+=v )))E(I(ytL,i(n,xL[yl]*=v ))E(i(n,xL[yi]*=v )))0))
 E(ue(          ye(I(zv==1,I(ytL,i(n,xL[yl]+=ul))E(i(n,xL[yi]+=ul)))E(I(ytL,i(n,xL[yl]*=ul))E(i(n,xL[yi]*=ul)))0)))x)
S A4(mmma,/*1101*/Ny(sup(&x,&u));x=mut(x);I(!ytL,y=cI(y))V*v=utP?&u:uV;I d=utT;Nn=yn;
 ye(ue(I(zv==6,I(ytL,i4(xw,n,MIN(xB[yl],uB[d*i]),MIN(xH[yl],uH[d*i]),MIN(xI[yl],uI[d*i]),MIN(xL[yl],uL[d*i])))
               E(    i4(xw,n,MIN(xB[yi],uB[d*i]),MIN(xH[yi],uH[d*i]),MIN(xI[yi],uI[d*i]),MIN(xL[yi],uL[d*i]))))
       E(      I(ytL,i4(xw,n,MAX(xB[yl],uB[d*i]),MAX(xH[yl],uH[d*i]),MAX(xI[yl],uI[d*i]),MAX(xL[yl],uL[d*i])))
               E(    i4(xw,n,MAX(xB[yi],uB[d*i]),MAX(xH[yi],uH[d*i]),MAX(xI[yi],uI[d*i]),MAX(xL[yi],uL[d*i]))))x)))
S A4(suba,adma(x,y,ADD,neg(u)))
A4(ara,/*1101*/Q(xtZC)Q(ytZC)Q(ztv)Q(0xcf&1<<zv)Q(utzZ||utcC)
 P(utT&&yn-un,el2(x(y),u))P(!ina(y,xn),ei2(x(y),u))T(&dexa,adma,suba,adma,0,0,mmma,mmma)[zv](x,y,z,u))
