#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S A admFF(Ax,Ay,If)_(P(xn-yn,el1(y))Az=yr-1?aF(yn):y;Nn=zn+3&~3;I(f==3,i(n,zf=xf*yf))E(i(n,zf=xf+yf))y-z?y(z):z)
S A admfF(Ax,Ay,If)_(Az=yr-1?aF(yn):y;Nn=zn+3&~3;F a=*xF;I(f==3,i(n,zf= a*yf))E(i(n,zf= a+yf))y-z?y(z):z)
S A admFf(Ax,Ay,If)_(y(admfF(y,xR,f)))
S A admff(Ax,Ay,If)_(F a=*xF,b=gf(y);af(f==3?a*b:a+b))
S A admZZ(Ax,Ay,If)_(P(xn-yn,el1(y))I ox=0;Nn=yn,i=0;I w=MAX(xw,yw);P(xw-w,x=cT[tG+w](xR);x(admZZ(x,y,f)))y=cT[tG+w](y);Az=yr-1?an(n,yt):y;
 W(1,S8(w<<1|f==3,{G*a=xG-i;G*b=yG-i*(y!=z);W(i<n,Iv=a[i]+(I)b[i];B(v-(G)v)zg=v;i++)},
                  {G*a=xG-i;G*b=yG-i*(y!=z);W(i<n,Iv=a[i]*(I)b[i];B(v-(G)v)zg=v;i++)},
                  {H*a=xH-i;H*b=yH-i*(y!=z);W(i<n,Iv=a[i]+(I)b[i];B(v-(H)v)zh=v;i++)},
                  {H*a=xH-i;H*b=yH-i*(y!=z);W(i<n,Iv=a[i]*(I)b[i];B(v-(H)v)zh=v;i++)},
                  {I*a=xI-i;I*b=yI-i*(y!=z);W(i<n,Lv=a[i]+(L)b[i];B(v-(I)v)zi=v;i++)},
                  {I*a=xI-i;I*b=yI-i*(y!=z);W(i<n,Lv=a[i]*(L)b[i];B(v-(I)v)zi=v;i++)},
                  {L*a=xL-i;L*b=yL-i*(y!=z);W(i<n,zl=a[i]+b[i];i++)},
                  {L*a=xL-i;L*b=yL-i*(y!=z);W(i<n,zl=a[i]*b[i];i++)})
     B(i>=n)w++;x=wdn(ox?x:xR,i,n,n-i);ox=1;I(y-z,y=wdn(y,i,n,n-i);z=wdn(z,0,i,n))E(y=z=wdn(z,0,n,n)))
 I(ox,x(0))y-z?y(z):z)
S A admzZ(Ax,Ay,If)_(Nn=yn,i=0;L a=gl_(x);I w=MAX(tZ(a)-tG,yw);y=cT[tG+w](y);Az=yr-1?an(n,yt):y;
 W(1,S8(w<<1|f==3,{G*b=yG-i*(y!=z);W(i<n,Iv=a+b[i];B(v-(G)v)zg=v;i++)},
                  {G*b=yG-i*(y!=z);W(i<n,Iv=a*b[i];B(v-(G)v)zg=v;i++)},
                  {H*b=yH-i*(y!=z);W(i<n,Iv=a+b[i];B(v-(H)v)zh=v;i++)},
                  {H*b=yH-i*(y!=z);W(i<n,Iv=a*b[i];B(v-(H)v)zh=v;i++)},
                  {I*b=yI-i*(y!=z);W(i<n,Lv=a+b[i];B(v-(I)v)zi=v;i++)},
                  {I*b=yI-i*(y!=z);W(i<n,Lv=a*b[i];B(v-(I)v)zi=v;i++)},
                  {L*b=yL-i*(y!=z);W(i<n,zl=a+b[i];i++)},
                  {L*b=yL-i*(y!=z);W(i<n,zl=a*b[i];i++)})
     B(i>=n)w++;I(y-z,y=wdn(y,i,n,n-i);z=wdn(z,0,i,n))E(y=z=wdn(z,0,n,n)))
 y-z?y(z):z)
S A admZz(Ax,Ay,If)_(y(admzZ(y,xR,f)))
S A admzz(Ax,Ay,If)_(L a=gl_(x),b=gl(y);az(f==3?a*b:a+b))

S A dvdff(Ax,Ay,If)_(af(*xF/gf(y)))
S A dvdfF(Ax,Ay,If)_(Fv=*xF;Az=yr==1?y:aF(yn);i(yn,zf=v/yf)y-z?y(z):z)
S A dvdFf(Ax,Ay,If)_(Fv=gf(y);Az=aF(xn);i(xn,zf=xf/v)z)
S A dvdFF(Ax,Ay,If)_(P(xn-yn,el1(y))Az=yr==1?y:aF(xn);i(xn,zf=xf/yf)y-z?y(z):z)

S A modzZ(Ax,Ay,If)_(Lm=gl_(x);P(!m,y)
 P(m<0,m=-m;Az=an(yn,yt);S4(yw,i(zn,Cv=yg;zg=v<0?-1-~v/m:v/m),i(zn,Hv=yh;zh=v<0?-1-~v/m:v/m),i(zn,Iv=yi;zi=v<0?-1-~v/m:v/m),i(zn,Lv=yl;zl=v<0?-1-~v/m:v/m))y(z))
 P(m&m-1,Az=an(yn,tZ(m));I wy=yw;S4(zw,i(zn,zg=(iw(y,wy,i)%m+m)%m),i(zn,zh=(iw(y,wy,i)%m+m)%m),i(zn,zi=(iw(y,wy,i)%m+m)%m),i(zn,zl=(iw(y,wy,i)%m+m)%m))y(z))
 m--;I t=tZ(m),w=t-tG;y=mut(N(cT[t](y)));i(3-w,m|=m<<(8<<w+i))L*p=yV;i((yn<<w)+31>>5,j(4,*p++&=m))y)
S A modzz(Ax,Ay,If)_(fir(N(modzZ(x,enl(y),f))))
S A modzf(Ax,Ay,If)_(Ln=gl_(x);P(!n,y)P(n<0,en1(y))K2("{y-x*(-x)!_y}",x,y))

S A mmmzz(Ax,Ay,If)_(Lv=gl_(x),w=gl(y);az(f==7?MAX(v,w):MIN(v,w)))
S A mmmzZ(Ax,Ay,If)_(Lv=gl_(x);Ct=tZ(v),u=tG+yw;I(u<t||u-yt,y=cT[t](y))E(t=u)Nn=yn;Az=yr==1?y:an(n,t);C w=t-tG;n+=31>>w;Lm=-(f==7);v^=m;
 S4(w,i(n&~31,zg=m^MIN(v,m^yg)),i(n&~15,zh=m^MIN(v,m^yh)),i(n&~7,zi=m^MIN(v,m^yi)),i(n&~3,zl=m^MIN(v,m^yl)))y-z?y(z):z)
S A mmmZz(Ax,Ay,If)_(y(mmmzZ(y,xR,f)))
S A mmmZZ(Ax,Ay,If)_(P(xn-yn,el1(y))C w=xw;P(w<yw,x=cT[tG+yw](xR);x(mmmZZ(x,y,f)))y=cT[tG+w](y);Nn=yn;Az=yr==1?y:an(n,tG+w);n+=31>>w;Lm=-(f==7);
 S4(w,i(n&~31,zg=m^MIN(m^xg,m^yg)),i(n&~15,zh=m^MIN(m^xh,m^yh)),i(n&~7,zi=m^MIN(m^xi,m^yi)),i(n&~3,zl=m^MIN(m^xl,m^yl)))y-z?y(z):z)

TD G G4[4],G8[8],G16[16],G32[32];TD H H16[16];TD I I8[8];TD L L4[4];
S V ltng(Lv,O V*RES a,V*RES b,Nn){G w=v;O G32*p=a;G32*r=b;i(n+31>>5,j(32,r[i][j]=w< p[i][j]))}
S V ltnh(Lv,O V*RES a,V*RES b,Nn){H w=v;O H16*p=a;G16*r=b;i(n+15>>4,j(16,r[i][j]=w< p[i][j]))}
S V ltni(Lv,O V*RES a,V*RES b,Nn){I w=v;O I8 *p=a;G8 *r=b;i(n+ 7>>3,j( 8,r[i][j]=w< p[i][j]))}
S V ltnl(Lv,O V*RES a,V*RES b,Nn){L w=v;O L4 *p=a;G4 *r=b;i(n+ 3>>2,j( 4,r[i][j]=w< p[i][j]))}
S V gtng(Lv,O V*RES a,V*RES b,Nn){G w=v;O G32*p=a;G32*r=b;i(n+31>>5,j(32,r[i][j]=w> p[i][j]))}
S V gtnh(Lv,O V*RES a,V*RES b,Nn){H w=v;O H16*p=a;G16*r=b;i(n+15>>4,j(16,r[i][j]=w> p[i][j]))}
S V gtni(Lv,O V*RES a,V*RES b,Nn){I w=v;O I8 *p=a;G8 *r=b;i(n+ 7>>3,j( 8,r[i][j]=w> p[i][j]))}
S V gtnl(Lv,O V*RES a,V*RES b,Nn){L w=v;O L4 *p=a;G4 *r=b;i(n+ 3>>2,j( 4,r[i][j]=w> p[i][j]))}
S V eqlg(Lv,O V*RES a,V*RES b,Nn){G w=v;O G32*p=a;G32*r=b;i(n+31>>5,j(32,r[i][j]=w==p[i][j]))}
S V eqlh(Lv,O V*RES a,V*RES b,Nn){H w=v;O H16*p=a;G16*r=b;i(n+15>>4,j(16,r[i][j]=w==p[i][j]))}
S V eqli(Lv,O V*RES a,V*RES b,Nn){I w=v;O I8 *p=a;G8 *r=b;i(n+ 7>>3,j( 8,r[i][j]=w==p[i][j]))}
S V eqll(Lv,O V*RES a,V*RES b,Nn){L w=v;O L4 *p=a;G4 *r=b;i(n+ 3>>2,j( 4,r[i][j]=w==p[i][j]))}
S V ltnG(O V*RES a,O V*RES b,V*RES c,Nn){O G32*p=a,*q=b;G32*r=c;i(n+31>>5,j(32,r[i][j]=p[i][j]< q[i][j]))}
S V ltnH(O V*RES a,O V*RES b,V*RES c,Nn){O H16*p=a,*q=b;G16*r=c;i(n+15>>4,j(16,r[i][j]=p[i][j]< q[i][j]))}
S V ltnI(O V*RES a,O V*RES b,V*RES c,Nn){O I8 *p=a,*q=b;G8 *r=c;i(n+ 7>>3,j( 8,r[i][j]=p[i][j]< q[i][j]))}
S V ltnL(O V*RES a,O V*RES b,V*RES c,Nn){O L4 *p=a,*q=b;G4 *r=c;i(n+ 3>>2,j( 4,r[i][j]=p[i][j]< q[i][j]))}
S V eqlG(O V*RES a,O V*RES b,V*RES c,Nn){O G32*p=a,*q=b;G32*r=c;i(n+31>>5,j(32,r[i][j]=p[i][j]==q[i][j]))}
S V eqlH(O V*RES a,O V*RES b,V*RES c,Nn){O H16*p=a,*q=b;G16*r=c;i(n+15>>4,j(16,r[i][j]=p[i][j]==q[i][j]))}
S V eqlI(O V*RES a,O V*RES b,V*RES c,Nn){O I8 *p=a,*q=b;G8 *r=c;i(n+ 7>>3,j( 8,r[i][j]=p[i][j]==q[i][j]))}
S V eqlL(O V*RES a,O V*RES b,V*RES c,Nn){O L4 *p=a,*q=b;G4 *r=c;i(n+ 3>>2,j( 4,r[i][j]=p[i][j]==q[i][j]))}
S A cmpz_(Lv,Ax,If)_(I w=xw;P(tG+w<tZ(v),rsz(x(xn),ai(f==8?v<0:f==9?v>0:0)))Nn=xn;Ay=aG(n);Mx(A(&ltng,ltnh,ltni,ltnl,gtng,gtnh,gtni,gtnl,eqlg,eqlh,eqli,eqll)[f-8<<2|w](v,xV,yG,n));y)
S A cmpZZ(Ax,Ay,If)_(P(xn-yn,el1(y))I w=xw;P(w<yw,x=cT[tG+yw](xR);x(cmpZZ(x,y,f)))I(yw<w,y=cT[tG+w](y))Nn=xn;Az=aG(n);
 My(SW(f,C(8,A(&ltnG,ltnH,ltnI,ltnL)[w](xV,yV,zV,n))C(9,A(&ltnG,ltnH,ltnI,ltnL)[w](yV,xV,zV,n))C(10,A(&eqlG,eqlH,eqlI,eqlL)[w](xV,yV,zV,n))))z)
S A cmpzz(Ax,Ay,If)_(Lv=gl_(x),w=gl(y);ai(f==8?v<w:f==9?v>w:v==w))
S A cmpzZ(Ax,Ay,If)_(cmpz_(gl_(x),y,f))
S A cmpZz(Ax,Ay,If)_(cmpz_(gl(y),xR,f==8?9:f==9?8:f))

S A admf(Ax,Ay,If){SW(xtT|ytT<<1,R(0,admff(x,y,f))R(1,admFf(x,y,f))R(2,admfF(x,y,f))R_(admFF(x,y,f)))}
S A admz(Ax,Ay,If){SW(xtT|ytT<<1,R(0,admzz(x,y,f))R(1,admZz(x,y,f))R(2,admzZ(x,y,f))R_(admZZ(x,y,f)))}
S A dvdf(Ax,Ay,If){SW(xtT|ytT<<1,R(0,dvdff(x,y,f))R(1,dvdFf(x,y,f))R(2,dvdfF(x,y,f))R_(dvdFF(x,y,f)))}
S A modz(Ax,Ay,If){SW(xtT|ytT<<1,R(0,modzz(x,y,f))                 R(2,modzZ(x,y,f))      R_(en1(y)))}
S A mmmz(Ax,Ay,If){SW(xtT|ytT<<1,R(0,mmmzz(x,y,f))R(1,mmmZz(x,y,f))R(2,mmmzZ(x,y,f))R_(mmmZZ(x,y,f)))}
S A cmpz(Ax,Ay,If){SW(xtT|ytT<<1,R(0,cmpzz(x,y,f))R(1,cmpZz(x,y,f))R(2,cmpzZ(x,y,f))R_(cmpZZ(x,y,f)))}

S A dvdz(Ax,Ay,If)_(x=Ny(cF(xR));x(dvdf(x,cF(y),f)))
S A mmmf(Ax,Ay,If)_(x=of1(xR);x(of0(Nx(mmmz(x,of1(y),f)))))
S A cmpf(Ax,Ay,If)_(x=of1(xR);y=of1(y);x(cmpz(x,y,f)))

S C f;//0=dex,1=add,2=sub,3=mul,4=dvd,5=mod,6=mnm,7=mxm,8=ltn,9=gtn,10=eql
A2(ari,Ct=xt,u=yt;Lv=1<<t|1<<u;
 P(!(v&~(1<<tG|1<<tH|1<<tI|1<<tL|1<<tC|1<<ti|1<<tl|1<<tc)),A(&admz,0,admz,dvdz,modz,mmmz,mmmz,cmpz,cmpz,cmpz)[f-1](x,y,f))
 P(v&(1<<tm|1<<tM|1<<tA),e2f(f==1?add:ari,x,y))
 P(t==tE,x=gZ(xR);x(ari(x,y)))
 P(u==tE,ari(x,gZ(y)))
 P(v&(1<<tf|1<<tF),
  P(f==5,modzf(x,y,f))
  P(t-tf&&t-tF,x=Ny(cF(xR));x(ari(x,y)))P(u-tf&&u-tF,ari(x,N(cF(y))))
  A(&admf,0,admf,dvdf,0,mmmf,mmmf,cmpf,cmpf,cmpz)[f-1](x,y,f))
 I(f-8<3u,
  P(v&1<<tS,P(f==10&!(v&~(1<<ts|1<<tS)),cmpz(x,y,f))e2f(ari,x,y))
  P(v&1<<ts,v^1<<ts?et1(y):ai(f==8?qA(x,y)<0:f==9?qA(x,y)>0:xv==yv)))
 en1(y))

#define h(fnc,i) A2(fnc,I o=f;f=i;x=ari(x,y);f=o;x)
h(add,1)h(mul,3)h(dvd,4)h(mod,5)h(mnm,6)h(mxm,7)h(ltn,8)h(gtn,9)h(eql,10)
A2(dex,y)A2(sub,add(x,N(neg(y))))X2(bng,RMT(ytm||rnk(x)<0?ed1(y):ytt?bng(x,rsz(xN,y)):xN-yN?el1(y):am(xR,y))Rs(x=rsz(yN,x);x(bng(x,y)))Rzc(mod(x,y))R_(et1(y)))
