#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define i4(w,n,a,b,c,d) S4(w,i(n,a),i(n,b),i(n,c),i(n,d))
NI A1(inv,x=mut(x);L*p=xL;i(xn*xW+31>>5<<2,*p++^=-1)x)

S A3(___f,/*010*/U i=!y;I(i,y=io(z,0))U n=zn;W(i<n,y=y(x2(y,ii(z,i++)));B(!y))y)
S A3(dexf,/*010*/A u=las(zR);I(y,y(0))u)
  L addfB(O V*a,U n)_(O W*p=a;U r=0;i(n>>6,r+=__builtin_popcountll(*p++))n&=63;n?r+__builtin_popcountll(*p&~(-1ll<<n)):r)
S L addfG(O V*a,U n)_(O G*p=a;L r=0;i(n,r+=*p++)r)
S L addfH(O V*a,U n)_(O H*p=a;L r=0;i(n,r+=*p++)r)
S L addfI(O V*a,U n)_(O I*p=a;L r=0;i(n,r+=*p++)r)
S L addfL(O V*a,U n)_(O L*p=a;L r=0;i(n,r+=*p++)r)
S L mulfG(O V*a,U n)_(O G*p=a;L r=1;i(n,r*=*p++)r)
S L mulfH(O V*a,U n)_(O H*p=a;L r=1;i(n,r*=*p++)r)
S L mulfI(O V*a,U n)_(O I*p=a;L r=1;i(n,r*=*p++)r)
S L mulfL(O V*a,U n)_(O L*p=a;L r=1;i(n,r*=*p++)r)
S L minfB(O V*a,U n)_(O W*p=a;i(n>>6,P(~*p++,0))n&=63;n?!!~(*p|(-1ll<<n)):1)
S L minfG(O V*a,U n)_(O G*p=a;G r=(1u  << 7)-1;i(n,r=MIN(r,p[i]))r)
S L minfH(O V*a,U n)_(O H*p=a;H r=(1u  <<15)-1;i(n,r=MIN(r,p[i]))r)
S L minfI(O V*a,U n)_(O I*p=a;I r=(1u  <<31)-1;i(n,r=MIN(r,p[i]))r)
S L minfL(O V*a,U n)_(O L*p=a;L r=(1ull<<63)-1;i(n,r=MIN(r,p[i]))r)
S L maxfB(O V*a,U n)_(O W*p=a;i(n>>6,P( *p++,1))n&=63;n?!!(*p&~(-1ll<<n)):0)
S L maxfG(O V*a,U n)_(O G*p=a;G r=(1u  << 7)  ;i(n,r=MAX(r,p[i]))r)
S L maxfH(O V*a,U n)_(O H*p=a;H r=(1u  <<15)  ;i(n,r=MAX(r,p[i]))r)
S L maxfI(O V*a,U n)_(O I*p=a;I r=(1u  <<31)  ;i(n,r=MAX(r,p[i]))r)
S L maxfL(O V*a,U n)_(O L*p=a;L r=(1ull<<63)  ;i(n,r=MAX(r,p[i]))r)
  L addfZ(L v,A x/*0*/)_(v+    G(&addfG,addfH,addfI,addfL)[xw-3](xV,xn) )
S L mulfZ(L v,A x/*0*/)_(v*    G(&mulfG,mulfH,mulfI,mulfL)[xw-3](xV,xn) )
  L minfZ(L v,A x/*0*/)_(MIN(v,G(&minfG,minfH,minfI,minfL)[xw-3](xV,xn)))
S L maxfZ(L v,A x/*0*/)_(MAX(v,G(&maxfG,maxfH,maxfI,maxfL)[xw-3](xV,xn)))
S A3(admf,/*010*/B i=xv==3;U n=zn;P((y&&ytf)||ztF,F v=y?gf(cF(y)):i;z=cF(zR);Mz(I(i,i(n,v*=zf))E(i(n,v+=zf)))af(v))L v=y?gl(y):i;az((i?mulfZ:addfZ)(v,z)))
S A3(subf,/*010*/y=y?neg(y):zn?mul(ai(-2),ii(z,0)):ai(0);neg(admf(ADD,y,z)))
S A3(mmmf,/*010*/B i=xv==7;P((y&&ytf)||ztF,y=of1(y?cF(y):aV(tf,1,A((L)i<<63|WFL)));z=of1(cF(zR));of0(N(z(mmmf(x,y,z)))))L v=y?gl(y):i?-WL:WL;az(zn?(i?maxfZ:minfZ)(v,z):v))
A3(arf,/*010*/Q(xtv)Q(xv<11)Q(!y||ytzfc)Q(ztZFC)
 ZE(P(ztE&&x==ADD&&!y,L i=*zL,j=zL[1];az((j-i)*(j+i-1)/2))z=gZ(zR);z(arf(x,y,z)))
 ZB(z=cG(zR);z(arf(x,y,z)))
 G(&dexf,admf,subf,admf,___f,___f,mmmf,mmmf,___f,___f,___f)[xv](x,y,z))

S A3(___s,/*010*/U i=!y;A u;I(i,y=ii(z,0);u=enl(yR))E(yR;u=emp(tG))U n=zn;W(i<n,y=y(x2(y,ii(z,i++)));P(!y,u(0))PSH(u,yR))y(u))
S A3(dexs,/*010*/I(y,y(0))zR)
S A3(adms,/*010*/L w=y?gl(y):x==MUL;U n=zn;I b=1;L v=w;C t=tG+zw-3;A u=an(n,t);
 I(x==ADD,i4(zw-3,n,ug=v+=zg;B(v-(G)v,b=0),uh=v+=zh;B(v-(H)v,b=0),ui=v+=zi;B(v-(I)v,b=0),ul=v+=zl))
 E(       i4(zw-3,n,ug=v*=zg;B(v-(G)v,b=0),uh=v*=zh;B(v-(H)v,b=0),ui=v*=zi;B(v-(I)v,b=0),ul=v*=zl))P(b,u)z=cT(t+1,u(zR));z(adms(x,az(w),z)))
S A3(subs,/*010*/y=neg(y?y:mul(ai(2),ii(z,0)));neg(adms(ADD,y,z)))
S A3(mxms,/*010*/P((!y||ytz)&&ztZ,L v=y?gl(y):-WL,l=-1ll<<8*zW-1,h=~l;U n=zn;I(v<=l||h<=v,P(v>=0,rsz(n,az(v)))v=v<0?l:h)
                                  A u=an(n,zt);i4(zw-3,n,ug=v=MAX(v,zg),uh=v=MAX(v,zh),ui=v=MAX(v,zi),ul=v=MAX(v,zl))u)___s(x,y,z))
S A3(mnms,/*010*/P((!y||ytz)&&ztZ,z=inv(zR);z(inv(mxms(MXM,y?az(~gl(y)):0,z))))___s(x,y,z))
S A eqlsL(L v,A x/*0*/)_(A y=aG(xn);i4(xw-3,xn,yg=v=v==xg,yg=v=v==xh,yg=v=v==xi,yg=v=v==xl)y)
S A3(eqls,/*010*/U n=zn,i=!y;L v=gl(y?y:io(z,0)),a=v;A u=aG(n);S4(zw-3,W(i<n,ug=v=v==zg;i++),W(i<n,ug=v=v==zh;i++),W(i<n,ug=v=v==zi;i++),W(i<n,ug=v=v==zl;i++))y||!n?u:a4(u,ai(0),av,az(a)))
A3(ars,/*010*/Q(xtv)Q(xv<11)Q(!y||ytzc)Q(ztZC)
 ZE(z=gZ(zR);z(ars(x,y,z)))
 ZB(z=cG(zR);z(ars(x,y,z)))
 G(&dexs,adms,subs,adms,___s,___s,mnms,mxms,___s,___s,eqls)[xv](x,y,z))

S A3(dexp,/*010*/zn?cat11(y?y:_R(cn[zt]),drp(-1,zR)):y(zR))
S A3(___p,/*010*/v2[xv](z,dexp(av,y,z)))
S A3(modp,/*010*/e2f(mod,z,dexp(av,y,z)))
S A3(mxmp,/*010*/U w=zw-3;L v=gl(y),l=-1ll<<(8<<w)-1,h=~l;v=MAX(v,l);N n=zn;P(v>=h,rsz(n,az(v)))y=an(zn,tG+zw-3);S4(w,zG[-1]=v,zH[-1]=v,zI[-1]=v,zL[-1]=v)N j=n-1;
 i4(w,n,yG[j]=MAX(zG[j],zG[j-1]);j--,yH[j]=MAX(zH[j],zH[j-1]);j--,yI[j]=MAX(zI[j],zI[j-1]);j--,yL[j]=MAX(zL[j],zL[j-1]);j--)zn=n;y)
S A3(mnmp,/*010*/y=az(~gl(y));z=inv(zR);z(inv(mxmp(MXM,y,z))))
S A3(cmpp,/*010*/I o=x-LTN,w=zw-3;U n=zn;A u=aG(n);L v=gl(y),p=iw(z,w,0);*uG=!o?p<v:o==1?p>v:p==v;L m=n-1,j=m;
 S4(o,i4(w,m,uG[j]=zG[j]< zG[j-1];j--,uG[j]=zH[j]< zH[j-1];j--,uG[j]=zI[j]< zI[j-1];j--,uG[j]=zL[j]< zL[j-1];j--),
      i4(w,m,uG[j]=zG[j]> zG[j-1];j--,uG[j]=zH[j]> zH[j-1];j--,uG[j]=zI[j]> zI[j-1];j--,uG[j]=zL[j]> zL[j-1];j--),
      i4(w,m,uG[j]=zG[j]==zG[j-1];j--,uG[j]=zH[j]==zH[j-1];j--,uG[j]=zI[j]==zI[j-1];j--,uG[j]=zL[j]==zL[j-1];j--),)u)
A3(arp,/*010*/Q(xtv)Q(xv<11)Q(ytzc)Q(ztZC)
 ZE(z=gZ(zR);z(arp(x,y,z)))
 ZB(z=cG(zR);z(arp(x,y,z)))
 G(&dexp,___p,___p,___p,___p,modp,mnmp,mxmp,cmpp,cmpp,cmpp)[xv](x,y,z))

S C tZx(A x)_(C t=TX[xt];t?t:tZ(gl_(x)))
C sup(A*p,A*q)_(A x=*p,y=*q;C t=MAX(tZx(x),tZx(y));*p=x=Ny(cT(t,x));*q=y=Nx(cT(t,y));t)
S A4(dexa,/*1000*/uR;Ny(sup(&x,&u));x=mut(x);U n=yn;I wx=xw-3,wy=yw-3,wu=utt?-1:uw-3;L v=wu<0?gl_(u):0;
  Mu(I(utt,i4(wx,n,xG[iw(y,wy,i)]=v ,xH[iw(y,wy,i)]=v ,xI[iw(y,wy,i)]=v ,xL[iw(y,wy,i)]=v ))
     E(    i4(wx,n,xG[iw(y,wy,i)]=ug,xH[iw(y,wy,i)]=uh,xI[iw(y,wy,i)]=ui,xL[iw(y,wy,i)]=ul)))x)
S A4(adma,/*1000*/yR;uR;x=cL(x);u=cL(u);x=mut(x);I(!ytL,y=cI(y))U n=yn;
 I(utt,L v=gl(u);My(I(zv==1,I(ytL,i(n,xL[yl]+=v ))E(i(n,xL[yi]+=v )))E(I(ytL,i(n,xL[yl]*=v ))E(i(n,xL[yi]*=v )))))
 E(Mu(           My(I(zv==1,I(ytL,i(n,xL[yl]+=ul))E(i(n,xL[yi]+=ul)))E(I(ytL,i(n,xL[yl]*=ul))E(i(n,xL[yi]*=ul))))))x)
S A4(mmma,/*1000*/yR;uR;B d=utT;I(!d,u=enl(u))Ny(sup(&x,&u));x=mut(x);I(!ytL,y=cI(y))U n=yn;
 My(Mu(I(zv==6,I(ytL,i4(xw-3,n,xG[yl]=MIN(xG[yl],uG[d*i]),xH[yl]=MIN(xH[yl],uH[d*i]),xI[yl]=MIN(xI[yl],uI[d*i]),xL[yl]=MIN(xL[yl],uL[d*i])))
               E(    i4(xw-3,n,xG[yi]=MIN(xG[yi],uG[d*i]),xH[yi]=MIN(xH[yi],uH[d*i]),xI[yi]=MIN(xI[yi],uI[d*i]),xL[yi]=MIN(xL[yi],uL[d*i]))))
       E(      I(ytL,i4(xw-3,n,xG[yl]=MAX(xG[yl],uG[d*i]),xH[yl]=MAX(xH[yl],uH[d*i]),xI[yl]=MAX(xI[yl],uI[d*i]),xL[yl]=MAX(xL[yl],uL[d*i])))
               E(    i4(xw-3,n,xG[yi]=MAX(xG[yi],uG[d*i]),xH[yi]=MAX(xH[yi],uH[d*i]),xI[yi]=MAX(xI[yi],uI[d*i]),xL[yi]=MAX(xL[yi],uL[d*i]))))))x)
S A4(suba,/*1000*/u=neg(uR);u(adma(x,y,ADD,u)))
S B ina(A x/*0*/,U n)_(S4(xw-3,P(n-(G)n,1)i(xn,P(xg>=n,0)),P(n-(H)n,1)i(xn,P(xh>=n,0)),P(n-(I)n,1)i(xn,P(xi>=n,0)),i(xn,P(xl>=n,0)))1)
A4(ara,/*1000*/Q(xtZC)Q(ytZC)Q(ztv)Q(0xcf&1<<zv)Q(utzZ||utcC)
 XE(ara(gZ(x),y,z,u))
 XB(ara(cG(x),y,z,u))
 YE(y=gZ(yR);y(ara(x,y,z,u)))
 YB(y=cG(yR);y(ara(x,y,z,u)))
 P(_tE(u),u=gZ(uR);u(ara(x,y,z,u)))
 P(_tB(u),u=cG(uR);u(ara(x,y,z,u)))
 P(utT&&yn-un,el(x))
 P(!ina(y,xn),ei(x))
 G(&dexa,adma,suba,adma,0,0,mmma,mmma)[zv](x,y,z,u))
