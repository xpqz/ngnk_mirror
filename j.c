#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S O C je[]="\"\\/\b\f\n\r\t",ej[]="\"\\/bfnrt";S C*s;

S A0 jx;S C jw()_(W(*s&&*s<=32u,s++)*s)
S A0(jd,I m=*s=='-';s+=m;C c=*s++;P(!C09(c),0)F v=c-'0';W(C09(*s),v*=10;v+=*s++-'0')I(*s=='.',s++;F t=1;W(C09(*s),t/=10;v+=t*(*s++-'0')))
 I((*s|32)=='e',s++;s+=*s=='+';L e=pl((V*)&s);F t=10;I(e<0,e=-e;t=.1)P(e>308,0)i(e,v*=t))af(m?-v:v))
S I ju(Q s)_(I v=0;i(4,UC c=*s++,d=c-'0';v<<=4;v|=d<10?d:(d=(c|32)-'a')<6?d+10:-1)v)
S A0(js,UC c;C*p=++s;N n=0;W((c=*p)-'"',P(c<32,s=p;0)p++;I(c=='\\',c=*p++;P(c<32,s=p;0)n++;I(c=='u',L v=ju(p);P(v<0,s=p;0)p+=4;n+=4-(v>127)-(v>2047))))A x=aC(p-s-n);p=s;C*r=xC;
 W((c=*p++)-'"',I(c=='\\',c=*p++;I(c-'u',I j=si(ej,c);P(j>=L(ej),s=p-1;x(0))c=je[j])E(I v=ju(p);p+=4;I(v<128,c=v)J(v<2048,*r++=192|v>>6;c=128|63&v)E(*r++=224|v>>12;*r++=128|63&v>>6;c=128|63&v)))*r++=c)s=p;x)
S A0(ja,s++;A x=oA;P(jw()==']',s++;x)W(1,xq(Nx(jx()));C c=jw();P(c==']',s++;x)Nx(c==',');s++)0)
S A0(jo,s++;A x=oS,y=oA;C c=jw();P(c=='}',s++;am(x,y))W(c=='"',A z=js();B(!z)xq(cS(z));B(jw()-':')s++;z=jx();B(!z)yq(z);c=jw();P(c=='}',s++;am(x,y))B(c-',')s++;c=jw())x(y(0)))
S A jx(){C c=jw();SW(c,R3('f','n','t',c=c>>3&3;I v=*(I*)(V*)A("alse","null","true")[c]==*(I*)(V*)(s+!c);s+=(4+!c)*v;!v?0:c==1?_R(cn[tf]):au+!!c)
 R('[',ja())R('{',jo())R('"',js())R_(jd()))}
X1(js0,RC(N n=xn;x=room(n+4,x);MS(xC+n,0,4);s=xV;A y=jx();C c=jw();I(y&&c,y=y(0))I(!y,ep0();eS(x,s-xC))x(y))Rc(js0(enl(x)))R_(et1(x)))

S V JX(A);S N nX(A);S UC t[256];SN V it(){MS(t,5,32);t[127]=5;i(L(je),t[je[i]]=1)}
S N nC(Q p,N n)_(N m=2+n;i(n,m+=t[(UC)p[i]])m)
S V JC(Q p,N n){*s++='"';UC c;i(n,SW(t[c=*p++],C(0,*s++=c)C(1,*s++='\\';*s++=ej[si(je,c)])D(MC(s,"\\u00",4);s+=4;hexC(p-1,2,s);s+=2)))*s++='"';}
S N nl(L v)_(P(v==NL,4)N n=v<0?(v=-v),2:1;W m=10;W(m<=v&&n<19,n++;m*=10)n)
S V Jl(L v){s=v-NL?sl(s,v):MC(s,"null",4)+4;}
S N nx(A x/*0*/){X(Ri(nl(xv))Rl(nl(*xL))Rc(C c=xv;nC(&c,1))Rf(F v=*xF;P(v==(L)v,nl(v))P(v!=v,4)C b[32];sf(b,*(L*)&v)-b)Rm(nx(xx)+nx(xy)-1-!_N(xx))Ru(4+!!xv)RC(nC(xC,xn))
 RMT_C(N n=xN,m=1+n+!n;i(n,m+=nX(ii(x,i)))m)R_(nX(str(xR))))}
S A Jx(A x/*0*/){X(Rm(*s++='{';i(xN,*s=',';s+=!!i;JX(ii(xx,i));*s++=':';JX(ii(xy,i)))*s++='}';x)Rf(F v=*xF;s=v==(L)v?sl(s,v):v!=v?MC(s,"null",4)+4:sf(s,*(L*)&v);x)Ri(s=sl(s,xv);x)
 Rl(Jl(*xL);x)Rc(C c=xv;JC(&c,1);x)RC(JC(xC,xn);x)Ru(N n=4+!xv;MC(s,xv?"true":"false",n);s+=n;x)R_(I(xtMT,*s++='[';i(xN,I(i,*s++=',')JX(ii(x,i)))*s++=']')E(JX(str(xR)))x))}
S N nX(A x/*1*/)_(N n=nx(x);x(0);n)
S V JX(A x/*1*/){Jx(x);x(0);}
A1(js1,I(!*t,it())A y=aC(nx(x));s=yC;JX(x);Q(s==yC+yn);y)
