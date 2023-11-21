#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
I rnk(A x/*0*/){X(RA(I v=rnk(xx);P(v<0,v)i(xn,P(v-rnk(xa),-1))v+1)RmM(rnk(xy))RT_A(1)R_(0))}//-1 for mixed rank
S U urnk(A x/*0*/){X(RA(urnk(xx)+1)RmM(urnk(xy))RT_A(1)R_(0))}//assuming unirank
S L fG(OV*p,U n,L v)_(O G*a=p,q=v;P(v-q,NL)I i=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
S L fH(OV*p,U n,L v)_(O H*a=p,q=v;P(v-q,NL)I i=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
  L fI(OV*p,U n,L v)_(O I*a=p,q=v;P(v-q,NL)I i=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
  L fL(OV*p,U n,L v)_(O L*a=p,q=v;P(v-q,NL)I i=0,g=HD/SZ(*a),f=0;W(i<n&&!f,j(g,f|=a[i++]==q))i-=g;j(g,B(a[i]==q)i++)i<n?i:NL)
S A1(fN,A y=_R(cn[tl]);x(xtt?y:rsz(xN,y)))
//S A1(fBN,Q(xtG)G v=0;i(xn,v|=xg)P(!(v>> 7&1),x)A y=aL(xn);Mx(i(xn,yl=xg<0?NL:xg))y)
//S A1(fHN,Q(xtH)H v=0;i(xn,v|=xg)P(!(v>>15&1),x)A y=aL(xn);Mx(i(xn,yl=xh<0?NL:xh))y)
//S A1(fIN,Q(xtI)I v=0;i(xn,v|=xg)P(!(v>>31&1),x)A y=aL(xn);Mx(i(xn,yl=xi<0?NL:xi))y)
S L t[256];
S X1(fndGx,RmMA(e1f(fndGx,x))Rzc(L v=gl(x);az(v==(C)v?t[(UC)v]:NL))RE(fndGx(gZ(x)))R_(fN(x))
 RZC_E(N m=xn;A y=aL(m);Mx(S4(xw,i(m,yl=t[(UC)xc]),i(m,H v=xh;yl=v==(C)v?t[(UC)v]:NL),i(m,I v=xi;yl=v==(C)v?t[(UC)v]:NL),i(m,L v=xl;yl=v==(C)v?t[(UC)v]:NL)))sqzZ(y)))
X2(fnd,R_(et1(y))Rm(i1(xx,N(fnd(xy,y))))RM(en1(y))RE(x=gZ(xR);x(fnd(x,y)))
 RA(U k=urnk(x),l=urnk(y);P(k<l+1,r2f(fnd,x,y))P(k>l+1,er1(y))
  X(RA(i(xn,P(mtc_(xa,y),y(az(i))))y(az(NL)))
    R_(i(xN,A z=ii(x,i);I m=mtc_(z,y);z(0);P(m,y(az(i))))y(az(NL))))0)
 RGC(UC*a=xV;N n=xn;i(256,t[i]=NL)i(n,t[a[n-1-i]]=n-1-i)fndGx(y))
 R5(tH,tI,tL,tF,tS,
  YmMA(r2f(fnd,x,y))
  YE(fnd(x,gZ(y)))
  P(xt==TT[yt]||xtZ&&ytzZ,
   P(xw==1&&xn>128&&yN>128,K2("{a:&/x;b:1+|/x;@[(b-a)#0N;|x-a;:;|!#x]y-a}",x,y))
   TY(fG)*f=A(&fG,fH,fI,fL)[xw];Yt(az(f(xV,xn,gl(y))))
   N m=xn,n=yn;A z=aL(n);My(S4(yw,i(n,zl=f(xV,m,yg)),i(n,zl=f(xV,m,yh)),i(n,zl=f(xV,m,yi)),i(n,zl=f(xV,m,yl))))z)
  fN(y)))
X2(que,Rs(S O C s[][4]={"j","k","hex"};L i=fI(s,L(s),xv);A(&js0,val,unh,ed1)[i<0?L(s):i](y))Rz(rnd(gl_(x),y))R_(fnd(x,y)))

S A2 binF;
S Y2(binZ,RF(x=cF(xR);x(binF(x,y)))Rt(YU(ed1(y))fir(N(binZ(x,enl(y)))))RmMA(r2f(binZ,x,y))R_(et1(y))
 RZC(P(xn-(I)xn,ez1(y))I wx=xw,wy=yw;P(!wx,wy?K2("{@[x'`c$127&y;&-128>y;:;-1]}",x,y):K2("{(-1+\\@[&256;128+x;+;1])128+y}",x,y))A z=an(yn,tZ(xn-1));I wz=zw,k[2];
  i(yn,L v;S4(wy,v=yg,v=yh,v=yi,v=yl)*k=-1;k[1]=xn;S4(wx,,W(*k+1<k[1],I i=*k+k[1]>>1;k[v<xh]=i),W(*k+1<k[1],I i=*k+k[1]>>1;k[v<xi]=i),W(*k+1<k[1],I i=*k+k[1]>>1;k[v<xl]=i))
       S4(wz,zg=*k,zh=*k,zi=*k,zl=*k))y(z)))
S Y2(binF,RF(x=of1(xR);x(binZ(x,of1(y))))RZC(binF(x,N(cF(y))))Rt(YU(ed1(y))fir(N(binF(x,enl(y)))))RmMA(r2f(binF,x,y))R_(ed1(y)))
X2(bin,RZC(binZ(x,y))RF(binF(x,y))Rm(_1(xx,N(bin(xy,y))))R_(et1(y)))
