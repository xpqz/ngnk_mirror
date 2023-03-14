#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
enum{bu,bv=32,bs=64,bg=72,bd=80,ba=88,bP,bi,bx,bI,bX,bm,bM,bG,bS,bl,bL,bz,bj,bo,bp,bc};             //opcodes
S OCA di={                          1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1         };             //extra bytes after opcode
S OCA ds={                          1, 1,-2,-1,-3,-2,-1,-1, 1,-1, 1, 0,-1, 0, 1,-1   };             //stack size delta
#define h(a) {b[nb]=a;m[nb]=o;nb+=nb<255;}                                                          //append byte
#define Nc(a) N(cc(a,o));                                                                           //append "load constant" instruction; return on error
#define Nr(a...) {I r_=cr(a);P(r_-OK,r_);}                                                          //compile rvalue; return on error
#define Nl(a...) {I r_=cl(a);P(r_-OK,r_);}                                                          //compile lvalue; return on error
#define OK -1
#define fl uA[3]                                                                                    //names of locals
S A u,cr(A,I);S UC*b,*m;S I nb,lu[8];                                                               //compiler state (b,nb:bytecode, m:sourcemap, lu:last usages of locals)
SN I il(Iv)_(Li=fI(_V(fl),_n(fl),v);P(i>=0,lu[i]=nb;i)-1)                                           //index of a local  variable
SN I ig(Lv)_(                                                                                       //index of a global variable
 I(*gp,Qs=qs(&v);I(!strchr(s,'.'),Nm=SL(gp),n=SL(s);P(m+n+3>SZ gp,-1)
                                  gp[m]='.';MC(gp+m+1,s,n+1);v=(I)sym(gp);gp[m]=0))
 Li=fI(gk,gn,v);P(i>=0,i)P(gn-(UC)gn,-1)gk[gn]=v;gv[gn]=0;gn++)
S I cc(Ax/*1*/,I o)_(                                                                               //append "load constant" instruction
 Ay=u;Nn=yn,i=5;W(i<n,B(mtc_(x,ya),x=x(0))i++)I(x,P(bc+i-5>255,ez1(x))uq(x))h(bc+i-5)1)
S A cl(Ax,Ay/*00*/,I r)_(Q(xx==av||_t(xx)==tu)Iv=_v(xx),o=xo;                                       //compile lvalue
 YsS(I(yts,P(xx==av&&_n(fl),Li=il(yv);I(i<0,i=_n(fl);P(i>15,ez0())Iv=yv;fl=apv(fl,&v);lu[i]=nb)
                            h(bs+i)I(r,h(bg+i))OK)
           Ii=il(yv);P(i>=0,h(bm)h(i)h(v)I(r,h(bg+i))OK))
     E(P(yn==1,o)y=jS(yR))
     Ii=ig(yv);P(i<0,ez0())h(v?bM:bS)h(i)I(v,h(v))I(r,h(bG)h(i))OK)
 YA(In=yn-1;P(n-(UC)n||n<1,o)Az=yx;
    P(z==MKL&&(xx==av||_t(xx)==tu),h(bL)h(n)i(n,Nl(x,yA[i+1],0))I(!r,h(bp))OK)
    ZsS(I(ztS,z=jS(zR))i(n,Nr(yA[n-i],1))h(bl)h(n)Ii=il(zv);P(i<0,Nc(z)h(r?bX:bI)h(v)OK)
        h(r?bx:bi)h(i)h(v)OK)
    o)o)
S I cv(Lv)_(Qs=qs(&v);Nn=SL(s);n&&s[n-1]==':')                                                      //does symbol v end with a ":"?
S A cr(Ax/*0*/,I r)_(I o=xo;                                                                        //compile rvalue
 XsS(I(xts,Ii=il(xv);P(i>=0,h(bg+i)I(!r,h(bp))OK)P(xv=='o',I(r,h(bo))OK))
     E(P(xn==1,I(r,Nc(ii(x,0)))OK)x=jS(xR))
     Ii=ig(xv);P(i<0,ez0())h(bG)h(i)I(!r,h(bp))OK)
 P(!xtA||!xn,I(r,Nc(x-PLH?xR:au))OK)
 Nn=xn;Ay=xx;
 P(y==PLH,i(n-1,Nr(xA[i+1],i==n-2&&r))OK)
 P(n<2,I(r,Nc(yR))OK)
 P(n==3&&(ytu||y==av)&&_tsSA(xy),Nr(xz,1);Nl(x,xy,1);I(!r,h(bp))OK)
 P(n==3&&yts&&cv(yv)&&_tsSA(xy),Nr(xz,1);Nr(xy,1);Nr(cS(drp(-1,str(y))),1);h(ba)h(2)Az=aA1(au);
  Nl(z,xy,1);z(0);I(!r,h(bp))OK)
 P(n>3&&y==CST,n--;I p[n];A*a=xA;i(n&~1,Nr(*++a,1);h(i&1?bj:bz)p[i]=nb;h(0))Nr(n&1?*++a:au,1);
  i(n&~1,I d=(i&1?nb-1:p[i+1])-p[i];I(i&1,Ij=(n&~1)-1;W(i<j&&d>255,d=p[j]-1-p[i];j-=2))
   P(d>255,ez0())b[p[i]]=d)
  I(!r,h(bp))OK)
 I(n==2&&y==FIR,Az=xy;I(ztA&&zn==2,Q(REV+1==ASC)Q(ASC+1==DSC)Q(LAS+1==IMN)Q(IMN+1==IMX)
  P(zx-REV<3u,Nr(zy,1);h(bu+zx-REV+LAS-au)I(!r,h(bp))OK)))
 I p=0;i(n-1,Az=xA[n-1-i];I(z==PLH,p=1;Nc(PLH))E(Nr(z,1)))
 I(p,Nr(xx,1);h(bP)h(n-1))
 J(y==MKL,n--;P(n-(UC)n,o);h(bl)h(n))
 J(n==2&&ytu,h(bu+yv))
 J(n==3&&ytv,h(bv+yv))
 J(n>9,ez0();_(o))
 E(Nr(xx,1);h(ba)h(n-1))
 I(!r,h(bp))OK)
S A2(c2,/*00*/P(xtw&&!ytsSA,1)/*P(x==TIL&&ytZ&&yn<4,i(yn,P(!IN(gl(ii(y,i)),101),0))1)*/0)           //constant folding
S A3(c3,/*000*/P(ADD<=x&&x<=MUL&&ytzZ&&ztzZ&&(ytt||ztt||yn==zn)&&MAX(xN,yN)<101,1)0)                //constant folding
S A1(qt,/*1*/xtsSA?enl(x):x)
S A1(cf,XA(P(xx==MKL,i(xn,Ay=xa;YsSA(x))aA1(drp(1,x)))                                              //constant folding
           P(xn==2?c2(xx,xy):xn==3?c3(xx,xy,xz):0,qt(N(val(x))))
           P(!xn,x)
           Ay=rsz(xn,au);i(xn,ya=cf(xa);xa=au;P(!ya,die("CF")))AO(xo,x(y)))x)
S I mxs(Ii,I s)_(I r=s;                                                                             //max stack
 W(1,UC c=b[i++];Q(s>=0)r=MAX(r,s);P(!c,r)
     s+=(c-ba<L(ds)?ds[c-ba]:c>=bc||c-bg<8u||c-bd<8u?1:c-bs<8u||c-bv<32u?-1:0)+
        ((c==bL)-(c==bl||c==ba||c==bP))*b[i];
     i+=(c-ba<L(di)?di[c-ba]:0)+(c==bj)*b[i];
     I(c==bz,r=MAX(r,mxs(i+b[i-1],s))))r)
S I shy(Ax/*0*/)_(                                                                                  //set result to :: if last statement in ast is assignment
 !xtA?0:xn&&xx==PLH?shy(xA[xn-1]):xn==3&&(xx==av||_t(xx)==tu||(_t(xx)==ts&&cv(_v(xx))))&&_tsSA(xy))
A3(cpl,/*src,ast,loc*/UC b0[256],m0[256];b=b0;m=m0;nb=1;Ik=zn;u=aV(tA,5,A(x,au,au,z,au));           //compile
 MS(lu,-1,SZ lu);y=Nu(cf(y));I s=shy(y),r=cr(y,1);y(0);I o=0;I(s,Nc(au))h(bu)
 P(r-OK,ec0();eS(ux,r);u(0))P(_n(fl)>8||nb>=255||bc-4+un>255,eS(ux,0);u(0);ez0())
 i(8,Ij=lu[i];I(j>=0&&b[j]==bg,b[j]=bd))*b=mxs(1,0);*m=-1;uy=aCn(b,nb);uz=aCn(m,nb);AK(k,AT(to,u)))

#define U(x,a...) I(!(x),a;goto l)
AX(run,Q(xto)P(n-xk,er8(a,n))S I d;P(++d>2048,es8(a,n))UC*b=_V(xy),c,ns=*b++,nl=_n(xA[3]);          //virtual machine
 A t[ns+nl],*s=t+ns,*l=s;MS(t,0,SZ t);MC(l,a,8*n);
 W((c=*b++),
  I(c>=bc,*--s=_R(xA[c-bc+5]))                                                                      // * load constant
  J(c>=ba,SW(c,
   C2(ba,bP,Nn=*b++;Ax=*s,*p=s+1;s+=n;U(*s=x((c==ba?_8:prj)(x,p,n))))                               // * apply or project
   C(bi,Nn=*b++;Ax=l[n],y=*s++;I(!x,x=au)x=l[n]=y(d4(x,y,av+*b++,*s));mr(*s);U(x,*s=0)s++)
   C(bx,Nn=*b++;Ax=l[n],y=*s++;I(!x,x=au)x=l[n]=  d4(x,y,av+*b++,*s) ;mr(*s);U(x,*s=y(0))U(*s=dot(x,y)))
   C(bI,Nn=*b++;Ax=*s++,y=*s++,z=*s;U(x=y(z(d8(A(x,y,av+n,z),4))),*s=0)s++)
   C(bX,Nn=*b++;Ax=*s++,y=*s++,z=*s;U(x=  z(d8(A(x,y,av+n,z),4)),*s=y(0))U(*s=x(dot(x,y))))
   C2(bm,bM,Nn=*b++;A*v=(c==bm?l:gv)+n,x=*v;U(x,*s=ev1(*s))Ay=v2[*b++](x,*s++);U(y,*--s=0)*v=x(y))  // * modified assignment
   C(bG,Nn=*b++;Ax=*--s=gv[n];U(x,ev0())xR)                                                         // * get global
   C(bS,Nn=*b++;Ax=*s++,y=gv[n];gv[n]=y?y(x):x)                                                     // * set global
   C(bl,Nn=*b++;s+=n-1;*s=sqz(aV(tA,n,s-n+1)))                                                      // * create list
   C(bL,Nn=*b++;Ax=*s;U(xtt||xN==n,*s=el1(x))i(n,*--s=ii(x,n-1-i)))                                 // * destruct list
   C(bz,Nn=*b++;b+=n*!tru(*s++))                                                                    // * branch if zero
   C(bo,*--s=xR)                                                                                    // * recur
   C(bp,mr(*s++))                                                                                   // * pop
   C(bj,b+=*b+1)                                                                                    // * jump
   D(Q(0))))
  J(c>=bs,A*v=l+c%8,x=*v;
   I(c>=bd,*--s=x;*v=0)                                                                             // * delete local
   J(c>=bg,U(*--s=x)xR)                                                                             // * get local
   E(Q(c>=bs)Ay=*s++;*v=x?x(y):y))                                                                  // * set local
  J(c>=bv,Ax=*s++;U(*s=x(v2[c-bv](x,*s))))                                                          // * apply dyadic  verb
  E(U(*s=v1[c](*s))))                                                                               // * apply monadic verb
 l:I(!*s,eS(xx,(UC)_C(xz)[(C*)b-1-_C(xy)]))i(t+ns+nl-s-1,Ax=s[i+1];I(x,mr(x)))d--;/*Q(s==l-1)*/*s)
