#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
NI I mtc_(Ax,Ay/*00*/)_(P(x==y,1)P(xt==yt&&((1<<ti|1<<tc|1<<ts|1<<tu|1<<tv|1<<tw|1<<tx)&1<<xt),xv==yv)P(xtz&&ytz,gl_(x)==gl_(y))XE(x=gZ(xR);x(mtc_(x,y)))YE(mtc_(y,x))
 P(xtZ&&ytZ&&xt-yt&&xn==yn,Ct=MAX(xt,yt);x=cT[t](xR);y=cT[t](yR);x(y(!memcmp(xV,yV,xn*xW))))P(xt-yt||xtP||(xtr&&xE-yE)||xn-yn,0)
 P(!xtR||(LH(tG,xt,tS)&&xt==yt&&xn==yn),!memcmp(xV,yV,xn*xW))i(xn|!xn,P(!mtc_(xa,ya),0))1)
A2(mtc,/*01*/y(ai(mtc_(x,y))))
S O UL o=(-1ull>>12)-1;S L t(Lv)_(v^(UL)(v>>63)>>1);S A of_(A,I);
S L o0(Lv)_(t(v-o))S V of0LL(O L*a,L*r,Nn){i(n+3&~3,r[i]=o0(a[i]))}A1(of0,Q(xtlL);of_(x,0))
S L o1(Lv)_(t(v)+o)S V of1LL(O L*a,L*r,Nn){i(n+3&~3,r[i]=o1(a[i]))}A1(of1,Q(xtfF);of_(x,1))
S A of_(Ax,If)_(Nn=xn;Ct=xt+(tf-tl)*(1-2*f);Ay=xr-1?an(n,t):AT(t,xR);Mx((f?of1LL:of0LL)(xV,yV,n))y)
S I ql(Li,Lj)_(i<j?-1:i>j)
I qf(F u,Fv)_(ql(o1(*(L*)&u),o1(*(L*)&v)))
I qA(Ax,Ay/*00*/)_(P(mtc_(x,y),0)P(xtf&&ytf,qf(*xF,*yF))P(xtzc&&ytf,qf(gl_(x),*yF))P(xtf&&ytzc,qf(*xF,gl_(y)))
 Iv=TS[xt]-TS[yt];P(v,v)Xzc(ql(gl_(x),gl_(y)))Xf(qf(*xF,*yF))Xs(strcmp(qs(&x),qs(&y)))I(!xtP,Iv=ql(xn,yn);XT(i(MIN(xn,yn),Az=ii(x,i),u=ii(y,i);I d=qA(z,u);mr(z(u));P(d,d))v))ql(x,y))
S I*ascZ(O UC*v,UC*g,I*a,I*b,In,I w)_(UI c[257];tilV(a,0,n,2);j(w,MS(c,0,SZ c);i(n,g[i]=v[w*a[i]+j])i(n,c[g[i]+1]++)I(c[1+*g]-n,i(255,c[i+1]+=c[i])i(n,b[c[g[i]]++]=a[i])SWP(b,a)))a)
S A grdm(Ax/*1*/,A1 f)_(Ay=kv(&x);x(x1(Nx(f(y)))))

S V mrg(Ax/*0*/,I*p,I*q,I*b,I*d,Ik){I*r=p-q+b;W(1,I(qA(xA[*p],xA[*b])<k,*r++=*p++;P(p==q))E(*r++=*b++;B(b==d)))MC(r,p,q-p<<2);}//merge(k=1),mergeR(k=0)
S V cis(Ax/*0*/,I*p,Nn,I*r){i(n,Ij=0,k=i,v=p[i];Ay=xA[v];W(j<k,Im=j+k>>1;I(qA(y,xA[r[m]])<0,k=m)E(j=m+1))memmove(r+j+1,r+j,i-j<<2);r[j]=v)}//copying_insertionsort
S V cms(Ax/*0*/,I*p,Nn,I*r){P(n<17,cis(x,p,n,r);)Nm=n/2;cms(x,p+m,n-m,r+m);cms(x,p,m,p+m);mrg(x,p+m,p+2*m,r+m,r+n,1);}//copying_mergesort
A1(ascA,Nn=xn;Az=aI(n);I*p=zI;tilV(p,0,n,2);P(n<17,cis(x,p,n,p);x(z))Nm=n/2;Ay=aI(n-m);I*t=yI;cms(x,p+m,n-m,t);cms(x,p,m,p+n-m);mrg(x,t,t+n-m,p+n-m,p+n,0);x(y(z)))
X1(asc,Rt(opn(x))Rm(grdm(x,asc))RM(K1("{(!#x){x@<y x}/|.+x}",x))RS(asc(str(x)))RF(asc(of1(x)))RA(P(xn-(I)xn,ez1(x))ascA(x))RE(Lij x(0);aE(0,j-i))
 R_(P(xn-(I)xn,ez1(x))x=N(K1("{x-&/x}",x));Nn=xn;Ay=aC(n),z=aI(n),u=aI(n);Mx(My(u=ascZ(xV,yV,zV,uV,n,xW)==zV?u(z):z(u)))u))
X1(dsc,RMT(x=rev(asc(rev(x)));sub(ai(xN-1),x))Rm(grdm(x,dsc))Rz(cls(gl(x)))R_(et1(x)))
X1(grp,Rz(K1("=/:/2#,!:",x))R8(tA,tE,tH,tI,tL,tF,tS,tM,K1("{$[#x;(x[*'g])!g@:<g:(&~x~':x i)_i:<x;x!0#,!0]}",x))Rm(Ay=kv(&x);y=Nx(grp(y));yy=x(i1(x,yy));y)R_(et1(x))
 RGC(
  A r[256]={};UC b[256];UI nb=0;
  UI c[256]={};i(xn,UC v=xg;I(!c[v]++,b[nb++]=v))
  Az=aA(nb);i(nb,za=r[b[i]]=aI(c[b[i]]))I(!nb,*zA=oG)
  MS(c,0,SZ c);i(xn,UC v=xg;_I(r[v])[c[v]++]=i)
  x(am(aV(xt,nb,b),z))))
S A1(cSI,Q(xtS||xtI)Ct=tS^tI^xt;xr-1?x(aV(t,xn,xV)):AT(t,x))
X1(unq,RM(en1(x))Rm(unq(val(x)))RE(x)RS(cSI(unq(cSI(x))))Rz(rndF(gl(x)))R_(et1(x))RGC(G a[256]={};G r[256];Nn=0;Ct=xt;Mx(i(xn,UC v=xg;I(!a[v],a[v]=1;r[n++]=v)))aV(t,n,r))
 R5(tA,tH,tI,tL,tF,P(xn<2,x)P(xn<<xw<pg&&!xtA,K1("{x@&(x?x)=!#x}",x))K1("{x@i@<i@:&@[;0;:;1]@~~':x@i:<x}",x)))
