#include<math.h> // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include"a.h"
//prng: xoshiro256+ (public domain) http://vigna.di.unimi.it/xorshift/ seeded with the central column of rule30, little-endian:
// ","/"abcd",'"=0x",/:+"0123456789abcdef"@(16#16)\2/|+4 64#(n{(|(8#2)\30)@2/'3'0,x,0}\n=!2*n)@'n:256
S UL a[]={0xd5a986ae75c9a33b,0x1016d8e3483a8f0f,0x81f9e6260eb8e5df,0xfa9b718d8d0769bf};//prng state
A1(prng,P(x==au,aV(tL,4,a))XZ(x=cL(rsz(4,x));MC(a,xV,SZ a);x(au))Xz(UL v=gl(x);I(!v,v=now())i(L(a),a[i]=v=v*6364136223846793005+1442695040888963407)au)et1(x))//knuth mmix
S UL r()_(Lv=a[1]<<17;a[2]^=a[0];a[3]^=a[1];a[1]^=a[2];a[0]^=a[3];a[2]^=v;a[3]=ROT(a[3],45);a[0]+a[3])//random 64 bits
S UI rm(UL m)_((UI)r()*m>>32)//random int mod m
S F rf()_(Lv=1023ll<<52|r()>>12;-1+*(F*)&v)//random float 0..1

S A sh(Nn)_(Ax=an(n,tZ(n));S4(xw,i(n,Ij=rm(i+1);xb=xB[j];xB[j]=i),i(n,Ij=rm(i+1);xh=xH[j];xH[j]=i),i(n,Ij=rm(i+1);xi=xI[j];xI[j]=i),ez1(x))x)//shuffle
S A ro(Nn,UL m)_(Ct=m?tZ(m-1):tL;Ax=an(n,t);S4(t-tB,i(n,xb=rm(m)),i(n,xh=rm(m)),i(n,xi=rm(m)),i(n,xl=r())I(m,i(n,xl%=m)))x)//roll
S A de0(Nn,UL m)_(Ax=aL(n);i(n,xl=r()%(m-n+i+1);j(i,B(xl==xL[j],xl=m-n+i)))i(n,Ij=rm(i+1);SWP(xl,xL[j]))cT[tZ(m)](x))
S A de1(Nn,UL m)_(Ax=aL(n),y=aL(m+63>>6);MS(yV,0,8*yn);i(n,UL v=r()%(m-n+i+1);I(yL[v/64]>>v%64&1,xl=m-n+i)E(xl=v;yL[v/64]|=1ll<<v%64))y(0);i(n,Ij=rm(i+1);SWP(xl,xL[j]))cT[tZ(m)](x))
S A de2(Nn,UL m)_(Ax=aL(n);L*a=xL,j=-1,q=m-n+1;Fv=exp(log(rf())/n);
 W(n>1&&13*n<m,L s;
  W(1,F X;
   W(1,s=X=m*(1-v);B(s<q)v=exp(log(rf())/n))
   F y1=exp(log(rf()*m/q)/(n-1));v=y1*(1-X/m)*((F)q/(q-s));B(v<=1)
   F y2=1,b=m-MAX(n,s+1),l=n>s+1?m-s:q;L t=m-1;W(t>=l,y2*=t--/b--)
   B(m/(m-X)>=y1*exp(log(y2)/(n-1)),v=exp(log(rf())/(n-1)))
   v=exp(log(rf())/n))
  *a++=j+=s+1;m-=s+1;n--;q-=s)
 F t=m-n;W(n>1,L s=0;Fv=rf(),q=t/m;W(q>v,s++;q*=--t/--m)*a++=j+=s+1;m--;n--)*a=j+m*rf()+1;i(xn,Ij=rm(i+1);SWP(xl,xL[j]))x)
S A de(Nn,UL m)_(n>m?el0():n<m?de2(n,m):sh(n))//deal
S A rd(Ln,Lm)_(m<0?ed0():n==NL?sh(m):n-(I)n?ez0():n<0?de(-n,m):ro(n,m))//roll or deal
AL(rndF,Ax=aF(n);i(n,xf=rf())x)//random floats 0..1
ALA(rnd,Xz(rd(n,gl(x)))Xc(cC(add(xv-'A'?ac('a'):x,Nx(rd(n,26)))))Xf(x(mul(x,Nx(rndF(n)))))XMT(x(x1(Nx(rd(n,xN)))))et1(x))
