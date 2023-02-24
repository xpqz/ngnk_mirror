#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
//prng: xoshiro256+ (public domain) http://vigna.di.unimi.it/xorshift/ seeded with the central column of rule30, little-endian:
// ","/"abcd",'"=0x",/:+"0123456789abcdef"@(16#16)\2/|+4 64#(n{(|(8#2)\30)@2/'3'0,x,0}\n=!2*n)@'n:256
S UL a[]={0xd5a986ae75c9a33b,0x1016d8e3483a8f0f,0x81f9e6260eb8e5df,0xfa9b718d8d0769bf};//prng state
UL r()_(Lv=a[1]<<17;a[2]^=a[0];a[3]^=a[1];a[1]^=a[2];a[0]^=a[3];a[2]^=v;a[3]=ROT(a[3],45);a[0]+a[3])//next 64 bits of randomness
A1(prng,P(x==au,aV(tL,4,a))XZ(x=cL(rsz(4,x));MC(a,xV,SZ a);x(au))Xz(UL v=gl(x);I(!v,v=now())i(L(a),a[i]=v=v*6364136223846793005+1442695040888963407)au)et1(x))//knuth mmix
S UI rm(UL m)_((UI)r()*m>>32)//random mod m
S A ro(UL n,UL m)_(Ct=m?tZ(m-1):tL;Ax=an(n,t);P(t==tB,i(n,xb=rm(m))x)P(t==tH,i(n,xh=rm(m))x)P(t==tI,i(n,xi=rm(m))x)i(n,xl=r())I(m,i(n,xl=(UL)xl%m))x)//roll
S A de(UL n,UL m)_(P(n>m,el0())P(n<m,Ax=ro(n,0);i(n,UL k=m-n+i;xl%=k+1;j(i,B(xL[j]==xl,xl=k)))i(n,Ij=rm(i+1);SWP(xl,xL[j]))sqzZ(x))//deal
 Ax=an(n,tZ(n));S4(xw,i(n,B j=rm(i+1);xb=xB[j];xB[j]=i),i(n,H j=rm(i+1);xh=xH[j];xH[j]=i),i(n,I j=rm(i+1);xi=xI[j];xI[j]=i),ez0())x)
S A rd(Ln,Lm)_(P(m<0,ed0())n<0?de(n-NL?-n:m,m):ro(n,m))//roll or deal
AL(rndF,Ay=al(1023ll<<52);add(ai(-1),AT(tF,y(add(y,N(rd(n,1ll<<52)))))))//random floats 0..1
S ALA(rnd,Xz(rd(n,gl(x)))Xc(cC(add(xv-'A'?ac('a'):x,Nx(rd(n,26)))))Xf(x(mul(x,Nx(rndF(n)))))XMT(x(x1(Nx(rd(n,xN)))))et1(x))

S L fB(OV*p,Nn,Lv)_(O B*a=p,q=v;P(v-q,NL)Ii=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
S L fH(OV*p,Nn,Lv)_(O H*a=p,q=v;P(v-q,NL)Ii=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
  L fI(OV*p,Nn,Lv)_(O I*a=p,q=v;P(v-q,NL)Ii=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
  L fL(OV*p,Nn,Lv)_(O L*a=p,q=v;P(v-q,NL)Ii=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
I rnk(Ax/*0*/)_(XA(Iv=rnk(xx);P(v<0,v)i(xn,P(v-rnk(xa),-1))v+1)XmM(rnk(xy))xtT)//-1 for mixed rank
I urnk(Ax/*0*/)_(XA(urnk(xx)+1)XmM(urnk(xy))xtT)//assuming unirank
S A2(fndB,Q(!xw)Q(ytT)L a[256];i(256,a[i]=NL)Li=xn-1;W(i>=0,a[(UC)xc]=i;i--)Nn=yn;Az=aL(n);
 S4(yw,i(n,zl=a[(UC)yc]),i(n,Hv=yh;zl=v==(C)v?a[(UC)v]:NL),i(n,Iv=yi;zl=v==(C)v?a[(UC)v]:NL),i(n,Lv=yl;zl=v==(C)v?a[(UC)v]:NL))y(z))
S A2(fndH,K2("{a:&/x;b:1+|/x;@[(b-a)#0N;|x-a;:;|!#x]y-a}",x,y))
A2(fnd,
 P(xtT&&!xtA&&!ytmMA,
  P(xt==TT[yt]||xtZ&&ytzZ,
   P(!xw&&ytT,fndB(x,y))
   P(xw==1&&xn>128&&yN>128,fndH(x,y))
   TY(fB)*f=A(&fB,fH,fI,fL)[xw];Yt(az(f(xV,xn,gl(y))))
   Nm=xn,n=yn;Az=aL(n);ye(S4(yw,i(n,zl=f(xV,m,yb)),i(n,zl=f(xV,m,yh)),i(n,zl=f(xV,m,yi)),i(n,zl=f(xV,m,yl)))z))
  Az=cn[tl];zR;y(ytt?z:rsz(yN,z)))
 Xm(i1(xx,N(fnd(xy,y))))
 Ik=urnk(x),l=urnk(y);P(k<=l,r2f(fnd,x,y))P(k==l+1,L r=NL;I(xtA,i(xn,B(mtc_(xa,y),r=i)))E(i(xN,Az=ii(x,i);Im=mtc_(z,y);z(0);B(m,r=i)))y(az(r)))er1(y))
A2(que,Xs(S O C s[][4]={"","j","hex"};Li=fI(s,L(s),xv);A(&des,js0,unh,ed1)[i<0?L(s):i](y))Xz(rnd(gl_(x),y))Xt(et1(y))fnd(x,y))
