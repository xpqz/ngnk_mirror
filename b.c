#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define C6(u,v,w,x,y,z,a...) case u:case v:case w:case x:case y:case z:{a;break;}
#define C16(x,a...) case x:case x+1:case x+2:case x+3:case x+4:case x+5:case x+6:case x+7:case x+8:case x+9:case x+10:case x+11:case x+12:case x+13:case x+14:case x+15:{a;break;}
#define C32(x,a...) C16(x,C16(x+16,a))
#define U(x,a...) I(!(x),a;goto l)
#define CO 4 //offset of constants in a function object
#define n1 -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
#define p1  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
enum {bu,  bv=32,bs=64,bg=80,bd=96,ba=112,bp,bm,bM,bx,bX,by,bY,bG,bS,bl,bL,bz,bj,bo,bP,bV,bc};      //opcodes
S O C di[]={                      [ba]= 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 2, 0},      //extra bytes after opcode
ds[]={[bv]=n1,n1,n1,   p1,   p1,  [ba]= 1, 1,-1,-1,-1,-1,-1,-1, 1,-1, 1, 0,-1, 0, 1,-1, 0, 1},      //stack size delta
ks[]={                            [ba]=-1,-1, 0, 0, 0, 0, 0, 0, 0, 0,-1, 1, 0, 0, 0, 0, 0, 0};      //stack size delta (coefficient for the next byte)
AX(run,Q(xto)S I d;P(++d>2048,es8(a,n))P(n-xk,er8(a,n))UC*b=_V(xy),c,nl=_n(xA[3]);A l[nl+*b++],*s=l+L(l);MS(l,0,SZ l);MC(l,a,8*n);//virtual machine
 W((c=*b++),SW(c,                                                                                   //          |BYTES |          STACK        |         EFFECT
  C32(bu,U(*s=v1[c-bu](*s)))                                                                        //monad     |bu+m  |.. x -> monads[m][x]   |
  C32(bv,Ax=*s++;U(*s=x(v2[c-bv](x,*s))))                                                           //dyad      |bv+d  |.. y x -> dyads[d][x;y]|
  C16(bs,A*p=l+c%16;I(*p,mr(*p))*p=*s++)                                                            //set local |bs+i  |.. x -> ..             |locals[i]:x
  C16(bg,A*p=l+c%16,x=*p;U(*--s=x)xR)                                                               //get local |bg+i  |.. -> .. locals[i]     |
  C16(bd,A*p=l+c%16,x=*p;U(*--s=x)*p=0)                                                             //del local |bd+i  |.. -> .. locals[i]     |locals[i]:NULL (freed)
  C2(ba,bp,UC n=*b++;Ax=*s;s+=n;U(*s=x((c==ba?_8:prj)(x,s-n+1,n))))                                 //apply|proj|ba,n  |.. z y x -> .. x[y;z]  |
  C6(bm,bM,bx,bX,by,bY,A*p=(c&1?gv:l)+*b++,x=*p;U(x,*s=ev1(*s))Ay=*s++;                             //          |      |                       |
   I(c==bm||c==bM,y=v2[*b++](x,y);U(y,*--s=0)*p=x(y))                                               //mod asgn  |bm,i,d|.. x -> ..             |vars[i]:dyads[d][vars[i];x]
   E(x=*p=d4(x,y,av+*b++,*s);mr(*s);I(c==bx||c==bX,mr(y);U(x,*s=0)s++)                              //ind asgn  |bx,i,d|.. z y -> ..           |vars[i]:  .[vars[i];y;dyads[d];z]
                                    E(U(x,*s=y(0))U(*s=dot(x,y)))))                                 //ind asgn  |by,i,d|.. z y -> .. r         |vars[i]:r:.[vars[i];y;dyads[d];z]
  C(bG,Ax=*--s=gv[*b++];U(x,ev0())xR)                                                               //get global|bG,i  |.. -> .. globals[i]    |
  C(bS,A*p=gv+*b++,x=*s++,y=*p;*p=y?y(x):x)                                                         //set global|bS,i  |.. x -> ..             |globals[i]:x
  C(bl,UC n=*b++;s+=n-1;*s=sqz(aV(tA,n,s-n+1)))                                                     //list      |bl,n  |.. y x -> .. (x;y)     |
  C(bL,UC n=*b++;Ax=*s;U(xtt||xN==n,*s=el1(x))i(n,*--s=ii(x,n-1-i)))                                //unlist    |bL,n  |.. x -> .. x[0] x[1]   |
  C(bj,UC n=*b++;b+=n)                                                                              //jump      |bj,n  |.. x -> ..             |PC+:n
  C(bz,UC n=*b++;b+=n*!tru(*s++))                                                                   //branch    |bz,n  |.. x -> ..             |if x is falsy, PC+:n
  C(bo,*--s=xR)                                                                                     //recur     |bo    |.. -> .. o             |o is the current lambda
  C(bP,mr(*s++))                                                                                    //pop       |bP    |.. x -> ..             |
  C(bV,UC i=*b++;U(*s=v2[*b++](xA[i+CO],*s)))                                                       //const dyad|bV,i,d|.. x -> .. r           |r:dyads[d][consts[i];x]
  D(*--s=_R(xA[c-bc+CO]))))                                                                         //const     |bc+i  |.. -> .. consts[i]     |
 l:d--;Au=*s;MS(l+nl,0,s-l-nl+1<<3);i(L(l),Ax=l[i];I(x,mr(x)))I(!u,eS(xx,(UC)_C(xz)[(C*)b-1-_C(xy)]))u)

#define h(a) {b[nb]=a;m[nb]=o;nb+=nb<255;}                                                          //append byte
#define Nr(a...) {I r_=cr(a);P(r_-OK,r_);}                                                          //compile rvalue; return on error
#define Nl(a...) {I r_=cl(a);P(r_-OK,r_);}                                                          //compile lvalue; return on error
#define OK -1                                                                                       //returned by cl() and cr() on success
S A u;S UC b[256],m[256],lu[16];S I nb,nl,l[16],cr(A,B);                                            //u:lambda(src;b:bytes;m:map;l:locals;consts..)  lu:last usages
S B cd(Lv)_(Qs=qs(&v);!!strchr(s,'.'))                                                              //symbol contains '.'?
SN I il(Iv)_(P(cd(v),-1)Li=fI(l,nl,v);P(i<0,-1)lu[i]=nb;i)                                          //index of a local  variable (returns -1 if not found)
SN UC ig(Lv)_(Qs;                                                                                   //index of a global variable (allocates a new slot if not found)
 I(*gp&&!cd(v)&&id0(*s),Nm=SL(gp),n=SL(s);P(m+n+3>SZ gp,-1)gp[m]='.';MC(gp+m+1,s,n+1);v=(I)sym(gp);gp[m]=0)//prepend \d prefix
 Li=fI(gk,gn,v);P(i>=0,i)P(gn>=L(gv),0)gk[gn]=v;gv[gn]=0;gn++)
S B cm(Ax/*0*/){X(Rv(!xv)Ru(1)Rs(Lv=xv;Qs=qs(&v);Nn=SL(s);n&&s[n-1]==':')R_(0))}                    //is x a valid modifier? i.e. :: or primitive monad or symbol ending with ":"
S V cc(Ax/*1*/,I o){Nn=un,i=CO;W(i<n&&!mtc_(x,ua),i++)i<n?x(0):uq(x);h(i+bc-CO);}                   //append a "load constant" instruction
S I cl(Ax,Ay/*00*/,B r){Q(cm(xx))Iv=_v(xx),o=xo;                                                    //compile lvalue (x:assignmentNode,y:tree,r:wantResult)
 Y(R_(o)
   Rs(I(!cd(yv),Ii=il(yv);P(xx==av&&nl,I(i<0,i=nl;P(i>15,o)Iv=yv;l[nl++]=v;lu[i]=nb)h(bs+i)I(r,h(bg+i))OK)P(i>=0,h(bm)h(i)h(v)I(r,h(bg+i))OK))
      UC i=ig(yv);h(v?bM:bS)h(i)I(v,h(v))I(r,h(bG)h(i))OK)
   RA(In=yn-1;P(n>8u,o)Az=yx;P(z==MKL&&(xx==av||_t(xx)==tu),h(bL)h(n)i(n,Nl(x,yA[i+1],0))I(r,P(xx-av,o))E(h(bP))OK)
      Zs(i(n,Nr(yA[n-i],1))h(bl)h(n)Ii=il(zv);I(i>=0,h(r?by:bx))E(i=ig(zv);h(r?bY:bX))h(i)h(v)OK)o))}
S I cr(Ax/*0*/,B r)_(I o=xo;                                                                        //compile rvalue (x:tree,r:wantResult)
 XS(I(xts,Ii=il(xv);P(i>=0,h(bg+i)I(!r,h(bP))OK)P(xv=='o',I(r,h(bo))OK))                            // x.y      variable (possibly qualified)
    E(P(xn==1,I(r,cc(ii(x,0),o))OK)x=jS(xR))                                                        //
    h(bG)h(ig(xv))I(!r,h(bP))OK)                                                                    //
 Xs(Ii=il(xv);P(i>=0,h(bg+i)I(!r,h(bP))OK)P(xv=='o',I(r,h(bo))OK)h(bG)h(ig(xv))I(!r,h(bP))OK)       // x.y      variable (possibly qualified)
 P(!xtA||!xn,I(r,cc(x-GAP?xR:au,o))OK)                                                              // ()       constant
 Nn=xn;Ay=xx;                                                                                       //
 P(y==GAP,i(n-1,Nr(xA[i+1],i==n-2&&r))OK)                                                           // [x;y]    block
 P(n<2,I(r,cc(yR,o))OK)                                                                             // `a`b     quoted
 P(n==3&&cm(y)&&_tsSA(xy),P(!yts,Nr(xz,1);Nl(x,xy,r);OK)                                            // x+:y     modified assignment
  Nr(xz,1);Nr(xy,1);Nr(cS(drp(-1,str(y))),1);h(ba)h(2)Az=aA1(au);Nl(z,xy,r);z(0);OK)                // x⊕:y     modified assignment (unicode verbs)
 P(n>3&&(y==av||y==CST),n--;I p[n];A*a=xA;i(n&~1,Nr(*++a,1);h(i&1?bj:bz)p[i]=nb;h(0))               // :[x;y;z] cond
  Nr(n&1?*++a:au,1);i(n&~1,I d=(i&1?nb-1:p[i+1])-p[i];I(i&1,Ij=(n&~1)-1;W(i<j&&d>255,d=p[j]-1-p[i];j-=2))P(d>255,o)b[p[i]]=d)I(!r,h(bP))OK)
 I(n==2&&y==FIR,Az=xy;I(ztA&&zn==2,P(zx-REV<3u,Nr(zy,1);h(bu+zx-REV+LAS-au)I(!r,h(bP))OK)))         // *|x      recognized idioms
 I p=0;i(n-1,Az=xA[n-1-i];I(z-GAP,Nr(z,1))E(p=1;cc(GAP,o)))                                         //
 I(p,Nr(xx,1);h(bp)h(n-1))                                                                          // x[y;]    projection
 J(y==MKL,n--;P(n>255u,o)h(bl)h(n))                                                                 // (x;y)    list
 J(n==2&&ytu,h(bu+yv))                                                                              // +x       monad
 J(n==3&&ytv,I(!p&&!_tsSA(xy),Q(b[nb-1]>=bc);Ii=b[nb-1]-bc;b[nb-1]=bV;h(i)h(yv))E(h(bv+yv)))        // x+y      dyad
 E(P(n>9,o)Nr(xx,1)h(ba)h(n-1))                                                                     // x[y]     application
 I(!r,h(bP))OK)
S A1(qt,/*1*/xtsSA?enl(x):x)                                                                        //quote
S A2(c2,/*00*/P(xtw&&!ytsSA,1)/*P(x==TIL&&ytZ&&yn<4,i(yn,P(!IN(gl(ii(y,i)),101),0))1)*/0)           //constant folding
S A3(c3,/*000*/P(ADD<=x&&x<=MUL&&ytzZ&&ztzZ&&(ytt||ztt||yn==zn)&&MAX(xN,yN)<101,1)0)                //constant folding
S A1(cf,P(!xtA||!xn,x)P(xx==MKL,i(xn,Ay=xa;YsSA(x))qt(N(drp(1,x))))P(xn==2?c2(xx,xy):xn==3?c3(xx,xy,xz):0,qt(N(val(x))))Ay=rsz(xn,au);i(xn,ya=cf(xa);xa=au;P(!ya,die("CF")))AO(xo,x(y)))
S I mxs(Ii,I s)_(I r=s;W(1,UC c=MIN(bc,b[i++]);r=MAX(r,s);P(!c,r)s+=ds[c]+ks[c]*b[i];i+=di[c]+(c==bj)*b[i];I(c==bz,r=MAX(r,mxs(i+b[i-1],s))))r)//max stack
S B shy(Ax/*0*/)_(!xtA?0:xn&&xx==GAP?shy(xA[xn-1]):xn==3&&cm(xx)&&_tsSA(xy))                        //is last expr an assignment?
A3(cpl,/*111*/nb=1;MS(lu,-1,SZ lu);Ik=0;I(z,k=zn;MC(l,zV,CO*k);z(0))nl=k;u=aA(CO);y=Nx(cf(y));ux=x;uy=uz=uA[3]=au;B s=shy(y);I r=cr(y,!s);y(0);P(r-OK,ec0();eS(ux,r);u(0))
 I o=0;I(s,cc(au,o))P(un>255||nb>L(b)-2||nl>L(l)-2||gn>L(gv)-2,ez0();eS(ux,0);u(0))h(bu)P(nb>=255||un>255-bc+CO,eS(ux,0);u(0);ez0())
 i(nl,Ij=lu[i];I(j>=0&&b[j]==bg,b[j]=bd))*b=mxs(1,0);*m=-1;uy=aCn(b,nb);uz=aCn(m,nb);uA[3]=aV(tS,nl,l);AK(k,AT(to,u)))
