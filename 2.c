#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
//{0dex 1add 2sub 3mul 4dvd 5mod 6mnm 7mxm 8ltn 9gtn 10eql}x{o0123fspa}x{BHILD} = {:+-*%!&|<>=}x{op a+a a+l l+a l+l f/ f\ f': @}x{byte short int long double}
#define hv(v,T,R,f) S R v##o##T(T x,T y)_(f)
#define hc(v,f,g) hv(v,B,B,f)hv(v,H,B,f)hv(v,I,B,f)hv(v,L,B,f)hv(v,D,B,g)
#define h(v,f)    hv(v,B,B,f)hv(v,H,H,f)hv(v,I,I,f)hv(v,L,L,f)hv(v,D,D,f)
h(mnm,min(x,y))h(mxm,max(x,y))hc(ltn,x<y,qD(x,y)<0)hc(eql,x==y,*(L*)&x==*(L*)&y)
#undef h
#define hV(f,T,R,e...) SN I f(OV*RE p,OV*RE q,V*RE s,Nn)_(O T*a=p,*b=q;R*r=s;e)
#define h0(v,T,R) hV(v##0##T,T,R,*r=v##o##T(*a,*b);0)
#define h1(v,T,R) hV(v##1##T,T,R,LI(b)LI(r)TY(*a)c=*a;i(PD(n,a),*r++=v##o##T(   c,*b++))0)
#define h2(v,T,R) hV(v##2##T,T,R,LI(a)LI(r)TY(*b)c=*b;i(PD(n,a),*r++=v##o##T(*a++,   c))0)
#define h3(v,T,R) hV(v##3##T,T,R,LI(a)LI(b)LI(r)      i(PD(n,a),*r++=v##o##T(*a++,*b++))0)
#define hS(v,T,R) hV(v##2##T,T,R,v##1##T(b,a,r,n))
#define h0123(a...) h0(a)h1(a)h2(a)h3(a)
#define h01S3(a...) h0(a)h1(a)hS(a)h3(a)
h01S3(mnm,B,B)h01S3(mnm,H,H)h01S3(mnm,I,I)h01S3(mnm,L,L)h01S3(mnm,D,D) h01S3(mxm,B,B)h01S3(mxm,H,H)h01S3(mxm,I,I)h01S3(mxm,L,L)h01S3(mxm,D,D)
h0123(ltn,B,B)h0123(ltn,H,B)h0123(ltn,I,B)h0123(ltn,L,B)h0123(ltn,D,B) h01S3(eql,B,B)h01S3(eql,H,B)h01S3(eql,I,B)h01S3(eql,L,B)h01S3(eql,D,B)
#define hiT(i,T) {mnm##i##T,mxm##i##T,ltn##i##T,0,eql##i##T},
#define hi(i) {hiT(i,B)hiT(i,H)hiT(i,I)hiT(i,L)hiT(i,D)},
TY(&eql0B)aro[][5][5]={hi(0)hi(1)hi(2)hi(3)};
S C tZx(Ax)_(Ct=TX[xt];P(t,t)Xl(tZ(gl_(x)))tZ(xv))C sup(A*p,A*q)_(Ax=*p,y=*q;Ct=max(tZx(x),tZx(y));*p=x=Ny(cT[t](x));*q=y=Nx(cT[t](y));t)
S A ar2(Ii,Ax,Ay/*01*/)_(XYmMA(e2f(v2[i],x,y))
 xR;N(sup(&x,&y));Ik=xtT<<1|ytT;P(k==3&&xn-yn,el2(x,y))Ct=k?min(xt,yt):max(xt,yt);V*a=xtP?(V*)&x:xV,*b=ytP?(V*)&y:yV;t=TT[t];V(f,aro[k][t-tB][i-6]);I(i>7,t=tB)
 I(!k,t=max(ti,t+tc-tC);P(TP(t),Ii=0;f(a,b,&i,1);x(y(az(i)))))Az=xt==t&&xr==1?x:yt==t&&yr==1?y:an(t,k-1?xn:yn);f(a,b,zV,zn);x-z?x(y-z?y(z):z):y(z))
S ALA(ext/*n1*/,XMT(x)rsz(n,xtm?enl(x):x))A2(dct,/*01*/P(rnk(x)<0,ed1(y))x=ext(yN,xR);y=ext(xN,y);(xN-yN?el2:am)(x,y))
A2(dex,y)A2(add,adm(x,y,0))A2(sub,add(x,N(neg(y))))A2(mul,adm(x,y,1))
A2(dvd,XYmMA(e2f(dvd,x,y))x=Ny(cD(xR));y=Nx(cD(y));Xd(Dv=gd(x);Yd(ad(v/gd(y)))Az=yr==1?y:aD(yn);i(yn,zd=v/yd)y-z?y(z):z)Yd(Dv=gd(y);Az=xr==1?x:aD(xn);i(xn,zd=xd/v)x-z?x(z):z)
 P(xn-yn,el2(x,y))Az=xr==1?x:yr==1?y:aD(xn);i(xn,zd=xd/yd)x==z?y(z):y==z?x(z):x(y(z)))
A2(mod,YmMA(e2f(mod,x,y))YdD(Ln=gl_(x);P(!n,y)P(n<0,ar2(5,x,N(csti(y))))K2("{y-x*(-x)!`i$y}",x,y))Yzc(fir(N(mod(x,enl(y)))))YC(mod(x,cB(y)))
 YZ(Lm=gl_(x);P(!m,y)P(m<0,m=-m;Az=an(yt,yn);S4(yw,i(zn,Cv=yb;zb=v<0?-1-~v/m:v/m),i(zn,Hv=yh;zh=v<0?-1-~v/m:v/m),i(zn,Iv=yi;zi=v<0?-1-~v/m:v/m),i(zn,Lv=yl;zl=v<0?-1-~v/m:v/m))y(z))
  P(m&m-1,Az=an(tZ(m),yn);I wy=yw;S4(zw,i(zn,zb=(iw(y,wy,i)%m+m)%m),i(zn,zh=(iw(y,wy,i)%m+m)%m),i(zn,zi=(iw(y,wy,i)%m+m)%m),i(zn,zl=(iw(y,wy,i)%m+m)%m))y(z))
  m--;I t=tZ(m),w=t-tB;y=mut(N(cT[t](y)));i(3-w,m|=m<<(8<<w+i))L*p=yV;i((yn<<w)+31>>5,j(4,*p++&=m))y)ed1(y))
A2(bng,Xzc(mod(x,y))dct(x,y))A2(mnm,ar2(6,x,y))A2(mxm,ar2(7,x,y))A2(ltn,P((1<<xt|1<<yt)&(1<<tm|1<<tM|1<<tA|1<<tS),e2f(ltn,x,y))P(xts&&yts,ai(qA(x,y)<0))ar2(8,x,y))
A2(gtn,y(ltn(y,xR)))A2(eql,XYmMA(e2f(eql,x,y))P(xtsS-ytsS,et1(y))P(xtsS,x=AT(xt+ti-ts,mut(xR));x(eql(x,AT(yt+ti-ts,mut(y)))))ar2(10,x,y))

#define i4(w,n,a,b,c,d) S4(w,i(n,a),i(n,b),i(n,c),i(n,d))
#define MIN(x,y) (x)=min(x,y)
#define MAX(x,y) (x)=max(x,y)
SN A1(inv,x=mut(x);Nn=xn*xW;i(PD(n,xC),xc^=-1)x)

S A3(___f,/*001*/Ni=!y;I(i,y=ii(z,0))E(yR)Nn=zn;W(i<n,y=y(x2(y,ii(z,i++)));B(!y))z(y))
S A3(dexf,/*001*/las(z))
S L mmmfZ(Lv,Ax/*0*/,Ii)_(Q(xtZDC)L l=-1ll<<8*xW-1,h=~l;Nn=xn;P((i?v>=h:v<=l)||!n,v)v=v<l?l:v>h?h:v;I(i,i4(xw,n,MAX(v,xb),MAX(v,xh),MAX(v,xi),MAX(v,xl)))E(i4(xw,n,MIN(v,xb),MIN(v,xh),MIN(v,xi),MIN(v,xl)))v)
S A3(mmmf,/*001*/Ii=xv==7;P((y&&ytd)||ztD,Lv=ofpd1(y?gd(cD(yR)):i?-WD:WD);z=cD(z);ad(ze(OFP1(z);L r=mmmfZ(v,z,i);OFP0(z);ofpd0(r))))Lv=y?gl_(y):i?-WL:WL;az(ze(mmmfZ(v,z,i))))
S A3(admf,/*001*/Ii=xv==3;Nn=zn;P((y&&ytd)||ztD,Dv=y?gd(cD(yR)):i;z=cD(z);ad(ze(I(i,i(n,v*=zd))E(i(n,v+=zd))v)))Lv=y?gl_(y):i;az(ze(I(i,i4(zw,n,v*=zb,v*=zh,v*=zi,v*=zl))E(i4(zw,n,v+=zb,v+=zh,v+=zi,v+=zl))v)))
S A3(subf,/*001*/y=y?neg(yR):zn?mul(ai(-2),ii(z,0)):ai(0);y(neg(admf(ADD,y,z))))
A3(arf,/*001*/Q(xtv)Q(xv<11)Q(!y||ytzdc)Q(ztZDC)T(&dexf,admf,subf,admf,___f,___f,mmmf,mmmf,___f,___f,___f)[xv](x,y,z))

S A3(___s,/*001*/ Ni=!y;Au;I(i,y=ii(z,0);u=enl(yR))E(yR;yR;u=oB)Nn=zn;W(i<n,y=y(x2(y,ii(z,i++)));P(!y,z(u(0)))uq(yR))y(z(u)))
S A3(dexs,/*001*/z)
S A3(adds,/*001*/L w=y?gl_(y):0;Nn=zn;W(1,I b=1;Lv=w;Ct=tB+zw;Au=an(t,n);i4(zw,n,ub=v+=zb;B(v-(B)v,b=0),uh=v+=zh;B(v-(H)v,b=0),ui=v+=zi;B(v-(I)v,b=0),ul=v+=zl)P(b,z(u))z=cT[t+1](u(z)))0)
S A3(muls,/*001*/L w=y?gl_(y):1;Nn=zn;
 W(1,I b=1;Lv=w;Ct=zt;Au=an(t,n);I(t==tL,i(n,ul=v*=zl))J(t==tI,i(n,ui=v*=zi;B(v-(I)v,b=0)))J(t==tH,i(n,uh=v*=zh;B(v-(H)v,b=0)))J(t==tB,i(n,ub=v*=zb;B(v-(B)v,b=0)))E(Q(0))P(b,z(u))z=cT[t+1](u(z)))0)
S A3(subs,/*001*/y=neg(y?yR:mul(ai(2),ii(z,0)));neg(y(adds(0,y,z))))
S A3(mxms,/*001*/P((!y||ytz)&&ztZ,Lv=y?gl_(y):-WL,l=-1ll<<8*zW-1,h=~l;Nn=zn;I(v<=l||h<=v,P(v>=0,z(rsz(n,az(v))))v=v<0?l:h)
                                  Au=zr-1?an(zt,n):z;i4(zw,n,ub=MAX(v,zb),uh=MAX(v,zh),ui=MAX(v,zi),ul=MAX(v,zl))z-u?z(u):u)___s(x,y,z))
S A3(mnms,/*001*/P((!y||ytz)&&ztZ,inv(mxms(MXM,y?az(~gl_(y)):0,inv(z))))___s(x,y,z))
S A3(eqls,/*001*/Lv=y?gl_(y):~*zL;Au=ztB&&zr==1?z:aB(zn);i4(zw,zn,ub=v=v==zb,ub=v=v==zh,ub=v=v==zi,ub=v=v==zl)z-u?z(u):u)
A3(ars,/*001*/Q(xtv)Q(xv<11)Q(!y||ytzc)Q(ztZC)T(&dexs,adds,subs,muls,___s,___s,mnms,mxms,___s,___s,eqls)[xv](x,y,z))

S A3(dexp,/*001*/cat(y,drp(-1,z)))
S A3(___p,/*001*/z(v2[xv](z,dexp(av,y,zR))))
S A3(modp,/*001*/z(e2f(mod,z,dexp(av,y,zR))))
S A3(mxmp,/*001*/ZC(mxmp(x,y,cB(z)))I w=zw;Lv=gl_(y),l=-1ll<<(8<<w)-1,h=~l;MAX(v,l);Nn=zn;P(v>=h,rsz(n,z(az(v))))y=zr>1?zr--,an(zt,zn):z;
 S4(w,zB[-1]=v,zH[-1]=v,zI[-1]=v,zL[-1]=v)Nj=n-1;i4(w,n,yB[j]=max(zB[j],zB[j-1]);j--,yH[j]=max(zH[j],zH[j-1]);j--,yI[j]=max(zI[j],zI[j-1]);j--,yL[j]=max(zL[j],zL[j-1]);j--)zn=n;y)
S A3(mnmp,/*001*/y=az(~gl_(y));inv(y(mxmp(MXM,y,inv(z)))))
S A3(cmpp,/*001*/I o=x-LTN,w=zw;Nn=zn;Au=aB(n);Lv=gl_(y),p=iw(z,w,0);*uB=!o?p<v:o==1?p>v:p==v;Lm=n-1,j=m;
 S4(o,i4(w,m,uB[j]=zB[j]< zB[j-1];j--,uB[j]=zH[j]< zH[j-1];j--,uB[j]=zI[j]< zI[j-1];j--,uB[j]=zL[j]< zL[j-1];j--),
      i4(w,m,uB[j]=zB[j]> zB[j-1];j--,uB[j]=zH[j]> zH[j-1];j--,uB[j]=zI[j]> zI[j-1];j--,uB[j]=zL[j]> zL[j-1];j--),
      i4(w,m,uB[j]=zB[j]==zB[j-1];j--,uB[j]=zH[j]==zH[j-1];j--,uB[j]=zI[j]==zI[j-1];j--,uB[j]=zL[j]==zL[j-1];j--),)z(u))
A3(arp,/*001*/Q(xtv)Q(xv<11)Q(ytzc)Q(ztZC)T(&dexp,___p,___p,___p,___p,modp,mnmp,mxmp,cmpp,cmpp,cmpp)[xv](x,y,z))

S A4(dexa,/*1000*/uR;Ny(sup(&x,&u));x=mut(x);Nn=yn;I wx=xw,wy=yw,wu=utt?-1:uw;Lv=wu<0?gl_(u):0;
  ue(I(utt,i4(wx,n,xB[iw(y,wy,i)]=v ,xH[iw(y,wy,i)]=v ,xI[iw(y,wy,i)]=v ,xL[iw(y,wy,i)]=v ))
     E(    i4(wx,n,xB[iw(y,wy,i)]=ub,xH[iw(y,wy,i)]=uh,xI[iw(y,wy,i)]=ui,xL[iw(y,wy,i)]=ul))x))
S A4(adma,/*1000*/yR;uR;x=cL(x);u=cL(u);x=mut(x);I(!ytL,y=cI(y))Nn=yn;
 I(utt,Lv=gl(u);ye(I(zv==1,I(ytL,i(n,xL[yl]+=v ))E(i(n,xL[yi]+=v )))E(I(ytL,i(n,xL[yl]*=v ))E(i(n,xL[yi]*=v )))0))
 E(ue(          ye(I(zv==1,I(ytL,i(n,xL[yl]+=ul))E(i(n,xL[yi]+=ul)))E(I(ytL,i(n,xL[yl]*=ul))E(i(n,xL[yi]*=ul)))0)))x)
S A4(mmma,/*1000*/yR;uR;I d=utT;I(!d,u=enl(u))Ny(sup(&x,&u));x=mut(x);I(!ytL,y=cI(y))Nn=yn;
 ye(ue(I(zv==6,I(ytL,i4(xw,n,MIN(xB[yl],uB[d*i]),MIN(xH[yl],uH[d*i]),MIN(xI[yl],uI[d*i]),MIN(xL[yl],uL[d*i])))
               E(    i4(xw,n,MIN(xB[yi],uB[d*i]),MIN(xH[yi],uH[d*i]),MIN(xI[yi],uI[d*i]),MIN(xL[yi],uL[d*i]))))
       E(      I(ytL,i4(xw,n,MAX(xB[yl],uB[d*i]),MAX(xH[yl],uH[d*i]),MAX(xI[yl],uI[d*i]),MAX(xL[yl],uL[d*i])))
               E(    i4(xw,n,MAX(xB[yi],uB[d*i]),MAX(xH[yi],uH[d*i]),MAX(xI[yi],uI[d*i]),MAX(xL[yi],uL[d*i]))))x)))
S A4(suba,/*1000*/u(adma(x,y,ADD,neg(uR))))
A4(ara,/*1000*/Q(xtZC)Q(ytZC)Q(ztv)Q(0xcf&1<<zv)Q(utzZ||utcC)P(utT&&yn-un,el1(x))P(!ina(y,xn),ei1(x))T(&dexa,adma,suba,adma,0,0,mmma,mmma)[zv](x,y,z,u))
