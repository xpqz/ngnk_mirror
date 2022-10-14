#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define i4(w,n,a,b,c,d) S4(w,i(n,a),i(n,b),i(n,c),i(n,d))
#define MIN(x,y) (x)=min(x,y)
#define MAX(x,y) (x)=max(x,y)
SN A1(inv,x=mut(x);Nn=xn*xW;i(PD(n,xC),xc^=-1)x)

S A3(___f,/*001*/Ni=!y;I(i,y=ii(z,0))E(yR)Nn=zn;W(i<n,y=y(x2(y,ii(z,i++)));B(!y))z(y))
S A3(dexf,/*001*/las(z))
S L mmmfZ(Lv,Ax/*0*/,Ii)_(Q(xtZDC)L l=-1ll<<8*xW-1,h=~l;Nn=xn;P((i?v>=h:v<=l)||!n,v)v=v<l?l:v>h?h:v;I(i,i4(xw,n,MAX(v,xb),MAX(v,xh),MAX(v,xi),MAX(v,xl)))E(i4(xw,n,MIN(v,xb),MIN(v,xh),MIN(v,xi),MIN(v,xl)))v)
S A3(mmmf,/*001*/Ii=xv==7;P((y&&ytd)||ztD,Lv=ofpd1(y?gd(cD(yR)):i?-WD:WD);z=cD(z);ad(ze(OFP1(z);L r=mmmfZ(v,z,i);OFP0(z);ofpd0(r))))Lv=y?gl_(y):i?-WL:WL;az(ze(mmmfZ(v,z,i))))
S A3(admf,/*001*/Ii=xv==3;Nn=zn;P((y&&ytd)||ztD,Dv=y?gd(cD(yR)):i;z=cD(z);ad(ze(I(i,i(n,v*=zd))E(i(n,v+=zd))v)))Lv=y?gl_(y):i;az(ze(I(i,i4(zw,n,v*=zb,v*=zh,v*=zi,v*=zl))E(i4(zw,n,v+=zb,v+=zh,v+=zi,v+=zl))v)))
S A3(subf,/*001*/y=y?neg(yR):zn?mul(ai(-2),ii(z,0)):ai(0);y(neg(admf(ADD,y,z))))
A3(arf,/*001*/Q(xtv)Q(xv<11)Q(!y||ytzdc)Q(ztZDC)T(&dexf,admf,subf,admf,___f,___f,mmmf,mmmf,___f,___f,___f)[xv](x,y,z))

S A3(___s,/*001*/ Ni=!y;Au;I(i,y=ii(z,0);u=enl(yR))E(yR;yR;u=oB)Nn=zn;W(i<n,y=y(x2(y,ii(z,i++)));P(!y,z(u(0)))uq(yR))y(z(u)))
S A3(dexs,/*001*/z)
S A3(adds,/*001*/L w=y?gl_(y):0;Nn=zn;W(1,I b=1;Lv=w;Ct=tB+zw;Au=an(t,n);i4(zw,n,ub=v+=zb;B(v-(B)v,b=0),uh=v+=zh;B(v-(H)v,b=0),ui=v+=zi;B(v-(I)v,b=0),ul=v+=zl)P(b,z(u))z=cT[t+1](u(z)))0)
S A3(muls,/*001*/L w=y?gl_(y):1;Nn=zn;
 W(1,I b=1;Lv=w;Ct=zt;Au=an(t,n);I(t==tL,i(n,ul=v*=zl))J(t==tI,i(n,ui=v*=zi;B(v-(I)v,b=0)))J(t==tH,i(n,uh=v*=zh;B(v-(H)v,b=0)))J(t==tB,i(n,ub=v*=zb;B(v-(B)v,b=0)))E(Q(0))P(b,z(u))z=cT[t+1](u(z)))0)
S A3(subs,/*001*/y=neg(y?yR:mul(ai(2),ii(z,0)));neg(y(adds(0,y,z))))
S A3(mxms,/*001*/P((!y||ytz)&&ztZ,Lv=y?gl_(y):-WL,l=-1ll<<8*zW-1,h=~l;Nn=zn;I(v<=l||h<=v,P(v>=0,z(rsz(n,az(v))))v=v<0?l:h)
                                  Au=zr-1?an(zt,n):z;i4(zw,n,ub=MAX(v,zb),uh=MAX(v,zh),ui=MAX(v,zi),ul=MAX(v,zl))z-u?z(u):u)___s(x,y,z))
S A3(mnms,/*001*/P((!y||ytz)&&ztZ,inv(mxms(MXM,y?az(~gl_(y)):0,inv(z))))___s(x,y,z))
S A3(eqls,/*001*/Lv=y?gl_(y):~*zL;Au=ztB&&zr==1?z:aB(zn);i4(zw,zn,ub=v=v==zb,ub=v=v==zh,ub=v=v==zi,ub=v=v==zl)z-u?z(u):u)
A3(ars,/*001*/Q(xtv)Q(xv<11)Q(!y||ytzc)Q(ztZC)T(&dexs,adds,subs,muls,___s,___s,mnms,mxms,___s,___s,eqls)[xv](x,y,z))

S A3(dexp,/*001*/cat(y,drp(-1,z)))
S A3(___p,/*001*/z(v2[xv](z,dexp(av,y,zR))))
S A3(modp,/*001*/z(e2f(mod,z,dexp(av,y,zR))))
S A3(mxmp,/*001*/ZC(mxmp(x,y,cB(z)))I w=zw;Lv=gl_(y),l=-1ll<<(8<<w)-1,h=~l;MAX(v,l);Nn=zn;P(v>=h,rsz(n,z(az(v))))y=zr>1?zr--,an(zt,zn):z;
 S4(w,zB[-1]=v,zH[-1]=v,zI[-1]=v,zL[-1]=v)Nj=n-1;i4(w,n,yB[j]=max(zB[j],zB[j-1]);j--,yH[j]=max(zH[j],zH[j-1]);j--,yI[j]=max(zI[j],zI[j-1]);j--,yL[j]=max(zL[j],zL[j-1]);j--)zn=n;y)
S A3(mnmp,/*001*/y=az(~gl_(y));inv(y(mxmp(MXM,y,inv(z)))))
S A3(cmpp,/*001*/I o=x-LTN,w=zw;Nn=zn;Au=aB(n);Lv=gl_(y),p=iw(z,w,0);*uB=!o?p<v:o==1?p>v:p==v;Lm=n-1,j=m;
 S4(o,i4(w,m,uB[j]=zB[j]< zB[j-1];j--,uB[j]=zH[j]< zH[j-1];j--,uB[j]=zI[j]< zI[j-1];j--,uB[j]=zL[j]< zL[j-1];j--),
      i4(w,m,uB[j]=zB[j]> zB[j-1];j--,uB[j]=zH[j]> zH[j-1];j--,uB[j]=zI[j]> zI[j-1];j--,uB[j]=zL[j]> zL[j-1];j--),
      i4(w,m,uB[j]=zB[j]==zB[j-1];j--,uB[j]=zH[j]==zH[j-1];j--,uB[j]=zI[j]==zI[j-1];j--,uB[j]=zL[j]==zL[j-1];j--),)z(u))
A3(arp,/*001*/Q(xtv)Q(xv<11)Q(ytzc)Q(ztZC)T(&dexp,___p,___p,___p,___p,modp,mnmp,mxmp,cmpp,cmpp,cmpp)[xv](x,y,z))

S A4(dexa,/*1000*/uR;Ny(sup(&x,&u));x=mut(x);Nn=yn;I wx=xw,wy=yw,wu=utt?-1:uw;Lv=wu<0?gl_(u):0;
  ue(I(utt,i4(wx,n,xB[iw(y,wy,i)]=v ,xH[iw(y,wy,i)]=v ,xI[iw(y,wy,i)]=v ,xL[iw(y,wy,i)]=v ))
     E(    i4(wx,n,xB[iw(y,wy,i)]=ub,xH[iw(y,wy,i)]=uh,xI[iw(y,wy,i)]=ui,xL[iw(y,wy,i)]=ul))x))
S A4(adma,/*1000*/yR;uR;x=cL(x);u=cL(u);x=mut(x);I(!ytL,y=cI(y))Nn=yn;
 I(utt,Lv=gl(u);ye(I(zv==1,I(ytL,i(n,xL[yl]+=v ))E(i(n,xL[yi]+=v )))E(I(ytL,i(n,xL[yl]*=v ))E(i(n,xL[yi]*=v )))0))
 E(ue(          ye(I(zv==1,I(ytL,i(n,xL[yl]+=ul))E(i(n,xL[yi]+=ul)))E(I(ytL,i(n,xL[yl]*=ul))E(i(n,xL[yi]*=ul)))0)))x)
S A4(mmma,/*1000*/yR;uR;I d=utT;I(!d,u=enl(u))Ny(sup(&x,&u));x=mut(x);I(!ytL,y=cI(y))Nn=yn;
 ye(ue(I(zv==6,I(ytL,i4(xw,n,MIN(xB[yl],uB[d*i]),MIN(xH[yl],uH[d*i]),MIN(xI[yl],uI[d*i]),MIN(xL[yl],uL[d*i])))
               E(    i4(xw,n,MIN(xB[yi],uB[d*i]),MIN(xH[yi],uH[d*i]),MIN(xI[yi],uI[d*i]),MIN(xL[yi],uL[d*i]))))
       E(      I(ytL,i4(xw,n,MAX(xB[yl],uB[d*i]),MAX(xH[yl],uH[d*i]),MAX(xI[yl],uI[d*i]),MAX(xL[yl],uL[d*i])))
               E(    i4(xw,n,MAX(xB[yi],uB[d*i]),MAX(xH[yi],uH[d*i]),MAX(xI[yi],uI[d*i]),MAX(xL[yi],uL[d*i]))))x)))
S A4(suba,/*1000*/u(adma(x,y,ADD,neg(uR))))
A4(ara,/*1000*/Q(xtZC)Q(ytZC)Q(ztv)Q(0xcf&1<<zv)Q(utzZ||utcC)P(utT&&yn-un,el1(x))P(!ina(y,xn),ei1(x))T(&dexa,adma,suba,adma,0,0,mmma,mmma)[zv](x,y,z,u))
