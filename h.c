#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
SN A flt(Ax,Ay,Cb)_(Q(xtF);P(xK-1,er2(x,y))Ym(K("{y@&z~:/x y}",x,y,ai(!b)))x=Ny(ap1(x,yR));x=xN?Ny(cL(x)):x(oB);
 P(!xtt&&xN-yN,el2(x,y))Az=rshN(0,yR);i(yN,Ln=gl(get(x,i));B(b&&n-(UI)n,z=ed1(z))j(b?n:!n,zq(get(y,i))))x(y(z)))
S V rshV(OV*a,Nm,V*b,Nn){Q(m);Mc(b,a,min(m,n));W(2*m<=n,Mc(b+m,b,m);m*=2)I(n>m,Mc(b+m,b,n-m))}
ALA(rshN,Xt(rshN(n,enl(x)))
 XT(P(!xn,rshN(n,enl(fir(x))))P(n<0,n-NL?rev(rshN(-n,rev(x))):x)Ay=atn(xt,n);rshV(xV,xn*xW,yV,n*xW);x(ytA?sqz(mRa(y)):y))
 XM(Ay=kv(&x);aM(x,Nx(ear2(RSH,az(n),y))))Q(xtm)Ay=kv(&x);x=Ny(rshN(n,x));y=Nx(rshN(n,y));am(x,y))
S A slc(Ax/*0*/,Ni,Nj)_(Q(xtT&&i<=j&&i<=xn)Ay=atn(xt,j-i);Mc(yV,xV+i*xW,(j-i)*xW);XA(sqz(mRa(y)))y)
S ALA(chp,P(n<0,ed1(x))Lm=(xn+n-1)/n;Ay=aA(m);i(m,ya=slc(x,n*i,min(xn,n*i+n)))x(y))
S A shp(O L*s,Nn,Ax,Lm)_(Q(xtT)Q(xn)P(n<=0,en1(x))P(n==1,rshN(m**s,x))
 Ay=shp(s+1,n-1,x,m**s);P(!s[1],rshN(*s,enl(y)))chp(s[1],y))
S A rshL(O L*s,Nn,Ax)_(Xt(rshL(s,n,enl(x)))XmM(en1(x))P(!xn,rshL(s,n,enl(fir(x))))
 P(!n,fir(x))P(n>8,ez1(x))P(n==1&&*s==NL,x)I(n==2,P(*s==NL,chp(s[1],x))P(s[1]==NL,K("{((-x)!(#y)*!x)_y}",az(*s),x)))
 Lm=1;i(n,P(s[i]<0,ed1(x))m*=max(1,s[i]))x=N(rshN(m,x));shp(s,n,x,1))
A2(rsh,Xz(rshN(gl(x),y))XZ(x=Ny(cL(x));x(rshL(xL,xn,y)))XF(flt(x,y,1))XT(Ym(am(x,ap1(y,xR)))et2(x,y))et2(x,y))
ALA(drp,XT(n*=n!=NL;P(n<=0&&-n<=xn&&xr==1,I(xtA,mrn(-n,xA+xn+n))AN(xn+n,x))x(slc(x,max(0,min((L)xn,n)),max(0,min((L)xn,xn+n)))))
 Xm(Ay=kv(&x);am(Ny(drp(n,x)),Nx(drp(n,y))))XM(Ay=kv(&x);aM(x,Nx(eac2f(az(n),y,cut))))er1(x))
S AAL(rmv,XT(P(!in(i,xn),x)Ay=atn(xt,xn-1);Mc(yV,xV,i*xW);Mc(yV+i*xW,xV+i*xW+xW,(xn-i-1)*xW);I(xtA,y=sqz(mRa(y)))x(y))et1(x))
A2(cut,Xz(drp(gl(x),y))XF(flt(x,y,0))Xm(Az=kv(&x);y=fnd(xR,y);P(!y,x(z(0)))yR;am(Nz(cut(x,y)),Nx(cut(z,y))))
 YMT(K("{y$[|/0<':x,#y;`err\"domain\";x+!'1_-':x,#y]}",Ny(cL(x)),y))Ym(K("{((!y)^x)#y}",x,y))Yz(rmv(x,gl(y)))et2(x,y))
A1(enl,Xi(aV(tZ(xv),1,&x))XF(a1(x))XP(aV(TT[xt],1,&x))Xt(x(aV(TT[xt],1,xV)))Xm(Ay=kv(&x);aM(x,eac1f(y,enl)))a1(x))
A1(enla,Xmt(enl(x))x)
A2(cat,Xt(cat(enl(x),y))Yt(cat(x,enl(y)))
 P(xtmM&&ytmM,P(xtm&&ytm,Az=kv(&y);K("@[;;:;]",x,y,z))P(!mtc_(xx,yx),ed2(x,y))
              Az=eac2f(_R(xy),_R(yy),cat);x(y(z?aM(_R(xx),z):0)))
 P(!yn,y(x))P(!xn,x(y))I(xtZ&&ytzZ,N(sup(&x,&y)))I(xt-yt,x=blw(x);y=blw(y))
 Nm=xn,n=yn;x=room(m+n,x);Mc(xV+m*xW,yV,n*xW);y(!ytA?0:yr-1?mRa(y):AN(0,y));x)
A2(apd,Q(xtMT);
 XM(P(!ytm||!mtc_(xx,yx),apd(Ny(blw(x)),y))x=mut(x);Az=xy=mut(xy);i(zn,_q(za,get(yy,i)))y(x))
 Nn=xn;P(!n,enl(x(y)))
 P(xtB&&yti&&yv==(B)yv||xtC&&ytc,x=room(n+1,x);xB[n]=yv;x)
 P(xtH&&yti&&yv==(H)yv,          x=room(n+1,x);xH[n]=yv;x)
 P(xtI&&yti||xtS&&yts,           x=room(n+1,x);xI[n]=yv;x)
 P(xtL&&yti,                     x=room(n+1,x);xL[n]=yv;x)
 P(xtL&&ytl||xtD&&ytd,           x=room(n+1,x);xL[n]=gl(y);x)
 P(xtZ&&ytz,N(sup(&x,&y));apd(x,y))
 P(!xtA&&(!ytt||xt-TT[yt]),cat(x,enl(y)))
 Lv=xtA?(L)y:gl(y);apv(x,&v))
A apv(Ax,OV*v )_(Q(xtT);Nn=xn;x=room(n+1,x);Mc(xV+n*xW,v,xW);x)
A apc(Ax,Cc   )_(Q(xtC);Nn=xn;x=room(n+1,x);xC[n]=c;x)
A cts(Ax,Qs,Nm)_(Q(xtC);Nn=xn;x=room(n+m,x);Mc(xV+n,s,m);x)
S V mRn(Nn,OA*a){i(n,_R(a[i]))}
S A insL(Ax,Li,Ln,Ay)_(Xmt(et2(x,y))Ymt(insL(x,i,n,enl(y)))P(xtM||ytM,en2(x,y))
 P(xtZ&&ytZ&&xt-yt,V(f,cT[max(xt,yt)])insL(f(x),i,n,f(y)))P(xt-yt,insL(blw(x),i,n,blw(y)))
 P(!in(i,xN+1)||!in(n,xN+1-i),el2(x,y))
 Az=atn(xt,xn-n+yn);Mc(zV,xV,i*xW);Mc(zV+i*xW,yV,yn*xW);Mc(zV+(i+yn)*xW,xV+(i+n)*xW,(xn-n-i)*xW);
 I(xtR,I(xr-1,mRn(i,xA);mRn(xn-i-n,xA+i+n))E(mrn(n,xA+i);AN(0,x))I(yr-1,mRa(y))E(AN(0,y)))x(y(z)))
S A3(ins3,Yz(insL(x,gl(y),0,z))YZ(P(yN-2,z(el2(x,y)))Ln=gl(get(y,1));insL(x,gl(fir(y)),n,z))z(et2(x,y)))
A1(ins,XA(P(xn-3,en1(x))x=AN(0,mut(x));x(ins3(xx,xy,xz)))et1(x))
