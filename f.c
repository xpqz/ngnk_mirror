#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
I rnk(A x/*0*/){X(RA(I v=rnk(xx);P(v<0,v)i(xn,P(v-rnk(xa),-1))v+1)RmM(rnk(xy))RT_A(1)R_(0))}//-1 for mixed rank
S U urnk(A x/*0*/){X(RA(urnk(xx)+1)RmM(urnk(xy))RT_A(1)R_(0))}//assuming unirank

  U fG(CO G*a,U n,G v)_(U i=0;W(i<n&&a[i]!=v,i++)i)
S U fH(CO H*a,U n,H v)_(U i=0;W(i<n&&a[i]!=v,i++)i)
  U fI(CO I*a,U n,I v)_(U i=0;W(i<n&&a[i]!=v,i++)i)
  U fL(CO L*a,U n,L v)_(U i=0;W(i<n&&a[i]!=v,i++)i)

S L fGL(CO V*a,U n,L v)_(P(v!=(G)v,NL)U i=fG(a,n,v);i<n?i:NL)
S L fHL(CO V*a,U n,L v)_(P(v!=(H)v,NL)U i=fH(a,n,v);i<n?i:NL)
S L fIL(CO V*a,U n,L v)_(P(v!=(I)v,NL)U i=fI(a,n,v);i<n?i:NL)
S L fLL(CO V*a,U n,L v)_(             U i=fL(a,n,v);i<n?i:NL)

S A1(fN,A y=_R(cn[tl]);x(xtt?y:rsz(xN,y)))

S L t[256];
S X1(fndGx,
 R_(fN(x))
 RmMA(e1f(fndGx,x))
 Rilc(L v=gl(x);az(v==(C)v?t[(UC)v]:NL))
 RE(fndGx(gZ(x)))
 RB(fndGx(cG(x)))
 RGHILC(U m=xn;A y=aL(m);
  S4(xw-3,i(m,yl=t[(UC)xc]),
   i(m,H v=xh;yl=v==(C)v?t[(UC)v]:NL),
   i(m,I v=xi;yl=v==(C)v?t[(UC)v]:NL),
   i(m,L v=xl;yl=v==(C)v?t[(UC)v]:NL))
  x(0);sqzZ(y)))
X2(fnd,
 R_(et(y))
 Rm(i1(xx,N(fnd(xy,y))))
 RM(en(y))
 RE(x=gZ(xR);x(fnd(x,y)))
 RA(U k=urnk(x),l=urnk(y);P(k<l+1,r2f(fnd,x,y))P(k>l+1,er(y))
  X(RA(i(xn,P(mtc_(xa,y),y(az(i))))y(az(NL)))
    R_(i(xN,A z=ii(x,i);I m=mtc_(z,y);z(0);P(m,y(az(i))))y(az(NL))))0)
 RB(x=cG(xR);x(fnd(x,y)))
 RGC(i(256,t[i]=NL)UC*a=xV;U n=xn;i(n,t[a[n-1-i]]=n-1-i)fndGx(y))
 R5(tH,tI,tL,tF,tS,
  YmMA(r2f(fnd,x,y))
  YE(fnd(x,gZ(y)))
  P(xt==TT[yt]||xtZ&&ytzZ,
   TY(fGL)*f=G(&fGL,fHL,fIL,fLL)[xw-3];V*a=xV;U m=xn;
   Yt(az(f(a,m,gl(y))))
   U n=yn;A z=aL(n);My(S4(yw-3,i(n,zl=f(a,m,yg)),i(n,zl=f(a,m,yh)),i(n,zl=f(a,m,yi)),i(n,zl=f(a,m,yl))))z)
  fN(y)))
X2(que,Rs(S CO C s[][4]={"j","k","hex"};G(&js0,val,unh,ed)[fI((V*)s,L(s),xv)](y))Ril(rnd(gl_(x),y))R_(fnd(x,y)))

S A2 binF;
S Y2(binZ,
 R_(et(y))
 RF(x=cF(xR);x(binF(x,y)))
 Rt(YU(ed(y))fir(N(binZ(x,enl(y)))))
 RmMA(r2f(binZ,x,y))
 RE(binZ(x,gZ(y)))
 RB(binZ(x,cG(y)))
 RGHILC(
  XE(x=gZ(xR);x(binZ(x,y)))
  P(xn-(I)xn,ez(y))U wx=xw-3,wy=yw-3;P(!wx,wy?K2("{@[x'`c$127&y;&-128>y;:;-1]}",x,y):K2("{(-1+\\@[&256;128+x;+;1])128+y}",x,y))A z=an(yn,tZ(xn-1));I wz=zw-3,k[2];
  i(yn,L v;S4(wy,v=yg,v=yh,v=yi,v=yl)*k=-1;k[1]=xn;S4(wx,,W(*k+1<k[1],I i=*k+k[1]>>1;k[v<xh]=i),W(*k+1<k[1],I i=*k+k[1]>>1;k[v<xi]=i),W(*k+1<k[1],I i=*k+k[1]>>1;k[v<xl]=i))
       S4(wz,zg=*k,zh=*k,zi=*k,zl=*k))y(z)))

S Y2(binF,RF(x=of1(xR);x(binZ(x,of1(y))))REBGHILC(binF(x,N(cF(y))))Rt(YU(ed(y))fir(N(binF(x,enl(y)))))RmMA(r2f(binF,x,y))R_(ed(y)))
X2(bin,REBGHILC(binZ(x,y))RF(binF(x,y))Rm(_1(xx,N(bin(xy,y))))R_(et(y)))
