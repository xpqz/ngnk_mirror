// ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define DBG(a...) //a
#include<unistd.h>
#include"g.h"
#define   _(a...) {return({a;});}
#define W(x,a...) while(x){a;}
#define V(x,a...) TY(a)x=(a);
#define B(x,a...) I(x,a;break)
#define P(x,a...) I(x,_(a))
#define I(x,a...) if(x){a;}
#define T(x,a...) (TY(x)[]){x,a}
#define   J(a...) else I(a)
#define   E(a...) else{a;}
#define   A(a...) (A[]){a}
#define   i(a...) ij(i,a)
#define   j(a...) ij(j,a)
#define ij(i,n,a...) for(TY(n)n_=(n),i=0;i<n_;i++){a;}
#define   SW(x,a...) switch(x){a}
#define    C(x,a...) case x:{a;}break;
#define C2(x,y,a...) case x:case y:{a;}break;
#define   CR(x,a...) case x:return({a;});
#define      D(a...) default:{a;}break;
#define O const
#define S static
#define SZ sizeof
#define LEN(x) (SZ(x)/SZ((x)[0]))
#define PG 4096ll //page
#define HD 32ll   //hdr
#define NI __attribute__((noinline))
#define SN S NI
#define TD typedef
#define TY __typeof__
#define ST struct
#define RE restrict
#define SWP(x,y) {TY(x)t_=x;x=y;y=t_;}
#define LI(x) {Q(!((L)x&HD-1));x=__builtin_assume_aligned(x,HD);} //alignment
#define PD(n,p) ((n)+HD/SZ(*p)-1&-HD/SZ(*p)) //pad
#define M1(x) #x
#define M2(x) M1(x)
#define EX extern
#define Q(x) DBG(I(!(x),die(__FILE__":"M2(__LINE__)": "#x))) //assert
#define Ab8 A b[8];
#define Ms(a...) __builtin_memset(a)
#define Mm(a...) __builtin_memmove(a)
#define Mc(a...) __builtin_memcpy(a)
#define MQ(a...) __builtin_memcmp(a)
#define MC(a...) __builtin_memchr(a)
#define Sn(a...) __builtin_strlen(a)
#define SC(a...) __builtin_strchr(a)
#define SS(a...) __builtin_strstr(a)
#define SQ(a...) __builtin_strcmp(a)
#define MM(a...) memmem(a)
#define SC0(a...) strchrnul(a)
#define min(x,y) extr(x,y,<)
#define max(x,y) extr(x,y,>)
#define extr(x,y,c) ({TY(x) x_=(x),y_=(y);x_ c y_?x_:y_;})
#define rot(x,y) ({TY(x) x_=(x);TY(y) y_=(y);y?x_<<y_|x_>>SZ(x)*8-y_:x;})
#define in(i,n) ((i)<(UL)(n))
#define c3(x,y,z) ((y)-(x)<=(UI)((z)-(x)))
#define c09(c) c3('0',c,'9')
#define cAz(c) c3('a',(c)|32,'z')
#define cA9(c) (cAz(c)||c09(c))
#define S4(i,a,b,c,d) switch(i){case 0:a;break;case 1:b;break;case 2:c;break;default:d;break;}

TD void V;TD char B,C;TD char unsigned UB,UC;TD O C*Q;TD short H;TD unsigned short UH;TD int I;TD unsigned int UI;TD long long L;TD double D;TD size_t N;
TD unsigned long long UL,A,A0(),A1(A),A2(A,A),A3(A,A,A),A4(A,A,A,A),AA(OA*,I),AX(A,OA*,I),AL(L),ALA(L,A),AAL(A,L),AQ(Q);
#define  A0(f,b...) A f(           )_(b)
#define  A1(f,b...) A f(Ax         )_(b)
#define  A2(f,b...) A f(Ax,Ay      )_(b)
#define  A3(f,b...) A f(Ax,Ay,Az   )_(b)
#define  A4(f,b...) A f(Ax,Ay,Az,Au)_(b)
#define  AX(f,b...) A f(Ax,OA*a,In )_(b) //doesn't consume x
#define  AA(f,b...) A f(   OA*a,In )_(b)
#define  AL(f,b...) A f(Ln         )_(b)
#define ALA(f,b...) A f(Ln,Ax      )_(b)
#define AAL(f,b...) A f(Ax,Li      )_(b)
#define  AQ(f,b...) A f(Qs         )_(b)
A1 _R,aA1,asc,cA,cB,cC,cD,cH,cI,cL,cS,csti,des,dsc,enl,epr,err,fir,flp,flr,frk,grp,hex,jS,js0,js1,kcos,kexp,klog,ksin,kst,las,len,m0,m1,mRa,mr,mut,neg,not,nul,ofp,opn,out,prng,
 qpri,raz,rev,ser,spl,sqr,sqz,sqzZ,str,str0,til,typ,u0c,u1c,unh,unq,val,whr;
A2 _1,aA2,aM,add,am,apd,cat,cat11,cst,dct,dex,dot,dvd,eql,exc,fil,f1,fnd,gtn,hsh,ide,i1,ltn,mnm,bng,mtc,mul,mxm,que,sub,und,v0c,v1c;
A3 _2,aA3,arf,arp,ars,cpl,r2,try;A4 ara,a4,d4;AX _8,adv,e8,f8,prj,run;AA a8,d8,ins,no8;AL aA,aB,aC,aD,aI,aL,aS,al,az,cls,rndD,tilL;ALA drp,room,tak;AAL ii;AQ aCz,bsl,bsm,die,evs,pk,sym;
A a2t(A,A,C),ad(D),adm(A,A,I),aCm(Q,Q),aCn(Q,N),apc(A,C),apv(A,OV*),an(C,N),aV(C,N,OV*),cts(A,Q,N),e1f(A1,A),e2f(A2,A,A),err0(Q),evK(A*,Q,OA*,I),evK1(A*,Q,A),evK2(A*,Q,A,A),
 jc(C,A),jC(Q,N,A),kv(A*),l2f(A2,A,A),mf(I,N),pen(A,A1*),sur(C,A,C),wdn(A,N,N,N),AT(UL,A),AV(UL,A),AW(C,A),AK(C,A),AO(UC,A),AN(N,A);
V cyc(V*,N,N),dir(I,void(*)(V*,Q),V*),eS(A,N),eQ(Q,N,N),exit(I),iW(A,I,L,L),kargs(I,Q*),kinit(),*memchr(OV*,I,N),*memcpy(V*,OV*,N),*memmem(OV*,N,OV*,N),*memmove(V*,OV*,N),
 *memset(V*,I,N),mrn(N,OA*),mRn(N,OA*),OFP0(A),OFP1(A),repl(),tilV(V*,L,I);
D ofpd0(L),gd(A);N strlen(Q),_N(A);C*sd(C*,L),*sl(C*,L),sup(A*,A*),tZ(L),*strchr(Q,I),*strchrnul(Q,I),*strstr(Q,Q);Q qs(O L*);
I _K(A),qA(A,A),qD(D,D),ina(A,N),js_eval(C*,I,C*,I),memcmp(OV*,OV*,N),mtc_(A,A),si(Q,I),strcmp(Q,Q),rnk(A),osf(Q,L);
L cfm(OA*,I),gl_(A),gl(A),iw(A,I,L),now(),pl(Q*),pu(Q*),tru(A),fI(OV*,N,L),fL(OV*,N,L),fAI(A,I),fpI(A*,I),ofpd1(D);
EX I gn,gk[];EX C gp[32];EX A gv[],cns,ce[],cn[],ci[2][5];EX A1*v1[],*cT[];EX A2*v2[];EX AA*v8[];EX Q*argv,*env,HEX;EX OC vc[],TS[],Tz[],TZ[],TT[],TX[],Tk[];

//                  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23
//                    () ,3 ,4 ,5 ,6 ,d "" ,` +!  !  5  6 .6 "c" ` {} 1+ ++ +/ +:  +  / 2:
enum            {tA=1,tB,tH,tI,tL,tD,tC,tS,tM,tm,ti,tl,td,tc,ts,to,tp,tq,tr,tu,tv,tw,te,tn};
#define T_ OC TS[]="?""A""I""I""I""I""D""C""S""M""m""i""i""d""c""s""o""p""q""r""u""v""w""e",/*type symbols              */\
              TZ[]={0, 8, 1, 2, 4, 8, 8, 1, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},/*item size in bytes        */\
              Tz[]={0, 4, 0, 1, 2, 3, 3, 0, 2, 4, 4, 3, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3, 3},/*log2(size) or 4=reftypes  */\
              TT[]={0,tA,tB,tH,tI,tL,tD,tC,tS,tM,tM,tI,tL,tD,tC,tS,tA,tA,tA,tA,tA,tA,tA,tA},/*corresponding list type   */\
              TX[]={0,tB,tB,tH,tI,tL,tD,tB,tI,tB,tB, 0, 0,tD,tB,tI,tB,tB,tB,tB,tB,tB,tB,tB},/*type for arith conformance*/\
              Tk[]="0""L""I""I""I""I""F""C""S""T""D""i""i""f""c""s""?""?""?""?""?""?""?""?";/*types for k.h             */
#define TP(t) ((1<<ti|1<<tc|1<<ts|1<<tu|1<<tv|1<<tw|1<<te)>>(t)&1)
#define TF(t) ((t)>=to)

#define _E(x) _C(x)[-14]       //adverb(for tr)                             //header bytes: Ut.orrrrnnnnnnnn (U=bucket,t=type,o=srcoffset(or:w=adverb,k=arity),r=refcount,n=length)
#define _k(x) _C(x)[-13]       //arity(for funcs)                           //tagged ptr bits (t=type,v=value,o=srcoffset,x=ptr):
#define _m(x) ((I*)_V(x))[-7]  //shadow refcount                            // tttttttt........................vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv tc,ti,tu,tv,tw
#define _n(x) _L(x)[-1]        //length                                     // tttttttt................oooooooovvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv ts
#define _o(x) (_ts(x)?(UC)((x)>>32):_tP(x)?0u:(UC)_B(x)[-13]) //srcoffset   // ttttttttkkkkkkkkxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx te
#define _q(x,y) (x=apd(x,y))   //append                                     // ................xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000 other
#define _r(x) ((I*)_V(x))[-3]  //refcount
#define _t(x) ({A x_=(x);Ct=_t0(x_);t?t:_t1(x_);}) //type
#define _t0(x) ((x)>>56)       //type(tag)
#define _t1(x) _C(x)[-15]      //type(hdr)
#define _tF(x) TF(_t(x))       // func?
#define _tP(x) TP(_t(x))       // packed?
#define _tR(x) (_w(x)==4)      // ref?
#define _tT(x) (_t(x)<tM)      // list?
#define _tZ(x) c3(tB,_t(x),tL) // intlist?
#define _tt(x) (_t(x)>tm)      // atom?
#define _tz(x) c3(ti,_t(x),tl) // intatom?
#define _U(x) _C(x)[-16]       //bucket
#define _v(x) (I)(x)           //value
#define _V(x) (V*)(x)          //ptr to data
#define _w(x) Tz[_t(x)]        //log2(item size in bytes)
#define _W(x) TZ[_t(x)]        //item size in bytes
#define _X(x) _A(x)[-3]        //next
#define _Z(x) ((HD<<_U(x))-HD) //capacity
#define _e(x,a...) ({A t_=m0(x);TY(({a;}))r_=({a;});DBG(x=0);m1(t_);r_;}) //two-phase free()
#define XYmMA(a...) P((1<<xt|1<<yt)&(1<<tm|1<<tM|1<<tA),a)

#define Lt(t) (L)t<<56
#define ac(v) (Lt(tc)|(UI)(C)(v))
#define ai(v) (Lt(ti)|(UI)(v))
#define as(v) (Lt(ts)|(UI)(v))
#define ae(v,k) (Lt(te)|(UL)(k)<<48|(UL)(v)<<16>>16)
#define V_ A1*v1[]={sam,flp,neg,fir,sqr,til,whr,rev,asc,dsc,grp,not,enl,nul,len,flr,str,unq,typ,val,u0c,u1c,sam,sam,las,out};\
           A2*v2[]={dex,add,sub,mul,dvd,bng,mnm,mxm,ltn,gtn,eql,mtc,cat,exc,hsh,und,cst,que, _1,dot,v0c,v1c,dex,dex,dex,dex};\
           AA*v8[]={no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,no8,ins, a8, d8,no8,no8,no8,no8,no8,no8};\
           OC vc[]={':','+','-','*','%','!','&','|','<','>','=','~',',','^','#','_','$','?','@','.','0','1','2','3','4','5'};
enum         {au=Lt(tu),FLP,NEG,FIR,SQR,TIL,WHR,REV,ASC,DSC,GRP,NOT,ENL,NUL,LEN,FLR,STR,UNQ,TYP,VAL,U0C,U1C,U2C,U3C,LAS,OUT,
              av=Lt(tv),ADD,SUB,MUL,DVD,MOD,MNM,MXM,LTN,GTN,EQL,MTC,CAT,EXC,RSH,UND,CST,QUE,AP1,DOT,V0C,V1C,V2C,V3C,MKL,PLH,
              aw=Lt(tw)};
#define ND (*(D*)(L[]){0x7ff8000000000000ll})
#define WD __builtin_inf()
#define NL (1ll<<63)
#define WL (~NL)
#define K(s,a...) ({S A f;evK(&f,s,A(a),LEN(A(a)));})
#define K1(s,x)   ({S A f;evK1(&f,s,x);})
#define K2(s,x,y) ({S A f;evK2(&f,s,x,y);})

#define EA h(c,compile)h(d,domain)h(i,index)h(l,length)h(n,nyi)h(o,io)h(p,parse)h(r,rank)h(s,stack)h(t,type)h(v,value)h(z,limit)
#define h(t,m) A0 e##t##0;A1 e##t##1;A2 e##t##2;AA e##t##8;
 EA
#undef h
#define N(x,a...) ({A r_=(x);P(!r_,a;0)r_;}) //error pass-through

#define ov(x) ov_(#x":",(L)(x))
#define oo os("["__FILE__":"M2(__LINE__)"]");
#define nop {asm volatile("fnop");}
I os(Q);L ov_(Q,L);
