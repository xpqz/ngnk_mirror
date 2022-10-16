#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
//{0dex 1add 2sub 3mul 4dvd 5mod 6mnm 7mxm 8ltn 9gtn 10eql}x{o0123fspa}x{BHILD} = {:+-*%!&|<>=}x{op a+a a+l l+a l+l f/ f\ f': @}x{byte short int long double}
#define hv(v,T,R,f) S R v##o##T(T x,T y)_(f)
#define hc(v,f,g) hv(v,B,B,f)hv(v,H,B,f)hv(v,I,B,f)hv(v,L,B,f)hv(v,F,B,g)
#define h(v,f)    hv(v,B,B,f)hv(v,H,H,f)hv(v,I,I,f)hv(v,L,L,f)hv(v,F,F,f)
h(mnm,min(x,y))h(mxm,max(x,y))hc(ltn,x<y,qF(x,y)<0)hc(eql,x==y,*(L*)&x==*(L*)&y)
#undef h
#define hV(f,T,R,e...) SN I f(OV*RE p,OV*RE q,V*RE s,Nn)_(O T*a=p,*b=q;R*r=s;e)
#define h0(v,T,R) hV(v##0##T,T,R,*r=v##o##T(*a,*b);0)
#define h1(v,T,R) hV(v##1##T,T,R,LI(b)LI(r)TY(*a)c=*a;i(PD(n,a),*r++=v##o##T(   c,*b++))0)
#define h2(v,T,R) hV(v##2##T,T,R,LI(a)LI(r)TY(*b)c=*b;i(PD(n,a),*r++=v##o##T(*a++,   c))0)
#define h3(v,T,R) hV(v##3##T,T,R,LI(a)LI(b)LI(r)      i(PD(n,a),*r++=v##o##T(*a++,*b++))0)
#define hS(v,T,R) hV(v##2##T,T,R,v##1##T(b,a,r,n))
#define h0123(a...) h0(a)h1(a)h2(a)h3(a)
#define h01S3(a...) h0(a)h1(a)hS(a)h3(a)
h01S3(mnm,B,B)h01S3(mnm,H,H)h01S3(mnm,I,I)h01S3(mnm,L,L)h01S3(mnm,F,F) h01S3(mxm,B,B)h01S3(mxm,H,H)h01S3(mxm,I,I)h01S3(mxm,L,L)h01S3(mxm,F,F)
h0123(ltn,B,B)h0123(ltn,H,B)h0123(ltn,I,B)h0123(ltn,L,B)h0123(ltn,F,B) h01S3(eql,B,B)h01S3(eql,H,B)h01S3(eql,I,B)h01S3(eql,L,B)h01S3(eql,F,B)
#define hiT(i,T) {mnm##i##T,mxm##i##T,ltn##i##T,0,eql##i##T},
#define hi(i) {hiT(i,B)hiT(i,H)hiT(i,I)hiT(i,L)hiT(i,F)},
TY(&eql0B)aro[][5][5]={hi(0)hi(1)hi(2)hi(3)};
S C tZx(Ax)_(Ct=TX[xt];P(t,t)Xl(tZ(gl_(x)))tZ(xv))C sup(A*p,A*q)_(Ax=*p,y=*q;Ct=max(tZx(x),tZx(y));*p=x=Ny(cT[t](x));*q=y=Nx(cT[t](y));t)
S A ar2(Ii,Ax,Ay/*01*/)_(XYmMA(e2f(v2[i],x,y))
 xR;N(sup(&x,&y));Ik=xtT<<1|ytT;P(k==3&&xn-yn,el2(x,y))Ct=k?min(xt,yt):max(xt,yt);V*a=xtP?(V*)&x:xV,*b=ytP?(V*)&y:yV;t=TT[t];V(f,aro[k][t-tB][i-6]);I(i>7,t=tB)
 I(!k,t=max(ti,t+tc-tC);P(TP(t),Ii=0;f(a,b,&i,1);x(y(az(i)))))Az=xt==t&&xr==1?x:yt==t&&yr==1?y:an(t,k-1?xn:yn);f(a,b,zV,zn);x-z?x(y-z?y(z):z):y(z))
S ALA(ext/*n1*/,XMT(x)rsz(n,xtm?enl(x):x))A2(dct,/*01*/P(rnk(x)<0,ed1(y))x=ext(yN,xR);y=ext(xN,y);(xN-yN?el2:am)(x,y))

#define B2 H
#define H2 I
#define I2 L
#define GZ(T) (HD/SZ(T))
#define hf(f,T,e...)     S N f(OV*RE a0,OV*RE b0,V*RE r0,Nn)_(O T*a=a0,*b=b0;T*r=r0;LI(b)LI(r)e)
#define hN(f,T,l,o)      hf(f,T,I(l,LI(a))i(PD(n,a),r[i]=a[l*i]o b[i])n) //+ and * for widest types, no overflow
#define hO(f,T,l,g,e...) hf(f,T,I(l,LI(a))Li=0;W(i<n,e;i+=g;a+=l*g;b+=g;r+=g)i) //support overflows
#define hA(f,T,l,g)      hO(f,T,l,g,T v[g],o=0;j(g,T u=a[l*j]+b[j];o|=(a[l*j]^u)&(b[j]^u);v[j]=u)P(o>>SZ(T)*8-1,i)Mc(r,v,HD))
#define hM(f,T,l,g)      hO(f,T,l,g,T##2 v[g];j(g,v[j]=a[l*j]*(T##2)b[j])j(g,P(v[j]-(T)v[j],i))j(g,r[j]=v[j]))
#define ho(t,T)          hA(a##t##T,T,0,GZ(T))hA(a##T##T,T,1,GZ(T))hM(m##t##T,T,0,GZ(T))hM(m##T##T,T,1,GZ(T))
#define hn(t,T)          hN(a##t##T,T,0,+)hN(a##T##T,T,1,+)hN(m##t##T,T,0,*)hN(m##T##T,T,1,*)
ho(b,B)ho(h,H)ho(i,I)hn(l,L)hn(f,F)
S C tZZ(Ax/*0*/)_(Xz(tZ(gl_(x)))Xf(tF)XZF(xt)tn)
A adm(Ax,Ay,Iv/*01v*/)_(
 P(xti&&yti,Lm=xv,n=yv;az(v?m*n:m+n))
 P(xtz&&ytz,Lm=gl_(x),n=gl(y);az(v?m*n:m+n))
 XYmMA(e2f(v?mul:add,x,y))
 YcC(adm(x,cB(y),v))
 XcC(y(adm(y,cB(xR),v)))
 P(xtfF-ytfF,x=Ny(cF(xR));y=Nx(cF(y));x(adm(x,y,v)))
 Ct=max(tZZ(x),tZZ(y));P(t==tn,et1(y))
 xR;x=Ny(cT[t](x));y=Nx(cT[t](y));Ik=2*xtT+ytT;
 P(!k,Xf(af(v?gf(x)*gf(y):gf(x)+gf(y)))az(v?gl(x)*gl(y):gl(x)+gl(y)))
 I(k==2||(k==3&&xr==1),SWP(x,y))
 S O TY(&abB)f[][2][5]={{{abB,ahH,aiI,alL,afF},{aBB,aHH,aII,aLL,aFF}},{{mbB,mhH,miI,mlL,mfF},{mBB,mHH,mII,mLL,mFF}}};
 Nn=yn;P(k==3&&xn-n,el2(x,y))Az=yr-1?an(yt,n):y;Lm=f[v][k==3][yt-tB](xtP?(V*)&x:xV,yV,zV,n);
 I(m<n,I(k-3,x=cT[xt+1+tC-tc](x))E(x=wdn(x,m,n,n-m))
       I(y-z,y=wdn(y,m,n,n-m);z=wdn(z,0,m,n))E(y=z=wdn(z,0,n,n))
       N l=m*zW;f[v][k==3][yt-tB](xtP?(V*)&x:xV,yV+(y-z?0:l),zV+l,n-m))
 x(y-z?y(z):z))

A2(dex,y)A2(add,adm(x,y,0))A2(sub,add(x,N(neg(y))))A2(mul,adm(x,y,1))
A2(dvd,XYmMA(e2f(dvd,x,y))x=Ny(cF(xR));y=Nx(cF(y));Xf(Fv=gf(x);Yf(af(v/gf(y)))Az=yr==1?y:aF(yn);i(yn,zf=v/yf)y-z?y(z):z)Yf(Fv=gf(y);Az=xr==1?x:aF(xn);i(xn,zf=xf/v)x-z?x(z):z)
 P(xn-yn,el2(x,y))Az=xr==1?x:yr==1?y:aF(xn);i(xn,zf=xf/yf)x==z?y(z):y==z?x(z):x(y(z)))
A2(mod,YmMA(e2f(mod,x,y))YfF(Ln=gl_(x);P(!n,y)P(n<0,ar2(5,x,N(csti(y))))K2("{y-x*(-x)!`i$y}",x,y))Yzc(fir(N(mod(x,enl(y)))))YC(mod(x,cB(y)))
 YZ(Lm=gl_(x);P(!m,y)P(m<0,m=-m;Az=an(yt,yn);S4(yw,i(zn,Cv=yb;zb=v<0?-1-~v/m:v/m),i(zn,Hv=yh;zh=v<0?-1-~v/m:v/m),i(zn,Iv=yi;zi=v<0?-1-~v/m:v/m),i(zn,Lv=yl;zl=v<0?-1-~v/m:v/m))y(z))
  P(m&m-1,Az=an(tZ(m),yn);I wy=yw;S4(zw,i(zn,zb=(iw(y,wy,i)%m+m)%m),i(zn,zh=(iw(y,wy,i)%m+m)%m),i(zn,zi=(iw(y,wy,i)%m+m)%m),i(zn,zl=(iw(y,wy,i)%m+m)%m))y(z))
  m--;I t=tZ(m),w=t-tB;y=mut(N(cT[t](y)));i(3-w,m|=m<<(8<<w+i))L*p=yV;i((yn<<w)+31>>5,j(4,*p++&=m))y)ed1(y))
A2(bng,Xzc(mod(x,y))dct(x,y))A2(mnm,ar2(6,x,y))A2(mxm,ar2(7,x,y))A2(ltn,P((1<<xt|1<<yt)&(1<<tm|1<<tM|1<<tA|1<<tS),e2f(ltn,x,y))P(xts&&yts,ai(qA(x,y)<0))ar2(8,x,y))
A2(gtn,y(ltn(y,xR)))A2(eql,XYmMA(e2f(eql,x,y))P(xtsS-ytsS,et1(y))P(xtsS,x=AT(xt+ti-ts,mut(xR));x(eql(x,AT(yt+ti-ts,mut(y)))))ar2(10,x,y))
