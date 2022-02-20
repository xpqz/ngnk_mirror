#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
I mtc_(Ax,Ay/*00*/)_(P(x==y,1)P(xtz&&ytz,gl_(x)==gl_(y))P(xts&&yts,xv==yv)
 P(xtZ&&ytZ&&xt-yt&&xn==yn,xR;yR;sup(&x,&y);x(y(!MQ(xV,yV,xn*TZ[xt]))))P(xt-yt||xtP||(xtr&&xE-yE)||xn-yn,0)
 P(!xtR,i(xn*xW,P(xc-yc,0))1)P(c3(tB,xt,tS)&&xt==yt&&xn==yn,!MQ(xV,yV,xn*TZ[xt]))i(xn,P(!mtc_(xa,ya),0))1)
A2(mtc,x(y(ai(mtc_(x,y)))))
S O UL o=(-1ull>>12)-1;S L t(Lv)_(v^(UL)(v>>63)>>1)S L ofp1(Lv)_(t(v)+o)S L ofp0(Lv)_(t(v-o))//ordered floating point
V OFP1(Ax/*!*/){Q(xtdD||xtlL)i(PD(xn,xL),xl=ofp1(xl))}L ofpd1(Dv)_(ofp1(*(L*)&v))
V OFP0(Ax/*!*/){Q(xtdD||xtlL)i(PD(xn,xL),xl=ofp0(xl))}D ofpd0(Lv)_(*(D*)T(ofp0(v)))
A1(ordD,Q(xtdD);x=AT(xt-tD+tL,mut(x));OFP1(x);x)
S C ordt(Ax)_(xtz?tl:xtZ?tL:xt)
S I qL(Li,Lj)_(i<j?-1:i>j)
I qD(D u,Dv)_(qL(ofpd1(u),ofpd1(v)))
I qA(Ax,Ay/*00*/)_(P(mtc_(x,y),0)P(xtd&&ytd,qD(*xD,*yD))P(xtzc&&ytd,qD(gl_(x),*yD))P(xtd&&ytzc,qD(*xD,gl_(y)))
 Iv=ordt(x)-ordt(y);P(v,v)Xzc(qL(gl_(x),gl_(y)))Xd(*xD<*yD?-1:*xD>*yD?1:0)Xs(SQ(qs(&x),qs(&y)))
 I(!xtP,Iv=qL(xn,yn);XT(i(min(xn,yn),Az=ii(x,i),u=ii(y,i);I d=qA(z,u);mr(z(u));P(d,d))v))qL(x,y))
S I*ascZ(O UC*v,UC*g,I*a,I*b,In,I w)_(UI c[257];tilV(a,n,2);
 j(w,Ms(c,0,SZ c);i(n,g[i]=v[w*a[i]+j])i(n,c[g[i]+1]++)I(c[1+*g]-n,i(255,c[i+1]+=c[i])i(n,b[c[g[i]]++]=a[i])SWP(b,a)))a)
S V mrg(OA*v,I*p,I*p1,I*q,I*q1,I*r){W(p<p1&&q<q1,*r++=qA(v[*p],v[*q])<=0?*p++:*q++)Mc(r,p<p1?p:q,p1-p+q1-q<<2);}
S V ascA(OA*v,I*a,In,I*b){P(n<2,I(n,*b=*a);)I m=n/2;ascA(v,a+m,n-m,b+m);ascA(v,a,m,a+m);mrg(v,a+m,a+2*m,b+m,b+n,b);}
A1(asc,Xt(opn(x))Xm(K("{(!x)@<. x}",x))XM(K("{(!#x){x@<y x}/|.+x}",x))XS(asc(str(x)))XD(asc(ordD(x)))In=xn;P(n-xn,ez1(x))
 XA(Im=n/2;OA*v=xA;Ay=aI(n),z=aI(n-m);I*a=yV,*b=zV;tilV(a,n,2);ascA(v,a+m,n-m,b);ascA(v,a,m,a+n-m);mrg(v,a+n-m,a+n,b,b+n-m,a);x(z(y)))
 x=N(K("{x-&/x}",x));Ay=aC(n),z=aI(n),u=aI(n);xe(ye(ascZ(xV,yV,zV,uV,n,xW)==zV?u(z):z(u))))
A1(dsc,XMT(x=rev(asc(rev(x)));sub(ai(xN-1),x))Xm(Ay=kv(&x);idx(x,Nx(dsc(y))))Xz(cls(gl(x)))et1(x))
A1(grp,Xz(K("{@[&x;;:;1]'!x}",x))Xt(et1(x))Xm(Ay=grp(kv(&x));yy=idx(x,yy);y)K("{x[(!0),*'g]!g@:<g:(&(!0),~x~':x i)_i:<x}",x))
A2(bin,/*01*/Xt(er1(y))Xm(_1(xx,bin(xy,y)))YMT(K("{x''y}",xR,y))
 Li=-1,j=xn;W(i+1<j,Lm=(i+j)/2;Az=ii(x,m);qA(y,z)<0?j=m:(i=m);z(0))y(az(i)))
