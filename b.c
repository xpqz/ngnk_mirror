#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
enum{bu,bv=32,bs=64,bg=80,bd=96,ba=112,bP,bx,bX,bm,bM,bG,bS,bl,bL,bz,bj,bo,bp,bc};                  //opcodes
S OCA di={                           1, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1         };                  //extra bytes after opcode
S OCA ds={                           1, 1,-1,-2,-1,-1, 1,-1, 1, 0,-1, 0, 1,-1   };                  //stack size delta
#define h(a) {b[nb]=a;m[nb]=o;nb+=nb<255;}                                                          //append byte
#define Nc(a) N(cc(a,o));                                                                           //append "load constant" instruction; return on error
#define Nr(a...) {I r_=cr(a);P(r_-OK,r_);}                                                          //compile rvalue; return on error
#define Nl(a...) {I r_=cl(a);P(r_-OK,r_);}                                                          //compile lvalue; return on error
#define OK -1                                                                                       //returned by cl() and cr() on success
S A u,cr(A,I);                                                                                      //u:lambda object (src;bytecode;map;locals;constants..)
S UC*b,*m;S I nb,nl,l[16],lu[16];                                                                   //b,nb:bytecode, m:sourcemap, l,nl:locals symbols, lu:last usages of locals
SN I il(Iv)_(Li=fI(l,nl,v);P(i<0,-1)lu[i]=nb;i)                                                     //index of a local  variable
SN I ig(Lv)_(                                                                                       //index of a global variable
 I(*gp,Qs=qs(&v);
  I(!strchr(s,'.')&&id0(*s),
   Nm=SL(gp),n=SL(s);P(m+n+3>SZ gp,-1)gp[m]='.';MC(gp+m+1,s,n+1);v=(I)sym(gp);gp[m]=0))
 Li=fI(gk,gn,v);P(i>=0,i)P(gn-(UC)gn,-1)gk[gn]=v;gv[gn]=0;gn++)
S I cc(Ax/*1*/,I o)_(                                                                               //append a "load constant" instruction
 Ay=u;Nn=yn,i=4;W(i<n,B(mtc_(x,ya),x=x(0))i++)I(x,P(bc+i-4>255,ez1(x))uq(x))h(bc+i-4)1)
S A cl(Ax,Ay/*00*/,I r)_(Q(xx==av||_t(xx)==tu)Iv=_v(xx),o=xo;                                       //compile lvalue
 Y(RsS(I(yts,P(xx==av&&nl,Li=il(yv);I(i<0,i=nl;P(i>15,ez0())Iv=yv;l[nl++]=v;lu[i]=nb)
                              h(bs+i)I(r,h(bg+i))OK)
             Ii=il(yv);P(i>=0,h(bm)h(i)h(v)I(r,h(bg+i))OK))
       E(P(yn==1,o)y=jS(yR))
       Ii=ig(yv);P(i<0,ez0())h(v?bM:bS)h(i)I(v,h(v))I(r,h(bG)h(i))OK)
   RA(In=yn-1;P(n-(UC)n||n<1,o)Az=yx;
      P(z==MKL&&(xx==av||_t(xx)==tu),h(bL)h(n)i(n,Nl(x,yA[i+1],0))I(!r,h(bp))OK)
      ZsS(I(ztS,z=jS(zR))i(n,Nr(yA[n-i],1))h(bl)h(n)Ii=il(zv);P(i<0,Nc(z)h(bX)h(v)I(!r,h(bp))OK)
          h(bx)h(i)h(v)I(!r,h(bp))OK)o))o)
S B cv(Lv)_(Qs=qs(&v);Nn=SL(s);n&&s[n-1]==':')                                                      //does symbol v end with a ":"?
S A cr(Ax/*0*/,I r)_(I o=xo;                                                                        //compile rvalue
 XsS(I(xts,Ii=il(xv);P(i>=0,h(bg+i)I(!r,h(bp))OK)P(xv=='o',I(r,h(bo))OK))                           // x.y.z         variable (possibly qualified)
     E(P(xn==1,I(r,Nc(ii(x,0)))OK)x=jS(xR))                                                         //
     Ii=ig(xv);P(i<0,ez0())h(bG)h(i)I(!r,h(bp))OK)                                                  //
 P(!xtA||!xn,I(r,Nc(x-PLH?xR:au))OK)                                                                // ()            constant
 Nn=xn;Ay=xx;                                                                                       //
 P(y==PLH,i(n-1,Nr(xA[i+1],i==n-2&&r))OK)                                                           // [x;y]         block
 P(n<2,I(r,Nc(yR))OK)                                                                               //               quote
 P(n==3&&(ytu||y==av)&&_tsSA(xy),Nr(xz,1);Nl(x,xy,1);I(!r,h(bp))OK)                                 // x+:y          modified assignment
 P(n==3&&yts&&cv(yv)&&_tsSA(xy),Nr(xz,1);Nr(xy,1);Nr(cS(drp(-1,str(y))),1);h(ba)h(2)Az=aA1(au);     // x√:y          modified assignment (unicode verbs)
  Nl(z,xy,1);z(0);I(!r,h(bp))OK)                                                                    //
 P(n>3&&(y==av||y==CST),n--;I p[n];A*a=xA;i(n&~1,Nr(*++a,1);h(i&1?bj:bz)p[i]=nb;h(0))               // $[x;y;z]      cond
  Nr(n&1?*++a:au,1);                                                                                //
  i(n&~1,I d=(i&1?nb-1:p[i+1])-p[i];I(i&1,Ij=(n&~1)-1;W(i<j&&d>255,d=p[j]-1-p[i];j-=2))             //
   P(d>255,ez0())b[p[i]]=d)                                                                         //
  I(!r,h(bp))OK)                                                                                    //
 I(n==2&&y==FIR,Az=xy;I(ztA&&zn==2,Q(REV+1==ASC)Q(ASC+1==DSC)Q(LAS+1==IMN)Q(IMN+1==IMX)             // *|x *<x *>x   recognized idioms
  P(zx-REV<3u,Nr(zy,1);h(bu+zx-REV+LAS-au)I(!r,h(bp))OK)))                                          //
 I p=0;i(n-1,Az=xA[n-1-i];I(z==PLH,p=1;Nc(PLH))E(Nr(z,1)))                                          //
 I(p,Nr(xx,1);h(bP)h(n-1))                                                                          // x[;y]         projection
 J(y==MKL,n--;P(n-(UC)n,o);h(bl)h(n))                                                               // (x;y)         list constructor
 J(n==2&&ytu,h(bu+yv))                                                                              // +x            monadic primitive verb
 J(n==3&&ytv,h(bv+yv))                                                                              // x+y           dyadic  primitive verb
 J(n>9,ez0();_(o))                                                                                  // 'limit        too many arguments
 E(Nr(xx,1);h(ba)h(n-1))                                                                            // x[y]          generic application
 I(!r,h(bp))OK)                                                                                     //
S A2(c2,/*00*/P(xtw&&!ytsSA,1)/*P(x==TIL&&ytZ&&yn<4,i(yn,P(!IN(gl(ii(y,i)),101),0))1)*/0)           //constant folding
S A3(c3,/*000*/P(ADD<=x&&x<=MUL&&ytzZ&&ztzZ&&(ytt||ztt||yn==zn)&&MAX(xN,yN)<101,1)0)                //constant folding
S A1(qt,/*1*/xtsSA?enl(x):x)
S A1(cf,XA(P(xx==MKL,i(xn,Ay=xa;YsSA(x))aA1(drp(1,x)))                                              //constant folding
           P(xn==2?c2(xx,xy):xn==3?c3(xx,xy,xz):0,qt(N(val(x))))
           P(!xn,x)
           Ay=rsz(xn,au);i(xn,ya=cf(xa);xa=au;P(!ya,die("CF")))AO(xo,x(y)))x)
S I mxs(Ii,I s)_(I r=s;                                                                             //max stack
 W(1,UC c=b[i++];Q(s>=0)r=MAX(r,s);P(!c,r)
     s+=(c-ba<L(ds)?ds[c-ba]:c>=bc||c-bg<16u||c-bd<16u?1:c-bs<16u||c-bv<32u?-1:0)+
        ((c==bL)-(c==bl||c==ba||c==bP))*b[i];
     i+=(c-ba<L(di)?di[c-ba]:0)+(c==bj)*b[i];
     I(c==bz,r=MAX(r,mxs(i+b[i-1],s))))r)
S I shy(Ax/*0*/)_(                                                                                  //is the last expression in the tree x an assignment?
 !xtA?0:xn&&xx==PLH?shy(xA[xn-1]):xn==3&&(xx==av||_t(xx)==tu||(_t(xx)==ts&&cv(_v(xx))))&&_tsSA(xy))
A3(cpl,/*111*/UC b0[256],m0[256];b=b0;m=m0;nb=1;MS(lu,-1,SZ lu);                                    //compile(x:src,y:ast,z:locals)
 I(z,nl=zn;MC(l,zV,4*nl);z(0))E(nl=0)Ik=nl;u=aA(4);ux=x;uy=uz=uA[3]=au;
 y=Nu(cf(y));I s=shy(y),r=cr(y,1);y(0);P(r-OK,ec0();eS(ux,r);u(0))I o=0;I(s,Nu(cc(au,o)))h(bu)
 P(nb>=255||un>255-bc+4,eS(ux,0);u(0);ez0())i(nl,Ij=lu[i];I(j>=0&&b[j]==bg,b[j]=bd))
 *b=mxs(1,0);*m=-1;uy=aCn(b,nb);uz=aCn(m,nb);uA[3]=aV(tS,nl,l);AK(k,AT(to,u)))

#define U(x,a...) I(!(x),a;goto l)
AX(run,Q(xto)P(n-xk,er8(a,n))S I d;P(++d>2048,es8(a,n))UC*b=_V(xy),c,ns=*b++,nl=_n(xA[3]);          //virtual machine
 A t[ns+nl],*s=t+ns,*l=s;MS(t,0,SZ t);MC(l,a,8*n);                                                  //
 W((c=*b++),                                                                                        //             |BYTES |          STACK          |         EFFECT
  I(c>=bc,*--s=_R(xA[c-bc+4]))                                                                      //load constant|bc+i  |.. -> .. consts[i]       |
  J(c>=ba,SW(c,D(Q(0))                                                                              //             |      |                         |
   C2(ba,bP,Nn=*b++;Ax=*s,*p=s+1;s+=n;U(*s=x((c==ba?_8:prj)(x,p,n))))                               //apply|project|ba,n  |.. z y x f -> .. f[x;y;z]|
   C(bx,A*p=l+*b++,x=*p,y=*s++;x=*p=d4(x?x:au,y,av+*b++,*s);mr(*s);U(x,*s=y(0))U(*s=dot(x,y)))      //             |bx,l,d|.. x -> .. r             |r:locals[l]:dyads[d][locals[l];x]
   C(bX,Ax=*s++,y=*s++,z=*s;U(x=z(d8(A(x,y,av+*b++,z),4)),*s=y(0))U(*s=x(dot(x,y))))                //             |bX,d  |.. x -> .. r             |r:.[x;y;dyads[d];z]
   C2(bm,bM,A*p=(c==bm?l:gv)+*b++,x=*p;U(x,*s=ev1(*s))Ay=v2[*b++](x,*s++);U(y,*--s=0)*p=x(y))       //modified asgn|bm,l,d|.. x -> ..               |locals[l]:dyads[d][locals[l];x]
   C(bG,Ax=*--s=gv[*b++];U(x,ev0())xR)                                                              //get global   |bG,g  |.. -> .. globals[g]      |
   C(bS,A*p=gv+*b++,x=*s++,y=*p;*p=y?y(x):x)                                                        //set global   |bS,g  |.. x -> ..               |globals[g]:x
   C(bl,Nn=*b++;s+=n-1;*s=sqz(aV(tA,n,s-n+1)))                                                      //make list    |bl,n  |.. z y x -> .. (x;y;z)   |
   C(bL,Nn=*b++;Ax=*s;U(xtt||xN==n,*s=el1(x))i(n,*--s=ii(x,n-1-i)))                                 //break list   |bL,n  |.. x -> .. x[0] x[1] x[2]|
   C(bj,Nn=*b++;b+=n)                                                                               //jump         |bj,a  |.. x -> ..               |PC+:a
   C(bz,Nn=*b++;b+=n*!tru(*s++))                                                                    //branch       |bz,a  |.. x -> ..               |if x is falsy, PC+:a
   C(bo,*--s=xR)                                                                                    //recur        |bo    |.. -> .. o               |o is the current lambda
   C(bp,mr(*s++))))                                                                                 //pop          |bp    |.. x -> ..               |
  J(c>=bs,A*v=l+c%16,x=*v;                                                                          //             |      |                         |
   I(c>=bd,*--s=x;*v=0)                                                                             //delete local |bd+l  |.. -> .. locals[l]       |locals[l]:NULL (freed)
   J(c>=bg,U(*--s=x)xR)                                                                             //get local    |bg+l  |.. -> .. locals[l]       |
   E(Q(c>=bs)Ay=*s++;*v=x?x(y):y))                                                                  //set local    |bs+l  |.. x -> ..               |locals[l]:x
  J(c>=bv,Ax=*s++;U(*s=x(v2[c-bv](x,*s))))                                                          //dyadic  verb |bv+d  |.. y x -> dyads[d][x;y]  |
  E(U(*s=v1[c](*s))))                                                                               //monadic verb |bu+m  |.. x -> monads[m][x]     |
 l:I(!*s,eS(xx,(UC)_C(xz)[(C*)b-1-_C(xy)]))i(t+ns+nl-s-1,Ax=s[i+1];I(x,mr(x)))d--;*s)
