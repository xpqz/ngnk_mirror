#include"k.h" // ngn/k, (c) 2019 ngn, GNU AGPLv3 - http://bitbucket.org/ngn/k/raw/master/LICENSE
S I ltr(UC c)_(c|=32;C3('a',c,'z')||c>127)S I ldg(C c)_(ltr(c)||dgt(c))S I cy(UC c)_((c|1)==0xd1)SI I unh(C c)_((c&15)+9*(c>'9'))
S C*s,*s0,na;S A pb(A,C);S I num(C*s)_(dgt(s[*s=='-']))S A1(p1,xn-1?x:fir(x))I Ci(O C*s,C c)_(O C*t=s;W(*t&&*t-c,t++)t-s)
S A1(v1,P(xtv&&x-av0,au(Av(x)))$(xtX&&xn==2&&xx==aw(0),x=mut(x);xy=v1(xy))x)L pu(C**p)_(C*s=*p;L v=0;C c=*s;W(dgt(c),v=10*v+c-'0';c=*++s)*p=s;v)
S A0(pC,asrt(*s=='"');A x=aC(0);C c=*++s;W(c&&c!='"',$(c=='\\',c=*++s;I i=Ci("tnr0",c);$(i<4,c="\t\n\r"[i]))x=apc(x,c);c=*++s)P(!c,ep())c=*++s;x)
A pS(C**p)_(C*s=*p,c=*s;$(c&0x80,$(cy(c),s+=2;c=*s;W(1,$(dgt(c),c=*++s)E$(cy(c),s+=2;c=*s)E(B)))E(W(((c=*++s)&0xc0)==0x80)))
 E$(c==':',W(ldg(c=*++s)||Ci("./:",c)<3))E(W(ldg(c),c=*++s))A u=aCm(*p,s);*p=s;u)
S A pSs(C d)_(A x=aS(0);W(1,L v=sym(d-'`'||*s-'"'?pS(&s):pC());x=apv(x,&v);P(*s-d,x)++s)0)L pl(C**p)_(I m=**p=='-';*p+=m;(1-2*m)*pu(p))
S A1(shy,P(!xn,x)A y=xa[xn-1];$(ytX&&yn,A z=yx;P(z==av0||ztu&&yn>2,apd(x,au0)))x)S A lam(C k,A s,A b,A l)_(AK(k,atnv(tX,5,A_(s,b,au0,l,au0))))
S A pt(C*v)_(A x;C c=*s;P(c=='"',p1(N(pC())))P(c=='`',++s;x=pSs(c);xn>1?enl(x):x)P(c=='(',s++;x=N(pb(enl(av_mkl),')'));xn-2?x:xy==av_plc?xr,a0():las(x))
 P(ltr(c),C*t=s;x=pSs('.');$(s-t==1&&(c=='y'||c=='z'),na=max(na,c-'w'))AO(t-s0,p1(x)))
 P(c=='{',C*s1=s0,*t=s0=s++;A y;$(*s-'[',y=au0)E(s++;y=sqz(N(pb(a0(),']')));P(!ytS||yn>8,ep(y)))
  C nb=na;na=1;A z=pb(a0(),'}');P(!z,yr;s0=s1;0)$(y==au0,y=atnv(tS,na,(L[]){1,2,3}))E(na=yn)x=cpl(lam(na,aCn(t,s-t),shy(z),y));s0=s1;na=nb;x)
 I i=Ci("'/\\[",c);P(i<3,c=*++s;I h=c==':';s+=h;*v=1;aw(i+3*h))
 P(num(s)&&(c-'-'||({C b=s[-1];!ldg(b)&&Ci(")]}\"",b)==4;})),P(s[1]==':',L u=s[2]==':';s+=2+u;L i=20+c-'0';*v=1;u?au(i):av(i))
  P(c=='0'&&s[1]=='x',s+=2;C*p=s;W(dgt(*p)||C3('a',*p,'f'),p++)L m=(p-s)/2;x=aC(m);F(m,xci=unh(*s)<<4|unh(s[1]);s+=2)p1(x))
  L fp=0;C*p=s;c=*p;W(1,p+=*p==32;p+=*p=='-';c=*p;$(!ldg(c),B)W(ldg(c)||c=='.'||c==':',fp|=c=='.'||c=='n'||c=='w';c=*++p))
  P(!fp,x=aL(0);W(1,L l=pl(&s);c=*s;$(!l,$(c=='W',l=s[-2]=='-'?-_0W:_0W;c=*++s)E$(c=='N',l=_0N;c=*++s))x=apv(x,&l);$(c-32||!num(s+1),B)c=*++s)
        $(c=='i',s++;x=N(gI(x)))E$(c=='j',s++)p1(x))
  x=aD(0);W(1,I m=*s=='-';s+=m;D d=0;c=*s;W(dgt(c),d=10*d-'0'+c;c=*++s)
              $(c=='.',c=*++s;D w=.1;W(dgt(c),d+=w*(c-'0');w/=10;c=*++s))E$(c=='n',c=*++s,d=_0n)E$(c=='w',c=*++s;d=_0w)
              d*=1-2*m;x=apv(x,&d);$(c-32||!num(s+1),B)c=*++s)p1(x))
 i=Ci(vc,c);P(i>19,av_plc)I u=*++s==':';s+=u;*v=1;u?au(i):av(i))
S A pT(C*v)_(A x=N(pt(v));W(1,C c=*s;I i=Ci("'/\\[",c);P(i>3,x)s++;$(i>2,x=AO(s-1-s0,N(pb(a1(x),']')));$(xn==2&&xy==av_plc,xy=au0)*v=0)
                                                                   E(I u=*s==':';s+=u;x=a2(aw(i+3*u),x);*v=1))x)
S V pw()_(C c=*s;W(c==32,c=*++s)P(c-'/')c=s[-1];P(s>s0&&c-32&&c-10)W((c=*++s)&&c-10))
S A pe(A x,C*v)_(pw();P(s>s0&&*s=='\\'&&s[-1]==32,s++;A u=pe(0,v);P(!u,$(x,xr)0);*v=0;u=a2(au_out,u);$(x,u=a2(x,u))u)
 UH o=s-s0;C w=0;A y=pT(&w);P(!y,$(x,xr)0)P(y==av_plc,x?x:y)P(!w,A z=pe(y,v);P(!x,z)Nx(z);*v?a3(av_com,x,z):AO(o,a2(x,z)))
 A z=pe(0,v);P(!z,$(x,xr)yr;0)P(z==av_plc,*v=1;!x?y:!ytu?AO(o,a3(y,x,z)):ep(x,y))
 *v&=y!=av0;$(!x,y=v1(y))*v?a3(av_com,x?AO(o,a3(y,x,av_plc)):y,z):AO(o,x?a3(y,x,z):a2(y,z)))
S A pb(A x,C e)_(W(1,C v=0;A y=Nx(pe(0,&v));$(y==av_plc&&(!e||e=='}'),y=au0)x=apv(x,&y);$(*s-';'&&*s-10,B)s++)P(*s-e,ep(x))s++;x)
A1(prs,P(!xtC,et(x))s=s0=C(x=str0(x));A y=*s=='\\'?a1(a2(au_cmd,aCz(s+1))):pb(a0(),0);!y?eso(x,s-s0),0:lam(0,x,shy(y),aS(0)))
