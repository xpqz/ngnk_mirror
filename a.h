#include<stdbool.h> // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include<string.h>
#include<unistd.h>
#include"g.h"
#define  DBG(a...)//a
#define    _(a...) {return({a;});}
#define  A(x,a...) (TY(x)[]){x,a}
#define  G(x,a...) ({S O TY(x)arr[]={x,a};arr;})
#define  W(x,a...) while(x){a;}
#define  B(x,a...) I(x,a;break)
#define  P(x,a...) I(x,_(a))
#define  I(x,a...) if(x){a;}
#define    J(a...) else I(a)
#define    E(a...) else{a;}
#define SW(x,a...) switch(x){a}
#define  C(x,a...) case x:{a;}break;
#define C2(x,a...) case x:C(a)
#define    D(a...) default:{a;}break;
#define    i(a...) IJ(i,a)
#define    j(a...) IJ(j,a)
#define    X(a...) SW(xt,a)
#define    Y(a...) SW(yt,a)
#define X1(f,a...) A1(f,X(a)0)
#define X2(f,a...) A2(f,X(a)0)
#define Y2(f,a...) A2(f,Y(a)0)
#define  R(x,a...) case x:_(a)
#define   R_(a...) default:_(a)
#define IJ(i,n,a...) for(TY(n)n_=(n),i=0;i<n_;i++){a;}
#define R1 R
#define O const
#define S static
#define SZ sizeof
#define L(x) (SZ(x)/SZ((x)[0]))
#define HD 32ll//header
#define NI __attribute__((noinline))
#define SN S NI
#define TD typedef
#define TY __typeof__
#define ST struct
#define RES restrict
#define SWP(x,y) {TY(x)t_=x;x=y;y=t_;}
#define NOP
#define M1(x) #x
#define M2(x) M1(x)
#define EX extern
#define Q(x) DBG(I(!(x),die(__FILE__":"M2(__LINE__)": "#x)))//assert
#define MS __builtin_memset
#define MC __builtin_memcpy
#define SL __builtin_strlen
#define MIN(x,y) ({TY(x) x_=(x),y_=(y);x_<y_?x_:y_;})
#define MAX(x,y) ({TY(x) x_=(x),y_=(y);x_>y_?x_:y_;})
#define IN(i,n) ((i)<(W)(n))
#define LH(x,y,z) ((y)-(x)<=(U)((z)-(x)))//between(low,high)
#define C09(c) LH('0',c,'9')
#define CAz(c) LH('a',(c)|32,'z')
#define CA9(c) (CAz(c)||C09(c))
#define S4(i,a,b,c,d)         SW(i,C(0,a)C(1,b)C(2,c)D(d))
#define S8(i,a,b,c,d,e,f,g,h) SW(i,C(0,a)C(1,b)C(2,c)C(3,d)C(4,e)C(5,f)C(6,g)D(h))
#define Ab8 A b[8];
#define Lij L i=*xL,j=xL[1];
#define FN(x,a...) TY(x NOP(a))

TD void V;TD bool B;TD char G,C;TD char unsigned UC;TD O C*Q;TD short H;TD unsigned short UH;TD int I;TD unsigned int U;TD long long L;TD double F;TD size_t N;
TD unsigned long long W,A,A0(),A1(A),A2(A,A),A3(A,A,A),A4(A,A,A,A),AA(O A*,U),AX(A,O A*,U);

#define A0(f,b...) A f(               )_(b)
#define A1(f,b...) A f(A x            )_(b)/*1*/
#define A2(f,b...) A f(A x,A y        )_(b)/*01*/
#define A3(f,b...) A f(A x,A y,A z    )_(b)
#define A4(f,b...) A f(A x,A y,A z,A u)_(b)
#define AX(f,b...) A f(A x,O A*a,U n  )_(b)/*0,1..1,n*/
#define AA(f,b...) A f(    O A*a,U n  )_(b)
A1 _R,aA1,asc,AZ,blw,cB,cG,cC,cF,cH,cI,cL,cS,dsc,enl,epr,err,fir,flp,flr,frk,gZ,gg,grp,hex,imx,imn,inv,jS,js0,js1,kcos,kexp,klog,ksin,kst,las,len,m0,m1,mkn,mRa,mr,mut,
 neg,not,nul,of0,of1,opn,out,prng,qkmp,qpri,qte,raz,rev,rs0,spl,sqr,sqz,sqzZ,str,str0,til,typ,u0c,u1c,u2c,unh,unq,val,whr;
A2 _1,aA2,aM,add,am,apd,ari,bin,cT,cat,cat10,cat11,dlr,dex,dot,dvd,eql,exc,crt,fil,fnd,gtn,hsh,ie,i1,ltn,mod,mnm,mtc,mul,mxm,que,sub,und,v0c,v1c,v2c;
A3 _2,aA3,arf,arp,ars,cpl,e2,r2,try;
A4 ara,a4,d4;
AX _8,e8,f8,prj,run;
AA a8,d8,ins,no8;
TD A TAU(U);TAU aA,aB,aG,aC,aF,aI,aL,aS;
TD A TAL(L);TAL al,az,cls,rndF;
TD A TALA(L,A);TALA drp,rnd,rsz;
TD A TAQ(Q);TAQ aCz,bsl,bsm,die,sym;
A room(U,A),ii(A,U),io(A,L),a2t(A,A,C),aA0(U),aE(L,L),af(F),aCm(Q,Q),aCn(Q,U),apc(A,C),apv(A,O V*),an(U,C),aV(C,U,O V*),cts(A,Q,U),e1f(A1,A),e2f(A2,A,A),err0(Q),evs(Q,B),
 k1(A*,Q,A),k2(A*,Q,A,A),k8(A*,Q,O A*,U),jc(C,A),jC(Q,U,A),kv(A*),r2f(A2,A,A),l2f(A2,A,A),mf(U,U,U),pk(Q*,C),pen(A,A1*),slc(A,U,U),unhC(Q,U),wdn(A,U,U,U),
 AT(W,A),AV(W,A),AW(C,A),AK(C,A),AO(UC,A),AN(U,A),w1(U,A,A),w2(U,A,A,A),w8(U,A,O A*,U),gns(U),*gp(A);
V cyc(V*,U,U),eS(A,U),eQ(Q,U,U),exit(I),hexC(Q,U,C*),kargs(I,Q*),kinit(),*memmem(O V*,N,O V*,N),mrn(U,O A*),mRn(U,O A*),repl(),tilV(V*,L,L,U);
B id0(UC),mtc_(A,A),tru(A);
C*sf(C*,L),*sl(C*,L),sup(A*,A*),tZ(L),*strchrnul(Q,I);
UC gi(A);
I qA(A,A),qf(F,F),rnk(A),sq(Q);
U _K(A),si(Q,C),_N(A),js_eval(C*,U,C*,U),fG(O G*,U,G),fI(O I*,U,I),fL(O L*,U,L);
L cfm(O A*,I),gl_(A),gl(A),iw(A,U,L),now(),pl(Q*),maxfZ(L,A),minfZ(L,A),addfZ(L,A),mulfZ(L,A),pf(Q*);
Q qs(O L*),pID(Q);
W pu(Q*);
F gf(A);
EX A1*v1[];EX A2*v2[];EX AA*v8[];EX A gv[256],cns,ce[],cn[],ci[2][5];EX I pg;EX TY(O C[])vc,TS,Tw,TW,TT,TX,Tk;EX Q*argv,*env,HEX;

//                       0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
//                         () !i ,1 ,i ,i ,i ,i ,f "" ,` +m X!  5  6 .6 "c" ` {} 1+ ++ +/ +:  +  / 2:
enum                    {tA=1,tE,tB,tG,tH,tI,tL,tF,tC,tS,tM,tm,ti,tl,tf,tc,ts,to,tp,tq,tr,tu,tv,tw,tx,tn};
#define T_ TY(O C[]) TS="0""A""I""I""I""I""I""I""F""C""S""M""m""i""i""f""c""s""o""p""q""r""u""v""w""x",/*type symbols              */\
                     TW={0,64,64, 1, 8,16,32,64,64, 8,32,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64},/*item size in bits         */\
                     Tw={0, 7, 6, 0, 3, 4, 5, 6, 6, 3, 5, 7, 7, 6, 6, 6, 6, 6, 7, 7, 7, 7, 6, 6, 6, 6},/*log2(size) or 7=reftypes  */\
                     TT={0,tA,tL,tB,tG,tH,tI,tL,tF,tC,tS,tM,tM,tI,tL,tF,tC,tS,tA,tA,tA,tA,tA,tA,tA,tA},/*corresponding list type   */\
                     TX={0,tG,tG,tG,tG,tH,tI,tL,tF,tG,tI,tG,tG, 0, 0,tF,tG,tI,tG,tG,tG,tG,tG,tG,tG,tG},/*type for arith conformance*/\
                     Tk="0""L""I""I""I""I""I""I""F""C""S""T""D""i""i""f""c""s""?""?""?""?""?""?""?""?";/*types for k.h             */
#define TP(t) ((1<<ti|1<<tc|1<<ts|1<<tu|1<<tv|1<<tw|1<<tx)>>(t)&1)
#define TU(t) ((t)>=to)

//tagged value bits (t=type,v=value,o=srcoffset,x=ptr):
// tttttttt........................vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv tc,ti,tu,tv,tw
// tttttttt................oooooooovvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv ts
// ttttttttkkkkkkkkxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx tx
// ................xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000 other

//header bytes: ....mmmm XXXXXXXX UtEo.... rrrrnnnn
#define _m(x) ((U*)_V(x))[-7]   //shadow refcount(only for debugging)
#define _X(x) _A(x)[-3]         //ptr to next chunk in bucket
#define _U(x) ((UC*)_V(x))[-16] //log2(bucket size in bytes)
#define _E(x) ((UC*)_V(x))[-14] //adverb(for tr)
#define _k(x) ((UC*)_V(x))[-13] //arity(for funcs)
#define _o(x) (_ts(x)?(UC)((x)>>32):_tP(x)?0u:((UC*)_V(x))[-13])//srcoffset(for symbol lists)
#define _r(x) ((U*)_V(x))[-2]   //refcount
#define _n(x) ((U*)_V(x))[-1]   //length
#define _v(x) (I)(x)            //value
#define _V(x) (V*)(x)           //ptr to data

#define _t0(x) ((x)>>56)        //type(tag)
#define _t1(x) _C(x)[-15]       //type(hdr)
#define _t(x) ({A x_=(x);C t=_t0(x_);t?t:_t1(x_);})//type
#define _tU(x) TU(_t(x))        // func?
#define _tP(x) TP(_t(x))        // packed?
#define _tR(x) (_w(x)==4)       // ref?
#define _tT(x) (_t(x)<tM)       // list?
#define _tZ(x) LH(tE,_t(x),tL)  // intlist?
#define _tt(x) (_t(x)>tm)       // atom?
#define _tz(x) LH(ti,_t(x),tl)  // intatom?
#define _w(x) (Tw[_t(x)]-3)     //log2(type width in bytes)
#define _W(x) (TW[_t(x)]>>3)    //type width in bytes
#define _Z(x) ((HD<<_U(x))-HD)  //chunk capacity in bytes
#define _q(x,y) (x=apd(x,y))    //append
#define M_(x,a...) {DBG(A t_=)m0(x);a;DBG(x=0;m1(t_));}//two-phase free()

#define Lt(t) (W)t<<56
#define ac(v) (Lt(tc)|(U)(C)(v))
#define ai(v) (Lt(ti)|(U)(v))
#define as(v) (Lt(ts)|(U)(v))
#define ax(v,k) (Lt(tx)|(W)(k)<<48|(W)(v)<<16>>16)
#define V_ A1*v1[]={sam,flp,neg,fir,sqr,til,whr,rev,asc,dsc,grp,not,enl,nul,len,flr,str,unq,typ,val,u0c,u1c,u2c,las,imn,imx,out};\
           A2*v2[]={dex,add,sub,mul,dvd,exc,mnm,mxm,ltn,gtn,eql,mtc,cat,crt,hsh,und,dlr,que, _1,dot,v0c,v1c,v2c,dex,dex,dex,dex};\
           AA*v8[]={no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,ins, a8, d8,no8,no8,no8,no8,no8,no8,no8};\
          O C vc[]={':','+','-','*','%','!','&','|','<','>','=','~',',','^','#','_','$','?','@','.','0','1','2','3','4','5','6',0};
enum         {au=Lt(tu),FLP,NEG,FIR,SQR,TIL,WHR,REV,ASC,DSC,GRP,NOT,ENL,NUL,LEN,FLR,STR,UNQ,TYP,VAL,U0C,U1C,U2C,LAS,IMN,IMX,OUT,
              av=Lt(tv),ADD,SUB,MUL,DVD,EXC,MNM,MXM,LTN,GTN,EQL,MTC,CAT,CRT,RSH,UND,DLR,QUE,AP1,DOT,V0C,V1C,V2C,V3C,V4C,MKL,GAP,
              aw=Lt(tw)};
#define NFL 0x7ff8000000000000ll
#define WFL 0x7ff0000000000000ll
#define NF (*(F*)A(NFL))
#define WF (*(F*)A(WFL))
#define NL (1ll<<63)
#define WL (~NL)
#define K(s,a...) ({S A f;k8(&f,s,A(a),L(A(a)));})
#define K1(s,x)   ({S A f;k1(&f,s,x);})
#define K2(s,x,y) ({S A f;k2(&f,s,x,y);})

#define ERR h(c,compile)h(d,domain)h(i,index)h(l,length)h(n,nyi)h(o,io)h(p,parse)h(r,rank)h(s,stack)h(t,type)h(v,value)h(z,limit)
#define h(t,m) A0 e##t##0;A1 e##t;AA e##t##8;
 ERR
#undef h
#define N(x,a...) ({A r_=(x);P(!r_,a;0)r_;})//error pass-through

#define ov(x) ov_(#x":",(L)(x))
#define oo os("["__FILE__":"M2(__LINE__)"]");
#define nop {asm volatile("fnop");}
U os(Q);W ov_(Q,W);
