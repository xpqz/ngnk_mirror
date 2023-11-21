#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define i4(w,n,a,b,c,d) S4(w,i(n,a),i(n,b),i(n,c),i(n,d))
#define MINE(x,y) (x)=MIN(x,y)
#define MAXE(x,y) (x)=MAX(x,y)
NI A1(inv,x=mut(x);L*p=xL;i(xn*xW+31>>5<<2,*p++^=-1)x)

S A3(___f,/*010*/Ni=!y;I(i,y=io(z,0))Nn=zn;W(i<n,y=y(x2(y,ii(z,i++)));B(!y))y)
S A3(dexf,/*010*/Au=las(zR);y?y(u):u)
L minfZ(L v,Ax/*0*/)_(i4(xw,xn,MINE(v,xg),MINE(v,xh),MINE(v,xi),MINE(v,xl))v)
L maxfZ(L v,Ax/*0*/)_(i4(xw,xn,MAXE(v,xg),MAXE(v,xh),MAXE(v,xi),MAXE(v,xl))v)
S A3(mmmf,/*010*/Ii=xv==7;P((y&&ytf)||ztF,y=of1(y?cF(y):aV(tf,1,A((L)i<<63|WFL)));z=of1(cF(zR));of0(N(z(mmmf(x,y,z)))))L v=y?gl(y):i?-WL:WL;
 L l=-1ll<<8*zW-1,h=~l;Nn=zn;P((i?v>=h:v<=l)||!n,az(v))v=v<l?l:v>h?h:v;az(i?maxfZ(v,z):minfZ(v,z)))
L addfZ(L v,Ax/*0*/)_(i4(xw,xn,v+=xg,v+=xh,v+=xi,v+=xl)v)
L mulfZ(L v,Ax/*0*/)_(i4(xw,xn,v*=xg,v*=xh,v*=xi,v*=xl)v)
S A3(admf,/*010*/Ii=xv==3;Nn=zn;P((y&&ytf)||ztF,F v=y?gf(cF(y)):i;z=cF(zR);Mz(I(i,i(n,v*=zf))E(i(n,v+=zf)))af(v))L v=y?gl(y):i;az((i?mulfZ:addfZ)(v,z)))
S A3(subf,/*010*/y=y?neg(y):zn?mul(ai(-2),ii(z,0)):ai(0);neg(admf(ADD,y,z)))
A3(arf,/*010*/Q(xtv)Q(xv<11)Q(!y||ytzfc)Q(ztZFC)ZE(P(ztE&&x==ADD&&!y,Li=*zL,j=zL[1];az((j-i)*(j+i-1)/2))z=gZ(zR);z(arf(x,y,z)))
 A(&dexf,admf,subf,admf,___f,___f,mmmf,mmmf,___f,___f,___f)[xv](x,y,z))

S A3(___s,/*010*/Ni=!y;Au;I(i,y=ii(z,0);u=enl(yR))E(yR;u=oG)Nn=zn;W(i<n,y=y(x2(y,ii(z,i++)));P(!y,u(0))uq(yR))y(u))
S A3(dexs,/*010*/y?y(zR):zR)
S A3(adms,/*010*/L w=y?gl(y):x==MUL;Nn=zn;I b=1;L v=w;Ct=tG+zw;Au=an(n,t);
 I(x==ADD,i4(zw,n,ug=v+=zg;B(v-(G)v,b=0),uh=v+=zh;B(v-(H)v,b=0),ui=v+=zi;B(v-(I)v,b=0),ul=v+=zl))
 E(       i4(zw,n,ug=v*=zg;B(v-(G)v,b=0),uh=v*=zh;B(v-(H)v,b=0),ui=v*=zi;B(v-(I)v,b=0),ul=v*=zl))P(b,u)z=cT[t+1](u(zR));z(adms(x,az(w),z)))
S A3(subs,/*010*/y=neg(y?y:mul(ai(2),ii(z,0)));neg(adms(ADD,y,z)))
S A3(mxms,/*010*/P((!y||ytz)&&ztZ,L v=y?gl(y):-WL,l=-1ll<<8*zW-1,h=~l;Nn=zn;I(v<=l||h<=v,P(v>=0,rsz(n,az(v)))v=v<0?l:h)
                                  Au=an(n,zt);i4(zw,n,ug=MAXE(v,zg),uh=MAXE(v,zh),ui=MAXE(v,zi),ul=MAXE(v,zl))u)___s(x,y,z))
S A3(mnms,/*010*/P((!y||ytz)&&ztZ,z=inv(zR);z(inv(mxms(MXM,y?az(~gl(y)):0,z))))___s(x,y,z))
S A eqlsL(L v,Ax/*0*/)_(Ay=aG(xn);i4(xw,xn,yg=v=v==xg,yg=v=v==xh,yg=v=v==xi,yg=v=v==xl)y)
S A3(eqls,/*010*/Nn=zn,i=!y;L v=gl(y?y:io(z,0)),a=v;Au=aG(n);S4(zw,W(i<n,ug=v=v==zg;i++),W(i<n,ug=v=v==zh;i++),W(i<n,ug=v=v==zi;i++),W(i<n,ug=v=v==zl;i++))y||!n?u:a4(u,ai(0),av,az(a)))
A3(ars,/*010*/Q(xtv)Q(xv<11)Q(!y||ytzc)Q(ztZC)ZE(z=gZ(zR);z(ars(x,y,z)))A(&dexs,adms,subs,adms,___s,___s,mnms,mxms,___s,___s,eqls)[xv](x,y,z))

S A3(dexp,/*010*/zn?cat11(y?y:_R(cn[zt]),drp(-1,zR)):y(zR))
S A3(___p,/*010*/v2[xv](z,dexp(av,y,z)))
S A3(modp,/*010*/e2f(mod,z,dexp(av,y,z)))
S A3(mxmp,/*010*/I w=zw;L v=gl(y),l=-1ll<<(8<<w)-1,h=~l;MAXE(v,l);Nn=zn;P(v>=h,rsz(n,az(v)))y=an(zn,tG+zw);S4(w,zG[-1]=v,zH[-1]=v,zI[-1]=v,zL[-1]=v)Nj=n-1;
 i4(w,n,yG[j]=MAX(zG[j],zG[j-1]);j--,yH[j]=MAX(zH[j],zH[j-1]);j--,yI[j]=MAX(zI[j],zI[j-1]);j--,yL[j]=MAX(zL[j],zL[j-1]);j--)zn=n;y)
S A3(mnmp,/*010*/y=az(~gl(y));z=inv(zR);z(inv(mxmp(MXM,y,z))))
S A3(cmpp,/*010*/I o=x-LTN,w=zw;Nn=zn;Au=aG(n);L v=gl(y),p=iw(z,w,0);*uG=!o?p<v:o==1?p>v:p==v;Lm=n-1,j=m;
 S4(o,i4(w,m,uG[j]=zG[j]< zG[j-1];j--,uG[j]=zH[j]< zH[j-1];j--,uG[j]=zI[j]< zI[j-1];j--,uG[j]=zL[j]< zL[j-1];j--),
      i4(w,m,uG[j]=zG[j]> zG[j-1];j--,uG[j]=zH[j]> zH[j-1];j--,uG[j]=zI[j]> zI[j-1];j--,uG[j]=zL[j]> zL[j-1];j--),
      i4(w,m,uG[j]=zG[j]==zG[j-1];j--,uG[j]=zH[j]==zH[j-1];j--,uG[j]=zI[j]==zI[j-1];j--,uG[j]=zL[j]==zL[j-1];j--),)u)
A3(arp,/*010*/Q(xtv)Q(xv<11)Q(ytzc)Q(ztZC)ZE(z=gZ(zR);z(arp(x,y,z)))A(&dexp,___p,___p,___p,___p,modp,mnmp,mxmp,cmpp,cmpp,cmpp)[xv](x,y,z))

S C tZx(Ax)_(Ct=TX[xt];t?t:tZ(gl_(x)))C sup(A*p,A*q)_(Ax=*p,y=*q;Ct=MAX(tZx(x),tZx(y));*p=x=Ny(cT[t](x));*q=y=Nx(cT[t](y));t)
S A4(dexa,/*1000*/uR;Ny(sup(&x,&u));x=mut(x);Nn=yn;I wx=xw,wy=yw,wu=utt?-1:uw;L v=wu<0?gl_(u):0;
  Mu(I(utt,i4(wx,n,xG[iw(y,wy,i)]=v ,xH[iw(y,wy,i)]=v ,xI[iw(y,wy,i)]=v ,xL[iw(y,wy,i)]=v ))
     E(    i4(wx,n,xG[iw(y,wy,i)]=ug,xH[iw(y,wy,i)]=uh,xI[iw(y,wy,i)]=ui,xL[iw(y,wy,i)]=ul)))x)
S A4(adma,/*1000*/yR;uR;x=cL(x);u=cL(u);x=mut(x);I(!ytL,y=cI(y))Nn=yn;
 I(utt,L v=gl(u);My(I(zv==1,I(ytL,i(n,xL[yl]+=v ))E(i(n,xL[yi]+=v )))E(I(ytL,i(n,xL[yl]*=v ))E(i(n,xL[yi]*=v )))))
 E(Mu(           My(I(zv==1,I(ytL,i(n,xL[yl]+=ul))E(i(n,xL[yi]+=ul)))E(I(ytL,i(n,xL[yl]*=ul))E(i(n,xL[yi]*=ul))))))x)
S A4(mmma,/*1000*/yR;uR;B d=utT;I(!d,u=enl(u))Ny(sup(&x,&u));x=mut(x);I(!ytL,y=cI(y))Nn=yn;
 My(Mu(I(zv==6,I(ytL,i4(xw,n,MINE(xG[yl],uG[d*i]),MINE(xH[yl],uH[d*i]),MINE(xI[yl],uI[d*i]),MINE(xL[yl],uL[d*i])))
               E(    i4(xw,n,MINE(xG[yi],uG[d*i]),MINE(xH[yi],uH[d*i]),MINE(xI[yi],uI[d*i]),MINE(xL[yi],uL[d*i]))))
       E(      I(ytL,i4(xw,n,MAXE(xG[yl],uG[d*i]),MAXE(xH[yl],uH[d*i]),MAXE(xI[yl],uI[d*i]),MAXE(xL[yl],uL[d*i])))
               E(    i4(xw,n,MAXE(xG[yi],uG[d*i]),MAXE(xH[yi],uH[d*i]),MAXE(xI[yi],uI[d*i]),MAXE(xL[yi],uL[d*i]))))))x)
S A4(suba,/*1000*/u=neg(uR);u(adma(x,y,ADD,u)))
S I ina(Ax/*0*/,Nn)_(S4(xw,P(n-(G)n,1)i(xn,P(!IN(xg,n),0)),P(n-(H)n,1)i(xn,P(!IN(xh,n),0)),P(n-(I)n,1)i(xn,P(!IN(xi,n),0)),i(xn,P(!IN(xl,n),0)))1)
A4(ara,/*1000*/Q(xtZC)Q(ytZC)Q(ztv)Q(0xcf&1<<zv)Q(utzZ||utcC)XE(ara(gZ(x),y,z,u))YE(y=gZ(yR);y(ara(x,y,z,u)))P(_tE(u),u=gZ(uR);u(ara(x,y,z,u)))
 P(utT&&yn-un,el1(x))P(!ina(y,xn),ei1(x))A(&dexa,adma,suba,adma,0,0,mmma,mmma)[zv](x,y,z,u))
