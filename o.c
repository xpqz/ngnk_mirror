#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
I mtc_(Ax,Ay/*00*/)_(P(x==y,1)P(xtz&&ytz,gl_(x)==gl_(y))P(xts&&yts,xv==yv)P(xtZ&&ytZ&&xt-yt&&xn==yn,xR;yR;sup(&x,&y);x(y(!MQ(xV,yV,xn*TW[xt]))))P(xt-yt||xtP||(xtr&&xE-yE)||xn-yn,0)
 P(!xtR,i(xn*xW,P(xc-yc,0))1)P(LH(tB,xt,tS)&&xt==yt&&xn==yn,!MQ(xV,yV,xn*TW[xt]))i(n1(xn),P(!mtc_(xa,ya),0))1)
A2(mtc,/*01*/y(ai(mtc_(x,y))))
S O UL o=(-1ull>>12)-1;S L t(Lv)_(v^(UL)(v>>63)>>1)
S L o1(Lv)_(t(v)+o)A1(of1,Q(xtfF);Ay=an(xt+tl-tf,xn);i(PD(xn,xL),yl=o1(xl))x-y?x(y):y)
S L o0(Lv)_(t(v-o))A1(of0,Q(xtlL);Ay=an(xt-tl+tf,xn);i(PD(xn,xL),yl=o0(xl))x-y?x(y):y)
S I ql(Li,Lj)_(i<j?-1:i>j)I qf(F u,Fv)_(ql(o1(*(L*)&u),o1(*(L*)&v)))I qA(Ax,Ay/*00*/)_(P(mtc_(x,y),0)P(xtf&&ytf,qf(*xF,*yF))P(xtzc&&ytf,qf(gl_(x),*yF))P(xtf&&ytzc,qf(*xF,gl_(y)))
 Iv=TS[xt]-TS[yt];P(v,v)Xzc(ql(gl_(x),gl_(y)))Xf(qf(*xF,*yF))Xs(SQ(qs(&x),qs(&y)))I(!xtP,Iv=ql(xn,yn);XT(i(min(xn,yn),Az=ii(x,i),u=ii(y,i);I d=qA(z,u);mr(z(u));P(d,d))v))ql(x,y))
S I*ascZ(O UC*v,UC*g,I*a,I*b,In,I w)_(UI c[257];tilV(a,n,2);j(w,Ms(c,0,SZ c);i(n,g[i]=v[w*a[i]+j])i(n,c[g[i]+1]++)I(c[1+*g]-n,i(255,c[i+1]+=c[i])i(n,b[c[g[i]]++]=a[i])SWP(b,a)))a)
S V mrg(OA*v,I*p,I*p1,I*q,I*q1,I*r){W(p<p1&&q<q1,*r++=qA(v[*p],v[*q])<=0?*p++:*q++)Mc(r,p<p1?p:q,p1-p+q1-q<<2);}
S V ascA(OA*v,I*a,In,I*b){P(n<2,I(n,*b=*a);)I m=n/2;ascA(v,a+m,n-m,b+m);ascA(v,a,m,a+m);mrg(v,a+m,a+2*m,b+m,b+n,b);}
S A grdm(Ax/*1*/,A1 f)_(Ay=kv(&x);x(x1(Nx(f(y)))))
A1(asc,Xt(opn(x))Xm(grdm(x,asc))XM(K1("{(!#x){x@<y x}/|.+x}",x))XS(asc(str(x)))XF(asc(of1(x)))In=xn;P(n-xn,ez1(x))
 XA(Im=n/2;OA*v=xA;Ay=aI(n),z=aI(n-m);I*a=yV,*b=zV;tilV(a,n,2);ascA(v,a+m,n-m,b);ascA(v,a,m,a+n-m);mrg(v,a+n-m,a+n,b,b+n-m,a);x(z(y)))
 x=N(K1("{x-&/x}",x));Ay=aC(n),z=aI(n),u=aI(n);xe(ye(ascZ(xV,yV,zV,uV,n,xW)==zV?u(z):z(u))))
A1(dsc,XMT(x=rev(asc(rev(x)));sub(ai(xN-1),x))Xm(grdm(x,dsc))Xz(cls(gl(x)))et1(x))
A1(grp,Xz(K1("{@[&x;;:;1]'!x}",x))Xt(et1(x))Xm(Ay=kv(&x);y=Nx(grp(y));yy=x(i1(x,yy));y)K1("{$[#x;(x[(!0),*'g])!g@:<g:(&(!0),~x~':x i)_i:<x;x!0#,!0]}",x))
