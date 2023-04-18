#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S A adm(Ax,Ay,Iv/*01v*/)_(XYmMA(e2f(v?mul:add,x,y))YE(P(!v&&xtz,Lv=gl_(x),i=*yL,j=yL[1];y(0);aE(i+v,j+v))adm(x,gZ(y),v))XE(x=gZ(xR);y(adm(y,x,v)))
 Ik=2*xtT+ytT;P(!k,P(xti&&yti,az(v?xv*(L)yv:xv+(L)yv))P(xtzc&&ytzc,Lm=gl_(x),n=gl(y);az(v?m*n:m+n))x=Ny(cF(xR));y=Nx(cF(y));F a=gf(x),b=gf(y);af(v?a*b:a+b))
 P(k==2,y(adm(y,xR,v)))P(k==3&&xn-yn,el1(y))
 P(xtfF||ytF,P(!xtfF,x=Ny(cF(xR));x(adm(x,y,v)))P(!ytF,adm(x,Ny(cF(y)),v))
  Az=yr-1?aF(yn):y;Nn=zn+3&~3;I(k==1,F a=*xF;I(v,i(n,zf=a*yf))E(i(n,zf=a+yf)))J(v,i(n,zf=xf*yf))E(i(n,zf=xf+yf))y-z?y(z):z)
 YC(adm(x,cG(y),v))
 P((1<<xt|1<<yt)&~(1<<tG|1<<tH|1<<tI|1<<tL|1<<tC|1<<ti|1<<tl|1<<tc),et1(y))
 I ox=0;Az;Nn=yn,i=0;
 I(k==1,L a=gl_(x);I w=MAX(tZ(a)-tG,yw);y=cT[tG+w](y);z=yr-1?an(n,yt):y;
  W(1,I(v,S4(w,{G*b=yG-i*(y!=z);W(i<n,Iv=a*b[i];B(v-(G)v)zg=v;i++)}, {H*b=yH-i*(y!=z);W(i<n,Iv=a*b[i];B(v-(H)v)zh=v;i++)},
               {I*b=yI-i*(y!=z);W(i<n,Lv=a*b[i];B(v-(I)v)zi=v;i++)}, {L*b=yL-i*(y!=z);W(i<n,zl=a*b[i];i++)}))
      E(  S4(w,{G*b=yG-i*(y!=z);W(i<n,Iv=a+b[i];B(v-(G)v)zg=v;i++)}, {H*b=yH-i*(y!=z);W(i<n,Iv=a+b[i];B(v-(H)v)zh=v;i++)},
               {I*b=yI-i*(y!=z);W(i<n,Lv=a+b[i];B(v-(I)v)zi=v;i++)}, {L*b=yL-i*(y!=z);W(i<n,zl=a+b[i];i++)}))
      B(i>=n)w++;I(y-z,y=wdn(y,i,n,n-i);z=wdn(z,0,i,n))E(y=z=wdn(z,0,n,n))))
 E(Q(k==3);I w=MAX(xw,yw);P(xw-w,x=cT[tG+w](xR);x(adm(x,y,v)))y=cT[tG+w](y);z=yr-1?an(n,yt):y;
  W(1,I(v,S4(w,{G*a=xG-i;G*b=yG-i*(y!=z);W(i<n,Iv=a[i]*(I)b[i];B(v-(G)v)zg=v;i++)}, {H*a=xH-i;H*b=yH-i*(y!=z);W(i<n,Iv=a[i]*(I)b[i];B(v-(H)v)zh=v;i++)},
               {I*a=xI-i;I*b=yI-i*(y!=z);W(i<n,Lv=a[i]*(L)b[i];B(v-(I)v)zi=v;i++)}, {L*a=xL-i;L*b=yL-i*(y!=z);W(i<n,zl=a[i]*b[i];i++)}))
      E(  S4(w,{G*a=xG-i;G*b=yG-i*(y!=z);W(i<n,Iv=a[i]+(I)b[i];B(v-(G)v)zg=v;i++)}, {H*a=xH-i;H*b=yH-i*(y!=z);W(i<n,Iv=a[i]+(I)b[i];B(v-(H)v)zh=v;i++)},
               {I*a=xI-i;I*b=yI-i*(y!=z);W(i<n,Lv=a[i]+(L)b[i];B(v-(I)v)zi=v;i++)}, {L*a=xL-i;L*b=yL-i*(y!=z);W(i<n,zl=a[i]+b[i];i++)}))
      B(i>=n)w++;x=wdn(ox?x:xR,i,n,n-i);ox=1;I(y-z,y=wdn(y,i,n,n-i);z=wdn(z,0,i,n))E(y=z=wdn(z,0,n,n))))
 I(ox,x(0))y-z?y(z):z)
A2(dex,y)A2(add,adm(x,y,0))A2(mul,adm(x,y,1))A2(sub,add(x,N(neg(y))))

A2(dvd,XYmMA(e2f(dvd,x,y))XE(x=gZ(xR);x(dvd(x,y)))YE(dvd(x,gZ(y)))x=Ny(cF(xR));y=Nx(cF(y));Xf(Fv=gf(x);Yf(af(v/gf(y)))
 Az=yr==1?y:aF(yn);i(yn,zf=v/yf)y-z?y(z):z)Yf(Fv=gf(y);Az=xr==1?x:aF(xn);i(xn,zf=xf/v)x-z?x(z):z)
 P(xn-yn,el2(x,y))Az=xr==1?x:yr==1?y:aF(xn);i(xn,zf=xf/yf)x==z?y(z):y==z?x(z):x(y(z)))

Y2(mod,RmMA(e2f(mod,x,y))Rzc(fir(N(mod(x,enl(y)))))RC(mod(x,cG(y)))RE(mod(x,gZ(y)))RfF(Ln=gl_(x);P(!n,y)P(n<0,en1(y))K2("{y-x*(-x)!_y}",x,y))R_(ed1(y))
 RZ_E(Lm=gl_(x);P(!m,y)
  P(m<0,m=-m;Az=an(yn,yt);S4(yw,i(zn,Cv=yg;zg=v<0?-1-~v/m:v/m),i(zn,Hv=yh;zh=v<0?-1-~v/m:v/m),i(zn,Iv=yi;zi=v<0?-1-~v/m:v/m),i(zn,Lv=yl;zl=v<0?-1-~v/m:v/m))y(z))
  P(m&m-1,Az=an(yn,tZ(m));I wy=yw;S4(zw,i(zn,zg=(iw(y,wy,i)%m+m)%m),i(zn,zh=(iw(y,wy,i)%m+m)%m),i(zn,zi=(iw(y,wy,i)%m+m)%m),i(zn,zl=(iw(y,wy,i)%m+m)%m))y(z))
  m--;I t=tZ(m),w=t-tG;y=mut(N(cT[t](y)));i(3-w,m|=m<<(8<<w+i))L*p=yV;i((yn<<w)+31>>5,j(4,*p++&=m))y))
X2(bng,RMT(ytm||rnk(x)<0?ed1(y):ytt?bng(x,rsz(xN,y)):xN-yN?el1(y):am(xR,y))Rs(x=rsz(yN,x);x(bng(x,y)))Rzc(mod(x,y))R_(et1(y)))

S A2 mmm;S L l,f;//l:left arg's value, f:function(0=mnm,-1=mxm)
S X1(mmmz,RmMA(e1f(mmmz,x))RE(mmmz(gZ(x)))RC(mmmz(cG(x)))RfF(Ay=of1(Nx(cF(az(l))));x=of1(Ny(cF(x)));of0(N(y(mmm(y,x)))))Rzc(az(f^MIN(f^l,f^gl(x))))R_(et1(x))
 RZ_E(Ct=tZ(l);I(xt<t,x=cT[t](x))E(t=xt)Nn=xn;Ay=xr==1?x:an(n,t);C w=t-tG;n+=31>>w;Lv=f^l;
  S4(w,i(n&~31,yg=f^MIN(v,f^xg)),i(n&~15,yh=f^MIN(v,f^xh)),i(n&~7,yi=f^MIN(v,f^xi)),i(n&~3,yl=f^MIN(v,f^xl)))x-y?x(y):y))
S Y2(mmmZ,RmMA(e2f(mmm,x,y))RE(mmm(x,gZ(y)))RC(mmm(x,cG(y)))RfF(x=of1(Ny(cF(xR)));y=of1(Nx(cF(y)));of0(N(x(mmm(x,y)))))Rzc(y(mmm(y,xR)))R_(et1(y))
 RZ_E(P(xn-yn,el1(y))C w=xw;P(w<yw,x=cT[tG+yw](xR);x(mmmZ(x,y)))y=cT[tG+w](y);Nn=yn;Az=yr==1?y:an(n,tG+w);n+=31>>w;Lv=f^l;
  S4(w,i(n&~31,zg=f^MIN(f^xg,f^yg)),i(n&~15,zh=f^MIN(f^xh,f^yh)),i(n&~7,zi=f^MIN(f^xi,f^yi)),i(n&~3,zl=f^MIN(f^xl,f^yl)))y-z?y(z):z))
S X2(mmm,RmMA(e2f(mmm,x,y))RE(y(mmm(y,xR)))RfF(x=of1(Ny(cF(xR)));y=of1(Nx(cF(y)));of0(N(x(mmm(x,y)))))Rzc(L o=l;l=gl_(x);y=mmmz(y);l=o;y)RZC_E(mmmZ(x,y))R_(et1(y)))
A2(mnm,f=0;mmm(x,y))A2(mxm,f=-1;mmm(x,y))

S C tZx(Ax)_(Ct=TX[xt];t?t:tZ(gl_(x)))C sup(A*p,A*q)_(Ax=*p,y=*q;Ct=MAX(tZx(x),tZx(y));*p=x=Ny(cT[t](x));*q=y=Nx(cT[t](y));t)
A2(ltn,P((1<<xt|1<<yt)&(1<<tm|1<<tM|1<<tA|1<<tS),e2f(ltn,x,y))YE(ltn(x,gZ(y)))XE(x=gZ(xR);x(ltn(x,y)))
 Ik=xtT<<1|ytT;
 P(!k,P(xtzc&&ytzc,ai(gl_(x)<gl(y)))P(xtzfc&&ytzfc,x=Ny(cF(xR));y=Nx(cF(y));ai(qf(gf(x),gf(y))<0))P(xts&&yts,y(ai(qA(x,y)<0)))et1(y))
 P(k==3&&xn-yn,el1(y))
 xR;N(sup(&x,&y));XfF(x=of1(x);x(ltn(x,of1(y))))P(k==2,y=az(gl(y)-1);not(N(y(ltn(y,x)))))Nn=k-1?xn:yn;Az=aG(n);
 I(k==1,Lv=gl_(x);S4(yw,i(n,zg=v<yg),i(n,zg=v<yh),i(n,zg=v<yi),i(n,zg=v<yl)))
 E(Q(k==3);S4(xw,i(n,zg=xg<yg),i(n,zg=xh<yh),i(n,zg=xi<yi),i(n,zg=xl<yl)))
 x(y(z)))
A2(gtn,y(ltn(y,xR)))

SN V eqlzG(Lv,O V*RES a,G*RES r,Nn){O G*p=a;G w=v;i(n+31&~31,r[i]=w==p[i])}
SN V eqlzH(Lv,O V*RES a,G*RES r,Nn){O H*p=a;H w=v;i(n+15&~15,r[i]=w==p[i])}
SN V eqlzI(Lv,O V*RES a,G*RES r,Nn){O I*p=a;I w=v;i(n+ 7&~ 7,r[i]=w==p[i])}
SN V eqlzL(Lv,O V*RES a,G*RES r,Nn){O L*p=a;L w=v;i(n+ 3&~ 3,r[i]=w==p[i])}
S A eqlvV(Lv,Ax/*1*/)_(I w=xw;P(tG+w<tZ(v),whr(len(x)))Nn=xn;Ay=aG(n);G*r=yG;Mx(A(&eqlzG,eqlzH,eqlzI,eqlzL)[w](v,xV,yG,n));y)
S X1(eqlz,RmMA(e1f(eqlz,x))RE(Li=*xL,n=xL[1]-i,v=l-i;x=whr(len(x));Q(xtG)I(IN(v,n),xG[v]=1)x)Rzc(ai(l==gl(x)))Rf(ai(*(L*)A((F)l)==gl(x)))RF(eqlvV(*(L*)A((F)l),x))
 RZC_E(eqlvV(l,x))R_(et1(x)))
S Y2(eqlZ,RmMA(e2f(eql,x,y))RE(eql(x,gZ(y)))Rt(y(eql(y,xR)))
 R_(P(xn-yn,el1(y))xR;N(sup(&x,&y));Ct=TT[MIN(xt,yt)];Nn=xn;Az=aG(n);S4(Tw[t],i(n,zg=xg==yg),i(n,zg=xh==yh),i(n,zg=xi==yi),i(n,zg=xl==yl))x(y(z))))
S Y2(eqls,RmMA(e2f(eqls,x,y))RsS(x=AT(xt+ti-ts,mut(xR));x(eql(x,AT(yt+ti-ts,mut(y)))))R_(et1(y)))
S Y2(eqlf,RmMA(e2f(eqlf,x,y))R_(x=Ny(cF(xR));y=Nx(cF(y));x=AT(xt+tl-tf,mut(x));y=AT(yt+tl-tf,mut(y));x(eql(x,y))))
X2(eql,RmMA(e2f(eql,x,y))RE(x=gZ(xR);x(eql(x,y)))RsS(eqls(x,y))RfF(eqlf(x,y))Rzc(l=gl_(x);eqlz(y))RZC_E(eqlZ(x,y))R_(et1(y)))
