#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define AL(x) __builtin_assume_aligned(x,32)
#define h(o,f,T) SN V f(O V*RES a,O V*RES b,V*RES c,U n){O T*x=AL(a),*y=AL(b);T*r=AL(c);i(n,j(32/SZ(T),*r++=*x++o*y++))}
 h(+,aFF,F)h(*,mFF,F)h(/,dFF,F)h(+,aLL,L)h(+,aII,I)h(+,aHH,H)h(+,aGG,G)
#undef h
SN A amdFF(A x,A y,U f)_(U n=xn;P(n-yn,el(y))A z=yr-1?aF(n):y;G(&aFF,0,mFF,dFF)[f-1](xV,yV,zV,n+3>>2);y-z?y(z):z)
SN B oZZ(O W*x,O W*y,O W*r,U n,U w)_(x=AL(x);y=AL(y);r=AL(r);
 W t[4]={};i(((W)n<<w)+31>>5,j(4,t[j]|=(*r^*x)&(*r^*y);r++;x++;y++))
 !!((t[0]|t[1]|t[2]|t[3])&G(0x8080808080808080ll,0x8000800080008000ll,0x8000000080000000ll)[w]))
S A addZZ(A x,A y,U f)_(U w=MAX(xw,yw);P(xw-w,x=cT(tG+w,xR);x(addZZ(x,y,f)))y=cT(tG+w,y);U n=yn;A z=an(n,yt);
 G(&aGG,aHH,aII,aLL)[w](xV,yV,zV,n+(31>>w)>>5-w);
 P(w<3&&oZZ(xV,yV,zV,n,w),z(0);y=cT(tG+w+1,y);x=cT(tG+w+1,xR);x(addZZ(x,y,f)))y(z))
S A mulZZ(A x,A y,U f)_(U n=yn,i=0,w=MAX(xw,yw);P(xw-w,x=cT(tG+w,xR);x(mulZZ(x,y,f)))y=cT(tG+w,y);A z=an(n,yt);
 S4(w,W(i<n,I v=(I)xg*yg;B(v-(G)v)zg=v;i++),
      W(i<n,I v=(I)xh*yh;B(v-(H)v)zh=v;i++),
      W(i<n,L v=(L)xi*yi;B(v-(I)v)zi=v;i++),
      W(i<n,zl=xl*yl;i++))
 P(i<n,z(0);x=cT(tG+w+1,xR);x(mulZZ(x,cT(tG+w+1,y),f)))y(z))

#define h(f,T) SN V f(L v,V*RES b,V*RES c,U n){O T*y=AL(b);T*r=AL(c);i(n,j(32/SZ(T),*r++=v+*y++))}
 h(alL,L)h(aiI,I)h(ahH,H)h(agG,G)
#undef h
SN B ozZ(L v,O W*y,O W*r,U n,U w)_(r=AL(r);y=AL(y);i(3-w,v|=v<<(8<<w+i))
 W t[4]={};i(((W)n<<w)+31>>5,j(4,t[j]|=(*r^v)&(*r^*y);r++;y++))
 !!((t[0]|t[1]|t[2]|t[3])&G(0x8080808080808080ll,0x8000800080008000ll,0x8000000080000000ll)[w]))
S A addzZ(L v,A y,U f)_(U n=yn,w=MAX(tZ(v)-tG,yw);y=cT(tG+w,y);A z=an(n,yt);G(&agG,ahH,aiI,alL)[w](v,yV,zV,n+(31>>w)>>5-w);
 P(w<3&&ozZ(v,yV,zV,n,w),z(0);y=cT(tG+w+1,y);addzZ(v,y,f))y(z))

S A mulzZ(L a,A y,U f)_(U n=yn,i=0,w=MAX(tZ(a)-tG,yw);y=cT(tG+w,y);A z=an(n,yt);
 S4(w,{W(i<n,I v=a*yg;B(v-(G)v)zg=v;i++)},
      {W(i<n,I v=a*yh;B(v-(H)v)zh=v;i++)},
      {W(i<n,L v=a*yi;B(v-(I)v)zi=v;i++)},
      {W(i<n,zl=a*yl;i++)})
 i<n?mulzZ(a,cT(tG+w+1,z(y)),f):y(z))

S A modzZ(L m,A y,U f)_(P(!m,y)
 P(m<0,m=-m;A z=an(yn,yt);S4(yw,i(zn,C v=yg;zg=v<0?-1-~v/m:v/m),i(zn,H v=yh;zh=v<0?-1-~v/m:v/m),i(zn,I v=yi;zi=v<0?-1-~v/m:v/m),i(zn,L v=yl;zl=v<0?-1-~v/m:v/m))y(z))
 P(m&m-1,A z=an(yn,tZ(m));U wy=yw;S4(zw,i(zn,zg=(iw(y,wy,i)%m+m)%m),i(zn,zh=(iw(y,wy,i)%m+m)%m),i(zn,zi=(iw(y,wy,i)%m+m)%m),i(zn,zl=(iw(y,wy,i)%m+m)%m))y(z))
 m--;U t=tZ(m),w=t-tG;y=mut(N(cT(t,y)));i(3-w,m|=m<<(8<<w+i))L*p=yV;i((yn<<w)+31>>5,j(4,*p++&=m))y)
S A modzf(L n,A y,U f)_(P(!n,y)P(n<0,en(y))K2("{y-x*(-x)!_y}",az(n),y))
S A mmmzZ(L v,A y,U f)_(C t=tZ(v),u=tG+yw;I(u<t||u-yt,y=cT(t,y))E(t=u)U n=yn;A z=yr-1?an(n,t):y;C w=t-tG;n+=31>>w;L m=-(f==7);v^=m;
 S4(w,i(n&~31,zg=m^MIN(v,m^yg)),i(n&~15,zh=m^MIN(v,m^yh)),i(n&~7,zi=m^MIN(v,m^yi)),i(n&~3,zl=m^MIN(v,m^yl)))y-z?y(z):z)
S A mmmZZ(A x,A y,U f)_(C w=xw;P(w<yw,x=cT(tG+yw,xR);x(mmmZZ(x,y,f)))y=cT(tG+w,y);U n=yn;A z=yr-1?an(n,tG+w):y;n+=31>>w;L m=-(f==7);
 S4(w,i(n&~31,zg=m^MIN(m^xg,m^yg)),i(n&~15,zh=m^MIN(m^xh,m^yh)),i(n&~7,zi=m^MIN(m^xi,m^yi)),i(n&~3,zl=m^MIN(m^xl,m^yl)))y-z?y(z):z)

TD G G4[4],G8[8],G16[16],G32[32];TD H H16[16];TD I I8[8];TD L L4[4];
SN V ltng(L v,O V*RES a,V*RES b,U n){G w=v;O G32*p=a;G32*r=b;i(n+31>>5,j(32,r[i][j]=w< p[i][j]))}
SN V ltnh(L v,O V*RES a,V*RES b,U n){H w=v;O H16*p=a;G16*r=b;i(n+15>>4,j(16,r[i][j]=w< p[i][j]))}
SN V ltni(L v,O V*RES a,V*RES b,U n){I w=v;O I8 *p=a;G8 *r=b;i(n+ 7>>3,j( 8,r[i][j]=w< p[i][j]))}
SN V ltnl(L v,O V*RES a,V*RES b,U n){L w=v;O L4 *p=a;G4 *r=b;i(n+ 3>>2,j( 4,r[i][j]=w< p[i][j]))}
SN V gtng(L v,O V*RES a,V*RES b,U n){G w=v;O G32*p=a;G32*r=b;i(n+31>>5,j(32,r[i][j]=w> p[i][j]))}
SN V gtnh(L v,O V*RES a,V*RES b,U n){H w=v;O H16*p=a;G16*r=b;i(n+15>>4,j(16,r[i][j]=w> p[i][j]))}
SN V gtni(L v,O V*RES a,V*RES b,U n){I w=v;O I8 *p=a;G8 *r=b;i(n+ 7>>3,j( 8,r[i][j]=w> p[i][j]))}
SN V gtnl(L v,O V*RES a,V*RES b,U n){L w=v;O L4 *p=a;G4 *r=b;i(n+ 3>>2,j( 4,r[i][j]=w> p[i][j]))}
SN V eqlg(L v,O V*RES a,V*RES b,U n){G w=v;O G32*p=a;G32*r=b;i(n+31>>5,j(32,r[i][j]=w==p[i][j]))}
SN V eqlh(L v,O V*RES a,V*RES b,U n){H w=v;O H16*p=a;G16*r=b;i(n+15>>4,j(16,r[i][j]=w==p[i][j]))}
SN V eqli(L v,O V*RES a,V*RES b,U n){I w=v;O I8 *p=a;G8 *r=b;i(n+ 7>>3,j( 8,r[i][j]=w==p[i][j]))}
SN V eqll(L v,O V*RES a,V*RES b,U n){L w=v;O L4 *p=a;G4 *r=b;i(n+ 3>>2,j( 4,r[i][j]=w==p[i][j]))}
SN V ltnG(O V*RES a,O V*RES b,V*RES c,U n){O G32*p=a,*q=b;G32*r=c;i(n+31>>5,j(32,r[i][j]=p[i][j]< q[i][j]))}
SN V ltnH(O V*RES a,O V*RES b,V*RES c,U n){O H16*p=a,*q=b;G16*r=c;i(n+15>>4,j(16,r[i][j]=p[i][j]< q[i][j]))}
SN V ltnI(O V*RES a,O V*RES b,V*RES c,U n){O I8 *p=a,*q=b;G8 *r=c;i(n+ 7>>3,j( 8,r[i][j]=p[i][j]< q[i][j]))}
SN V ltnL(O V*RES a,O V*RES b,V*RES c,U n){O L4 *p=a,*q=b;G4 *r=c;i(n+ 3>>2,j( 4,r[i][j]=p[i][j]< q[i][j]))}
SN V eqlG(O V*RES a,O V*RES b,V*RES c,U n){O G32*p=a,*q=b;G32*r=c;i(n+31>>5,j(32,r[i][j]=p[i][j]==q[i][j]))}
SN V eqlH(O V*RES a,O V*RES b,V*RES c,U n){O H16*p=a,*q=b;G16*r=c;i(n+15>>4,j(16,r[i][j]=p[i][j]==q[i][j]))}
SN V eqlI(O V*RES a,O V*RES b,V*RES c,U n){O I8 *p=a,*q=b;G8 *r=c;i(n+ 7>>3,j( 8,r[i][j]=p[i][j]==q[i][j]))}
SN V eqlL(O V*RES a,O V*RES b,V*RES c,U n){O L4 *p=a,*q=b;G4 *r=c;i(n+ 3>>2,j( 4,r[i][j]=p[i][j]==q[i][j]))}
S A cmpZZ(A x,A y,U f)_(U w=xw;P(w<yw,x=cT(tG+yw,xR);x(cmpZZ(x,y,f)))I(yw<w,y=cT(tG+w,y))V*a=xV,*b=yV;I(f==9,SWP(a,b))
 U n=xn;A z=aG(n);My(A(&ltnG,ltnH,ltnI,ltnL,eqlG,eqlH,eqlI,eqlL)[(f==10)<<2|w](a,b,zV,n))z)
S A cmpzZ(L v,A y,U f)_(U w=yw;P(tG+w<tZ(v),y(rsz(yn,ai(f==8?v<0:f==9?v>0:0))))
 U n=yn;A z=aG(n);My(A(&ltng,ltnh,ltni,ltnl,gtng,gtnh,gtni,gtnl,eqlg,eqlh,eqli,eqll)[f-8<<2|w](v,yV,zG,n))z)

S A addzE(L v,A x)_(Lij x(0);aE(i+v,j+v))
S A addfF(F v,A y,U f)_(A z=yr-1?aF(yn):y;U n=zn+3&-4;i(n,zf=v+yf)y-z?y(z):z)
S A mulfF(F v,A y,U f)_(A z=yr-1?aF(yn):y;U n=zn+3&-4;i(n,zf=v*yf)y-z?y(z):z)
S A admfF(F v,A y,U f)_((f==3?mulfF:addfF)(v,y,f))
S A dvdfF(F v,A y,U f)_(A z=yr-1?aF(yn):y;U n=zn+3&-4;i(n,zf=v/yf)y-z?y(z):z)
S A dvdFf(A x,F v,U f)_(A z=aF(xn);i(xn,zf=xf/v)z)
S A dvdzZ(L v,A y,U f)_(dvdfF(v,cF(y),f))
S A dvdZZ(A x,A y,U f)_(x=cF(xR);x(amdFF(x,cF(y),f)))
S A arizz(L a,L b,U f)_(P(f==4,af((F)a/b))az(f==1?a+b:f==3?a*b:f==5?(!a?b:a<0?(b<0?-1-~b/-a:b/-a):(b%a+a)%a):f==6?MIN(a,b):f==7?MAX(a,b):f==8?a<b:f==9?a>b:f==10?a==b:0))
S A arizZ(L v,A y,U f)_(A(&addzZ,0,mulzZ,dvdzZ,modzZ,mmmzZ,mmmzZ,cmpzZ,cmpzZ,cmpzZ)[f-1](v,y,f))
S A ariZZ(A x,A y,U f)_(P(xn-yn,el(y))A(&addZZ,0,mulZZ,dvdZZ,0,mmmZZ,mmmZZ,cmpZZ,cmpZZ,cmpZZ)[f-1](x,y,f))
SN A ariz(A x,A y,U f){SW(xtT<<1|ytT,R(0,arizz(gl_(x),gl(y),f))R(1,arizZ(gl_(x),y,f))R(2,P(f==4,ari(x,cF(y)))arizZ(gl(y),xR,f-8<2u?f^8^9:f))R_(ariZZ(x,y,f)))}
SN A arif(A x,A y,U f)_(C t=xt,u=yt;
 P(f==5,xtz?modzf(gl(x),y,f):et(y))
 P(t-tf&&t-tF,x=Ny(cF(xR));x(ari(x,y)))
 P(u-tf&&u-tF,ari(x,N(cF(y))))
 P(f<5,U k=(t<tM)<<1|(u<tM);SW(k,
  R(0,F a=*xF,b=gf(y);af(f==1?a+b:f==3?a*b:a/b))
  R(1,f<4?admfF(*xF,y,f):dvdfF(*xF,y,f))
  R(2,f<4?admfF(gf(y),xR,f):dvdFf(x,gf(y),f))
  R_(amdFF(x,y,f)))0)
 P(f==10,ariz(x,y,f))
 x=of1(xR);y=ari(x,of1(y));x(f<8&&y?of0(y):y))

S U f;//0=dex,1=add,2=sub,3=mul,4=dvd,5=mod,6=mnm,7=mxm,8=ltn,9=gtn,10=eql
A2(ari,C t=xt,u=yt;U v=1<<t|1<<u;
 P(!(v&~(1<<tG|1<<tH|1<<tI|1<<tL|1<<tC|1<<ti|1<<tl|1<<tc)),ariz(x,y,f))
 P(v&(1<<tm|1<<tM|1<<tA),e2(av+f,x,y))
 P(t==tB,x=cG(xR);x(ari(x,y)))
 P(u==tB,ari(x,cG(y)))
 P(t==tE,P(f==1&&ytzc,addzE(gl(y),xR))x=gZ(xR);x(ari(x,y)))
 P(u==tE,P(f==1&&xtzc,addzE(gl_(x),y))ari(x,gZ(y)))
 P(v&(1<<tf|1<<tF),arif(x,y,f))
 I(f-8<3u,
  P(v&1<<tS,P(f==10&&!(v&~(1<<ts|1<<tS)),ariz(x,y,f))e2f(ari,x,y))
  P(v&1<<ts,v^1<<ts?et(y):ai(f==8?qA(x,y)<0:f==9?qA(x,y)>0:xv==yv)))
 et(y))

#define h(s,i) A2(s,U o=f;f=i;x=ari(x,y);f=o;x)
h(add,1)h(mul,3)h(dvd,4)h(mod,5)h(mnm,6)h(mxm,7)h(ltn,8)h(gtn,9)h(eql,10)
A2(dex,y)A2(sub,add(x,N(neg(y))))X2(exc,RMT(ytm||rnk(x)<0?ed(y):ytt?exc(x,rsz(xN,y)):xN-yN?el(y):am(xR,y))Rs(x=rsz(yN,x);x(exc(x,y)))Rilc(mod(x,y))R_(et(y)))
