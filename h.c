#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
SN A flt(Ax,Ay,Cb/*01b*/)_(P(xK-1,er1(y))Ym(K("{(!y)[i]!(.y)i:&z~/:x@.y}",xR,y,ai(b)))
 x=Ny(x1(yR));x=xN?Ny(cL(x)):x(oB);P(!xtt&&xN-yN,el1(x(y)))Az=rsh(0,yR);i(yN,Ln=gl(ii(x,i));B(b&&n-(UI)n,z=ed1(z))j(b?n:!n,zq(ii(y,i))))x(y(z)))
V cyc(V*a,Nm,Nn){Q(m);W(2*m<=n,Mc(a+m,a,m);m*=2)I(n>m,Mc(a+m,a,n-m))}
ALA(rsh,/*1*/Xt(rsh(n,enl(x)))XM(Ay=kv(&x),z=az(n);aM(x,Nx(z(r2(RSH,z,y)))))Xm(Ay=kv(&x);x=Ny(rsh(n,x));y=Nx(rsh(n,y));am(x,y))Q(xtT)
 P(!xn,rsh(n,enl(fir(x))))P(n==NL,x)I r=n<0;I(r,n=-n)Ay=an(xt,n);N w=xW,m=xn*w,k=n%xn*w,l=n*w;
  I(!r,Mc(yV,xV,min(m,l)))J(l<=m,Mc(yV,xV+m-l,l))E(Mc(yV,xV+m-k,k);Mc(yV+k,xV,m-k))cyc(yV,m,l);x(ytA?sqz(mRa(y)):y))
S A slc(Ax/*0*/,Ni,Nj)_(Q(xtT&&i<=j&&i<=xn)Ay=an(xt,j-i);Mc(yV,xV+i*xW,(j-i)*xW);XA(sqz(mRa(y)))y)
S ALA(chp/*1*/,P(n<0,ed1(x))Lm=(xn+n-1)/n;Ay=aA(m);i(m,ya=slc(x,n*i,min(xn,n*i+n)))x(y))
S A shp(O L*s,Nn,Ax,Lm)_(Q(xtT)Q(xn)Q(n)P(n==1,rsh(m**s,x))x=shp(s+1,n-1,x,m**s);s[1]?chp(s[1],x):rsh(m**s,enl(x)))
S A rshL(O L*s,Nn,Ax)_(Xt(rshL(s,n,enl(x)))XmM(en1(x))P(!n,fir(x))P(n>8,ez1(x))
 P(n==1&&*s==NL,x)I(n==2,P(*s==NL,chp(s[1],x))P(s[1]==NL,K2("{((-x)!(#y)*!x)_y}",az(*s),x)))P(!xn,rshL(s,n,enl(fir(x))))
 Lm=1;i(n,P(s[i]<0,ed1(x))m*=max(1,s[i]))x=N(rsh(m,x));shp(s,n,x,1))
A2(hsh,/*01*/Xz(rsh(gl_(x),y))XZ(x=Ny(cL(xR));x(rshL(xL,xn,y)))XF(flt(x,y,1))XT(P(ytm||ytM&&xtS,a2t(xR,y(y1(xR)),yt))et1(y))et1(y))
ALA(drp,/*n1*/XT(P(n==NL,rsh(0,x))P(-n<=(UL)xn&&xr==1,I(xtA,mrn(-n,xA+xn+n))AN(xn+n,x))x(slc(x,max(0,min((L)xn,n)),max(0,min((L)xn,xn+n)))))
 Xm(Ay=kv(&x);am(Ny(drp(n,x)),Nx(drp(n,y))))XM(Ay=kv(&x);aM(x,Nx(e2f(und,az(n),y))))er1(x))
S AAL(rmv,XT(P(!in(i,xn),x)Ay=an(xt,xn-1);Mc(yV,xV,i*xW);Mc(yV+i*xW,xV+i*xW+xW,(xn-i-1)*xW);I(xtA,y=sqz(mRa(y)))x(y))et1(x))
S A2(cut,/*01*/Q(xtZ)Q(ytMT)K2("{y$[|/0<':x,#y;`err\"domain\";x+!'1_-':x,#y]}",x,y))
A2(und,/*01*/Xz(drp(gl_(x),y))XF(flt(x,y,0))Xm(y=N(fnd(xx,y));yR;am(und(xx,y),und(xy,y)))P(xtZ&&ytMT,cut(x,y))P(xtMT&&ytz,rmv(xR,gl(y)))
 Ym(K2("{((!y)^x)#y}",x,y))YM(K2("{+x_+y}",x,y))et1(y))
A1(enl,Xi(aV(tZ(xv),1,&x))XF(aA1(x))XP(aV(TT[xt],1,&x))Xt(x(aV(TT[xt],1,xV)))Xm(Ay=kv(&x);aM(x,e1f(enl,y)))aA1(x))
A2(cat11,P(xtm&&ytm,Az=kv(&y);a4(x,y,av,z))Xmt(cat11(enl(x),y))Ymt(cat11(x,enl(y)))
 P(xtM||ytM,P(xtT||ytT,x=Ny(cA(x));y=Nx(cA(y));cat11(x,y))P(!xtM||!ytM,et2(x,y))P(!mtc_(xx,yx),ed2(x,y))Az=e2f(cat,xy,_R(yy));x(y(z?aM(_R(xx),z):0)))
 P(!yn,y(x))P(!xn,x(y))I(xtZ&&ytzZ,N(sup(&x,&y)))I(xt-yt,x=cA(x);y=cA(y))
 Nm=xn,n=yn,w=xW;x=room(m+n,x);Mc(xV+m*w,yV,n*w);I(ytA,yr-1?mRa(y):AN(0,y))y(x))
A2(cat,/*01*/cat11(xR,y))
A2(apd,/*11*/Q(xtMT);Nn=xn;P(!n,enl(x(y)))
 P(xtB&&yti&&yv==(B)yv||xtC&&ytc,apc(x,yv))
 P(xtH&&yti&&yv==(H)yv,x=room(n+1,x);xH[n]=yv;x)
 P(xtI&&yti||xtS&&yts ,x=room(n+1,x);xI[n]=yv;x)
 P(xtL&&yti           ,x=room(n+1,x);xL[n]=yv;x)
 P(xtL&&ytl||xtD&&ytd ,x=room(n+1,x);xL[n]=gl(y);x)
 P(xtZ&&ytz,N(sup(&x,&y));apd(x,y))
 XM(P(!ytm||!mtc_(xx,yx),apd(Ny(cA(x)),y))x=mut(x);Az=xy=mut(xy);i(zn,_q(za,ii(yy,i)))y(x))
 P(!xtA&&(!ytt||xt-TT[yt]),apd(Ny(cA(x)),y))
 Lv=xtA?(L)y:gl(y);apv(x,&v))
A apv(Ax/*1*/,OV*v )_(Q(xtT);     Nn=xn;x=room(n+1,x);Mc(xV+n*xW,v,xW);x)
A apc(Ax/*1*/,Cc   )_(Q(xtC||xtB);Nn=xn;x=room(n+1,x);xC[n]=c;x)
A cts(Ax/*1*/,Qs,Nm)_(Q(xtC);     Nn=xn;x=room(n+m,x);Mc(xV+n,s,m);x)
S A insL(Ax,Li,Lj,Ay)_(YF(insL(x,i,j,Nx(y(y1(slc(x,i,j))))))Xmt(et2(x,y))Ymt(insL(x,i,j,enl(y)))P(xtM||ytM,en2(x,y))
 P(!in(i,j+1)||!in(j,xN+1),ei2(x,y))P(xtZ&&ytZ&&xt-yt,N(sup(&x,&y));insL(x,i,j,y))P(xt-yt,insL(cA(x),i,j,cA(y)))
 Az=an(xt,xn-j+i+yn);Mc(zV,xV,i*xW);Mc(zV+i*xW,yV,yn*xW);Mc(zV+(i+yn)*xW,xV+j*xW,(xn-j)*xW);
 I(xtR,I(xr-1,mRn(i,xA);mRn(xn-j,xA+j))E(mrn(j-i,xA+i);AN(0,x))I(yr-1,mRa(y))E(AN(0,y)))x(y(z)))
AA(ins,P(n-3,en8(a,n))Ax=*a,y=a[1],z=a[2];Yz(Li=gl(y);insL(x,i,i,z))YZ(P(yN-2,el2(x,z(y)))Li=gl(ii(y,0)),j=gl(las(y));insL(x,i,j,z))et2(x,z(y)))
