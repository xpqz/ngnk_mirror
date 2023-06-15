#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S Qs,s0;S I k;S A pb(A,C);                                                                          //parser state (s:current pointer, s0:start of source, k:implicit arg counter)
I si(Qs,Cv)_(strchrnul(s,v)-(C*)s)                                                                  //find char (string index)
B id0(UC c)_(CAz(c)|(c|1)==0xd1)S B id1(Cc)_(id0(c)|C09(c))S B num(Qs)_(C09(s[*s=='-']))            //is identifier start char? is identifier char? is number start?
S Q pw(Qs)_(W(*s==32,s++)s)S A1(p1,x&&xn==1?fir(x):x)                                               //skip whitespace; singleton list to atom
Q pID(Qs)_(W(id1(*s),s+=G(1,1,1,1,1,1,2,3)[(UC)*s>>5])s)                                            //parse identifier
L pu(Q*p)_(Qs=*p;Lv=0;Cc=*s;W(C09(c),v=10*v+c-'0';c=*++s)*p=s;v)                                    //parse long int unsigned
L pl(Q*p)_(Im=**p=='-';*p+=m;(1-2*m)*pu(p))                                                         //parse long int
S L pfu(Q*p)_(UL v=pu(p);Qs=*p;Cc=*s;P(c=='w',(*p)++;WFL)P(c=='n',(*p)++;v^NFL)I e=0;               //parse float unsigned
 I(c=='.',c=*++s;W(C09(c),I(v<(1ull<<63)/10,v=10*v+c-'0';e--)c=*++s))
 I(c=='e',s++;e+=pl(&s);P(e<-308,0)P(e>308,WFL))
 S F t[309];I(!*t,*t=1;i(308,t[i+1]=10*t[i]))
 *p=s;*(L*)A(e<0?v/t[-e]:v*t[e]))
L pf(Q*p)_(Im=**p=='-';(*p)+=m;Lv=(UL)m<<63|pfu(p);(*p)+=**p=='f';v)                                //parse float
S A0(pZ,Qp=s;W(*p-'0'<2u,p++)P(*p=='b',Ax=aG(p-s);i(xn,xg=*s++&1)s++;x)                             //parse ints
 Ax=oL;W(1,Lv=pl(&s);I(!v&&*s=='N',v=NL;s++)x=apv(x,&v);Qp=pw(s);B(p==s||!num(p))s=p)sqzZ(x))
S A0(pF,Ax=oF;W(1,x=apv(x,A(pf(&s)));Qp=pw(s);B(p==s||!num(p))s=p)x)                                //parse floats
S A0(pC,Ax=oC;Cc=*++s;W(c&&c-'"',I(c=='\\',c=*++s;Ii=si("tnr0",c);I(i<4,c="\t\n\r"[i]))             //parse quoted string
 x=apc(x,c);c=*++s)P(!c,ep1(x))c=*++s;x)
S A0(p0x,Qp=s;W(CA9(*p),p++)Ax=N(unhC(s,p-s));s=p;x)                                                //parse 0x string
S A0(ps,Qp=s;Cc=*s;I(id0(c),s=pID(s))J(c>>7,W(*++s<-64)s+=*s==':')aCm(p,s))                         //parse symbol
S A0(pS,Ax=oS;W(1,Ay=*s-'"'?ps():Nx(pC());y=str0(y);xq(y(sym(yV)));Qp=pw(s);P(*p-'`',x)s=p+1)0)     //parse symbols
S A0(pP,Ax=oS;W(1,Ay=str0(ps());y(xq(sym(yV)));P(*s-'.'||!id0(s[1]),x)++s)0)                        //parse dot-separated path of identifiers
S A pt(C*v)_(Cc=*s;                                                                                 //parse term
 P(c=='`',s++;Ax=N(pS());qte(p1(x)))
 P(c=='"',p1(pC()))
 P(c=='[',s++;pb(GAP,']'))
 P(c=='(',s++;P(*s==')',s++;oA)Ax=N(pb(MKL,')'));xn-2?x:las(x))
 P(c=='{',C k0=k;k=1;Q s1=s0,t=s0=s++;Ay;I(*s-'[',y=au)E(s++;y=fir(flp(N(pb(0,']'))));P(!ytS,ep1(y))P(yN>8,s--;ez1(y)))Az=pb(GAP,'}');P(!z,s0=s1;y(0))I(y==au,y=aS(k);i(3,yi='x'+i))
  Ax=N(cpl(aCn(t,s-t),z,y));s0=s1;k=k0;x)
 P(id0(c),Qp=s;Ax=pP();I(s-p==1&&c-'y'<2u,k=MAX(k,c-'w'))AO(p-s0,x))
 P(C09(c)&&s[1]==':',I u=s[2]==':';s+=2+u;Ii=20+c-'0';P(i>25,ep0())*v=1;Lt(tv-u)|i)
 P(c=='0'&&s[1]=='x',s+=2;p1(p0x()))
 P(num(s)&&(c-'-'||s==s0||(!id1(s[-1])&&!strchr(")]}\"",s[-1]))),
  L d=0;Qp=s;c=*p;W(1,p=pw(p);B(!num(p))p+=*p=='-';c=*p;B(!CA9(c))W(CA9(c)||c=='.'||c==':',d|=!!strchr(".nwef",c);c=*++p))p1(d?pF():pZ()))
 P(c>>7,Qp=s;Ax=pP();*v=1;AO(p-s0,x))
 Ii=si("'/\\",c);P(i<3,c=*++s;I h=c==':';s+=h;*v=1;aw+i+3*h)i=si(vc,c);P(i>19,GAP)
 I u=*++s==':';s+=u;*v=1;Lt(tv-u)|i)
S X1(pm,Rv(x^au^av)RA(I(xx==aw,x=mut(x);xA[xn-1]=pm(xA[xn-1]))x)Rs(Lv=xv;Qs=qs(&v);Nn;P(*s>>7&&s[(n=SL(s))-1]-':',Cb[8];MC(b,s,n);b[n]=':';b[n+1]=0;sym(b))x)R_(x)) //monadify
S A pT(C*v)_(Ax=N(pt(v));                                                                           //parse term and the adverbs or square brackets after it (v:verb?)
 W(1,Cc=*s;Ii=si("'/\\[",c);P(i>3,x)s++;
  I(i>2,x=AO(s-1-s0,N(pb(x,']')));I(xn==2,I(xy==GAP,xy=au)E(xx=pm(xx)))*v=0)
  E(I c=*s==':';s+=c;x=aA2(aw+i+3*c,x);*v=1))x)
S A pe(Ax,C*v)_(s=pw(s);Cc=*s;                                                                      //parse expression
 I(c=='/'&&(s==s0||s[-1]==32||s[-1]==10),
  I(s[1]==10,C*e=strstr(s+1,"\n\\\n");s=e?e+3:s+SL(s))
  E(W((c=*++s)&&c-10)))
 P(s>s0&&*s=='\\'&&s[-1]==32,s++;Ay=pe(0,v);P(!y,x?x(0):0);*v=0;y=aA2(OUT,y);I(x,y=aA2(pm(x),y))y)
 UH o=s-s0;Cb=0;Ay=pT(&b);P(!y,x?x(0):0)P(y==GAP,x?x:y)
 P(!b,Az=pe(y,v);P(!x,z)Nx(z);*v?aA3(aw,x,z):AO(o,aA2(pm(x),z)))
 Az=pe(0,v);P(!z,y(x?x(0):0))P(z==GAP,*v=1;P(!x,y)Yu(ep1(x))AO(o,aA3(y,x,z)))
 *v&=y!=av;I(!x,y=pm(y))*v?aA3(aw,x?AO(o,aA3(y,x,GAP)):y,z):AO(o,x?aA3(y,x,z):aA2(pm(y),z)))
S A pb(Ax,Cc)_(x=x?aA1(x):oA;                                                                       //parse body (sequence of ;-separated expressions)
 W(1,Cv=0;Ay=Nx(pe(0,&v));xq(c-']'&&y==GAP?au:y);P(y==GAP&&c==')',ep1(x))B(*s-';'&&*s-10)B(c==10&&*s==10)s++)
 P(c==10&&!*s,x)P(*s-c,ep1(x))s++;x)
A pk(Q*p,Cc)_(s0=s=*p;Ax=pb(GAP,c);*p=s;P(x,xn==2?las(x):x)eQ(s0,SL(s0),s-s0);0)                    //parse either a group of lines (c='\n') or till '\0' (c='\0')
