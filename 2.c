#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S C tZx(Ax)_(Ct=TX[xt];P(t,t)Xl(tZ(gl_(x)))tZ(xv))C sup(A*p,A*q)_(Ax=*p,y=*q;Ct=max(tZx(x),tZx(y));*p=x=Ny(cT[t](x));*q=y=Nx(cT[t](y));t)
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
 P(xti&&yti,az(v?xv*(L)yv:xv+(L)yv))
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
A2(mod,YmMA(e2f(mod,x,y))YfF(Ln=gl_(x);P(!n,y)P(n<0,en1(y))K2("{y-x*(-x)!`i$y}",x,y))Yzc(fir(N(mod(x,enl(y)))))YC(mod(x,cB(y)))
 YZ(Lm=gl_(x);P(!m,y)P(m<0,m=-m;Az=an(yt,yn);S4(yw,i(zn,Cv=yb;zb=v<0?-1-~v/m:v/m),i(zn,Hv=yh;zh=v<0?-1-~v/m:v/m),i(zn,Iv=yi;zi=v<0?-1-~v/m:v/m),i(zn,Lv=yl;zl=v<0?-1-~v/m:v/m))y(z))
  P(m&m-1,Az=an(tZ(m),yn);I wy=yw;S4(zw,i(zn,zb=(iw(y,wy,i)%m+m)%m),i(zn,zh=(iw(y,wy,i)%m+m)%m),i(zn,zi=(iw(y,wy,i)%m+m)%m),i(zn,zl=(iw(y,wy,i)%m+m)%m))y(z))
  m--;I t=tZ(m),w=t-tB;y=mut(N(cT[t](y)));i(3-w,m|=m<<(8<<w+i))L*p=yV;i((yn<<w)+31>>5,j(4,*p++&=m))y)ed1(y))
A2(bng,Xzc(mod(x,y))dct(x,y))
S A mmm(Ax,Ay,A2 f)_(XYmMA(e2f(f,x,y))P(xtfF||ytfF,x=of1(Ny(cF(xR)));y=of1(Nx(cF(y)));x(of0(f(x,y))))
 Ik=xtT<<1|ytT;P(!k,P(xtzc&&ytzc,Lv=gl_(x),w=gl(y);az(f==mnm?min(v,w):max(v,w)))et1(y))P(k==2,y(f(y,xR)))P(k==3&&xn-yn,el1(y))
 xR;N(sup(&x,&y));Ct=TT[k?min(xt,yt):max(xt,yt)];Nn=k-1?xn:yn;Az=yt==t&&yr==1?y:an(t,n);
 I(k==1,Lv=gl_(x);I(f==mnm,S4(zw,i(n,zb=min( v,yb)),i(n,zh=min( v,yh)),i(n,zi=min( v,yi)),i(n,zl=min( v,yl))))
                  E(       S4(zw,i(n,zb=max( v,yb)),i(n,zh=max( v,yh)),i(n,zi=max( v,yi)),i(n,zl=max( v,yl)))))
 E(Q(k==3);       I(f==mnm,S4(zw,i(n,zb=min(xb,yb)),i(n,zh=min(xh,yh)),i(n,zi=min(xi,yi)),i(n,zl=min(xl,yl))))
                  E(       S4(zw,i(n,zb=max(xb,yb)),i(n,zh=max(xh,yh)),i(n,zi=max(xi,yi)),i(n,zl=max(xl,yl)))))x(y-z?y(z):z))
A2(mnm,mmm(x,y,mnm))A2(mxm,mmm(x,y,mxm))
A2(ltn,P((1<<xt|1<<yt)&(1<<tm|1<<tM|1<<tA|1<<tS),e2f(ltn,x,y))
 Ik=xtT<<1|ytT;P(!k,P(xtzc&&ytzc,ai(gl_(x)<gl(y)))P(xtzfc&&ytzfc,x=Ny(cF(xR));y=Nx(cF(y));ai(qf(gf(x),gf(y))<0))P(xts&&yts,y(ai(qA(x,y)<0)))et1(y))
 P(k==3&&xn-yn,el1(y))xR;N(sup(&x,&y));XfF(x=of1(x);x(ltn(x,of1(y))))P(k==2,y=az(gl(y)-1);not(N(y(ltn(y,x)))))Nn=k-1?xn:yn;Az=aB(n);
 I(k==1,Lv=gl_(x);S4(yw,i(n,zb=v<yb),i(n,zb=v<yh),i(n,zb=v<yi),i(n,zb=v<yl)))E(Q(k==3);S4(xw,i(n,zb=xb<yb),i(n,zb=xh<yh),i(n,zb=xi<yi),i(n,zb=xl<yl)))x(y(z)))
A2(gtn,y(ltn(y,xR)))
A2(eql,XYmMA(e2f(eql,x,y))P(xtsS-ytsS,et1(y))P(xtsS,x=AT(xt+ti-ts,mut(xR));x(eql(x,AT(yt+ti-ts,mut(y)))))
 Ik=xtT<<1|ytT;P(!k,P(xtzc&&ytzc,ai(gl_(x)==gl(y)))P(xtf||ytf,x=Ny(cF(xR));y=Nx(cF(y));ai(gl(x)==gl(y)))et1(y))P(k==2,y(eql(y,xR)))P(k==3&&xn-yn,el1(y))
 xR;N(sup(&x,&y));Ct=TT[k?min(xt,yt):max(xt,yt)];I w=Tz[t];Nn=k-1?xn:yn;Az=aB(n);
 I(k==1,S4(w,{Cv=xv;i(n,zb=v==yb)},{Hv=xv;i(n,zb=v==yh)},{Iv=xv;i(n,zb=v==yi)},{Lv=gl_(x);i(n,zb=v==yl)}))
 E(Q(k==3);S4(w,i(n,zb=xb==yb),i(n,zb=xh==yh),i(n,zb=xi==yi),i(n,zb=xl==yl)))x(y(z)))
