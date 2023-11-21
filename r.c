#include<math.h> // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include"a.h"
///prng: xoshiro256+ (public domain) http://vigna.di.unimi.it/xorshift/ seeded with the central column of rule30, little-endian:
//s:2/|+4 64#(n{(|(8#2)\30)@2/'3':0,x,0}\n=!2*n)@'n:256
//R:{,/|(0,(#y)!x)_y} /rotate
//X:{2/~=/(64#2)\'(x;y)} /xor
//f:{r:+/s 0 3;t:s[1]*(*/17#2);s[2]:X/s 2 0;s[3]:X/s 3 1;s[1]:X/s 1 2;s[0]:X/s 0 3;s[2]:X[s 2]t;s[3]:2/R[45]@(64#2)\s 3;r} /next
//d:|'(64#2)\'256/'256!(0x76e15d3efefdcbbf;0xc5004e441c522fb3;0x77710069854ee241;0x39109bb02acbe635)
//l:{r:s;t::&4;{$[x;t::t X's;];f[]}''d;s::t;r} /long jump
//`0:{"{",(","/x),"},"}'{"0x",`hex@`c$(8#256)\x}''+l'!4
#define M 4
S W s[][M]={{0xd5a986ae75c9a33b,0x9c57a73dcd5e41b7,0x3fe497b4dd1be68d,0x3f57adc392affdef},{0x1016d8e3483a8f0f,0xcb0c33c0e78feede,0x7b5dda788f9f577d,0xf1e01f806161118a},
 {0x81f9e6260eb8e5df,0x5943e008d9222efa,0x8f514f6e6fb18ba4,0x6dacfe2135f9599e},{0xfa9b718d8d0769bf,0x4d46d3d50833e8c9,0x696678daaa7b4cc6,0x3cb5c708d53cc982}};//prng state
S W b[M];S N nb;//buf
A1(prng,P(x==au,aV(tL,4*M,s))XZ(P(xn-4*M,el1(x))MC(s,xV,SZ s);nb=0;x(au))Xz(W v=gl(x);I(!v,v=now())i(4,j(M,s[i][j]=v=v*6364136223846793005+1442695040888963407/*knuth mmix*/))au)et1(x))
S V h(I x,I y){i(M,s[x][i]^=s[y][i])}
S V r4(){nb=M;W t[M];i(M,b[i]=s[0][i]+s[3][i])i(M,t[i]=s[1][i]<<17)h(2,0);h(3,1);h(1,2);h(0,3);i(M,s[2][i]^=t[i])i(M,s[3][i]=(s[3][i]<<45|s[3][i]>>19))}//next 4*64 bits
S W r()_(I(nb<4,r4())b[--nb])//random 64 bits
S U ri(W m)_((U)r()*m>>32)//random int mod m
S F rf()_(Lv=1023ll<<52|(r()&-1ull>>12);-1+*(F*)&v)//random float 0..1

S A sh(Nn)_(Ax=an(n,tZ(n));S4(xw,i(n,Ij=ri(i+1);xg=xG[j];xG[j]=i),i(n,Ij=ri(i+1);xh=xH[j];xH[j]=i),i(n,Ij=ri(i+1);xi=xI[j];xI[j]=i),ez1(x))x)//shuffle
S A rt(Nn,Ct)_(Ax=an(n,t);i((n<<Tw[t])+31>>5,r4();MC(xV+(i<<5),b,32))x)//roll n full-range (including negative) items of type t (int of a specific width or char)
S A ro(Nn,W m)_(P(!(m&m-1),P(!m,rt(n,tL))Ct=tZ(m-1);Ax=rt(n,t);Lv=(m-1)*G(0x101010101010101ll,0x1000100010001ll,1ll<<32|1,1)[Tw[t]];L*p=xL;i((n<<Tw[t])+31>>5,j(4,*p++&=v))x)
 Ct=tZ(m-1);Ax=an(n,t);S4(t-tG,i(n,xg=ri(m)),i(n,xh=ri(m)),i(n,xi=ri(m)),i(n,xl=r())I(m,i(n,xl%=m)))x)//roll
//S A de0(Nn,W m)_(Ax=aL(n);i(n,xl=r()%(m-n+i+1);j(i,B(xl==xL[j],xl=m-n+i)))i(n,Ij=ri(i+1);SWP(xl,xL[j]))cT[tZ(m)](x))
S A de1(Nn,W m)_(Ax=aL(n),y=aC(m+7>>3);MS(yV,0,yn);My(i(n,W t=r()%(m-n+i+1);I(yC[t>>3]&1<<(t&7),t=m-n+i)yC[t>>3]|=1<<(t&7);xl=t))i(n,Ij=r()%(i+1);SWP(xl,xL[j]))cT[tZ(m)](x))
S A de2(Nn,W m)_(Ax=aL(n);L*a=xL,j=-1,q=m-n+1;Fv=exp(log(rf())/n);
 W(n>1&&13*n<m,L s;
  W(1,F X;
   W(1,s=X=m*(1-v);B(s<q)v=exp(log(rf())/n))
   F y1=exp(log(rf()*m/q)/(n-1));v=y1*(1-X/m)*((F)q/(q-s));B(v<=1)
   F y2=1,b=m-MAX(n,s+1),l=n>s+1?m-s:q;L t=m-1;W(t>=l,y2*=t--/b--)
   B(m/(m-X)>=y1*exp(log(y2)/(n-1)),v=exp(log(rf())/(n-1)))
   v=exp(log(rf())/n))
  *a++=j+=s+1;m-=s+1;n--;q-=s)
 F t=m-n;W(n>1,L s=0;Fv=rf(),q=t/m;W(q>v,s++;q*=--t/--m)*a++=j+=s+1;m--;n--)*a=j+m*rf()+1;i(xn,Ij=ri(i+1);SWP(xl,xL[j]))x)
S A de(Nn,W m)_(n>m?el0():n==m?sh(n):m<10000000?de1(n,m):de2(n,m))//deal
S A rd(Ln,Lm)_(m<0?(n<0?ed0():rt(n,tZ(m))):n==NL?sh(m):n-(I)n?ez0():n<0?de(-n,m):ro(n,m))//roll or deal
AL(rndF,P(n<0,ed0())Ax=aF(n);i(n,xf=rf())x)//random floats 0..1
ALA(rnd,X(Rz(rd(n,gl(x)))Rc(P((32|xv)=='a',cC(add(x,Nx(rd(n,26)))))rt(n,tC))Rf(x(mul(x,Nx(rndF(n)))))RMT(x(x1(Nx(rd(n,xN)))))R_(et1(x)))0)
