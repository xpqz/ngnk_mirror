#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
//prng: xoshiro256+ (public domain) http://vigna.di.unimi.it/xorshift/ seeded with the central column of rule30, little-endian:
// ","/"abcd",'"=0x",/:+"0123456789abcdef"@(16#16)\2/|+4 64#(n{(|(8#2)\30)@2/'3'0,x,0}\n=!2*n)@'n:256
S UL a[]={0xd5a986ae75c9a33b,0x1016d8e3483a8f0f,0x81f9e6260eb8e5df,0xfa9b718d8d0769bf};
UL rnd1()_(Lv=a[1]<<17;a[2]^=a[0];a[3]^=a[1];a[1]^=a[2];a[0]^=a[3];a[2]^=v;a[3]=rot(a[3],45);a[0]+a[3])
A1(prng,P(x==au,aV(tL,4,a))XZ(x=cL(rsz(4,x));Mc(a,xV,SZ a);x(au))Xz(UL v=gl(x);I(!v,v=now())i(LEN(a),a[i]=v=v*6364136223846793005+1442695040888963407)au)et1(x))//knuth mmix
S UI rm(UL m)_((UI)rnd1()*m>>32)
S V shf(L*r,Nn){i(n,Ij=rm(i+1);SWP(r[i],r[j]))}
S A ro(UL n,UL m)_(Ct=m?tZ(m-1):tL;Ax=an(t,n);P(t==tB,i(n,xb=rm(m))x)P(t==tH,i(n,xh=rm(m))x)P(t==tI,i(n,xi=rm(m))x)i(n,xl=rnd1())I(m,i(n,xl=(UL)xl%m))x)
S A de(UL n,UL m)_(P(n>m,el0())Ax=ro(n,0);i(n,UL k=m-n+i;xl%=k+1;j(i,B(xL[j]==xl,xl=k)))shf(xV,n);x)
S A rd(Ln,Lm)_(P(m<0,ed0())n<0?de(n-NL?-n:m,m):ro(n,m))
AL(rndF,Ay=al(1023ll<<52);add(ai(-1),AT(tF,y(add(y,N(rd(n,1ll<<52)))))))
S ALA(rnd,Xz(rd(n,gl(x)))Xc(cC(add(xv-'A'?ac('a'):x,Nx(rd(n,26)))))Xf(x(mul(x,Nx(rndF(n)))))XMT(x(x1(Nx(rd(n,xN)))))et1(x))

L fB(OV*p,Nn,Lv)_(O B*a=p,q=v;P(v-q||!n,NL)Ii=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
L fH(OV*p,Nn,Lv)_(O H*a=p,q=v;P(v-q||!n,NL)Ii=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
L fI(OV*p,Nn,Lv)_(O I*a=p,q=v;P(v-q||!n,NL)Ii=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
L fL(OV*p,Nn,Lv)_(O L*a=p,q=v;P(v-q||!n,NL)Ii=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
V FB(OV*p,Nm,TY(fB)f,OV*q,Nn,L*r){O B*a=q;i(n,r[i]=f(p,m,a[i]))} L fpB(A*p,Bv)_(Ax=*p;Nn=xn;Li=fB(xV,n,v);P(i<0,*p=apv(x,&v);n)i)
V FH(OV*p,Nm,TY(fH)f,OV*q,Nn,L*r){O H*a=q;i(n,r[i]=f(p,m,a[i]))} L fpH(A*p,Hv)_(Ax=*p;Nn=xn;Li=fH(xV,n,v);P(i<0,*p=apv(x,&v);n)i)
V FI(OV*p,Nm,TY(fI)f,OV*q,Nn,L*r){O I*a=q;i(n,r[i]=f(p,m,a[i]))} L fpI(A*p,Iv)_(Ax=*p;Nn=xn;Li=fI(xV,n,v);P(i<0,*p=apv(x,&v);n)i)
V FL(OV*p,Nm,TY(fL)f,OV*q,Nn,L*r){O L*a=q;i(n,r[i]=f(p,m,a[i]))} L fpL(A*p,Lv)_(Ax=*p;Nn=xn;Li=fL(xV,n,v);P(i<0,*p=apv(x,&v);n)i)
S L fA(Ax,Ay/*00*/)_(XA(i(xn,P(mtc_(xa,y),i))NL)i(xN,Az=ii(x,i);P(mtc_(z,y),z(0);i)z(0))NL)
L fAI(Ax/*0*/,Iv)_(fI(xV,xn,v))
I rnk(Ax/*0*/)_(XA(P(!xn,2)Iv=rnk(xx);P(v<0,v)i(xn,P(v-rnk(xa),-1))v+1)XmM(rnk(xy))xtT)//-1 for mixed rank
I urnk(Ax/*0*/)_(XA(xn?urnk(xx)+1:2)XmM(urnk(xy))xtT)//assuming unirank
S A2(sdf,/*01*/K2("{a:&/x;b:1+|/x;@[(b-a)#0N;|x-a;:;|!#x]y-a}",x,y))//small-domain find
A2(fnd,/*01*/
 P(xtT&&!xtA&&!ytmMA,
  P(xtZ&&ytzZ||xt==TT[yt],
   P(xw<2&&xn>99&&yN>99,sdf(x,y))
   V(f,T(&fB,fH,fI,fL)[xw])Yt(az(f(xV,xn,gl(y))))
   Az=aL(yn);Ii=yw;ye(T(&FB,FH,FI,FL)[i](xV,xn,f,yV,yn,zV);z))
  Az=cn[tl];zR;y(ytt?z:rsz(yN,z)))
 Xm(i1(xx,fnd(xy,y)))
 Ik=urnk(x),l=urnk(y);P(k==l+1,y(az(fA(x,y))))P(k<=l,r2(QUE,x,y))er1(y))

A2(que,/*01*/Xs(S O C s[][4]={"","j","hex"};Li=fI(s,LEN(s),xv);T(&des,js0,unh,ed1)[i<0?LEN(s):i](y))Xz(rnd(gl_(x),y))Xt(et1(y))fnd(x,y))
