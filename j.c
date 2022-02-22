#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S Q JE="\"\\/\b\f\n\r\t",EJ="\"\\/bfnrt";S C*s;

S A0 jv;S A0(je,0)S C jw()_(Cc;W((c=*s)<=32&&1ll<<c&0x100002600/*"\t\n\r "*/,++s)c)
S A0(jd,Im=*s=='-';s+=m;Cc=*s++;P(!c09(c),0)Dv=c-'0';W(c09(*s),v*=10;v+=*s++-'0')
 I(*s=='.',s++;D t=1;W(c09(*s),t/=10;v+=(*s++-'0')*t))
 I((*s|32)=='e',s++;s+=*s=='+';L e=pl((V*)&s);D t=10;I(e<0,e=-e;t=.1)P(e>308,0)i(e,v*=t))ad(m?-v:v))
S A1(ju,Iv=0;i(4,UC c=*s++;v=16*v+(c09(c)?c-'0':(c|32)-'a'<6u?(c|32)-'a'+10:99999);P(v<0,s--;0))
 P(v<128,apc(x,v))P(v<2048,x=cts(x,(C[]){192|v>>6,128|63&v},2))x=cts(x,(C[]){224|v>>12,128|63&v>>6,128|63&v},3))
S A0(js,s++;Ax=oC;W(1,Qp=s;UC c=*s++;W(c-'"'&&c-'\\'&&c>31,c=*s++)P(c<32,s--;x(0))x=cts(x,p,s-1-p);P(c=='"',x)c=*s++;
                      Ii=si(EJ,c);P(c-'u'&&i>=SZ EJ,s--;x(0))x=c-'u'?apc(x,JE[i]):ju(x);p=s)0)
S A0(ja,s++;Ax=oA;P(jw()==']',s++;x)W(1,xq(Nx(jv()));P(*s==']',s++;x)Nx(*s==',');s++)0)
S A0(jo,s++;Ax=am(oS,oA);Cc=jw();P(c=='}',s++;x)
 W(1,Nx(c=='"');_q(xx,cS(Nx(js())));Nx(jw()==':');s++;_q(xy,Nx(jv()));P(*s=='}',s++;x)Nx(*s==',');s++;c=jw())0)
S I jp(Qp)_(W(*p&&*p==*s,p++;s++)!*p)S A0(jt,jp("true")?au+1:0)S A0(jf,jp("false")?au:0)S A0(jN,jp("null")?_R(cn[td]):0)
S A0(jv,Cc=jw();Ii=si("-ftn[{\"",c)*!c09(c);Ax=T(&jd,jf,jt,jN,ja,jo,js,je)[i]();jw();x)
A1(js0,XC(x=str0(x);s=xV;Ay=jv();I(y&&*s,y=y(0))P(!y,ep0();eS(x,s-xC);x(0))x(y))Xc(js0(enl(x)))et1(x))

S V JX(A);S N nX(A);S UC nCt[256];S V nC0(){Ms(nCt,5,32);nCt[127]=5;i(SZ JE,nCt[JE[i]]=1)}
S N nC(Qp,Nn)_(I(!*nCt,nC0())Nm=2+n;i(n,m+=nCt[(UC)p[i]])m)
S V JC(Qp,Nn){I(!*nCt,nC0())*s++='"';UC c;
 i(n,SW(nCt[c=*p++],C(0,*s++=c)C(1,*s++='\\';*s++=EJ[si(JE,c)])DF(Mc(s,"\\u00",4);s+=4;*s++=HEX[c>>4];*s++=HEX[c&15])))
 *s++='"';}
S N nl(Lv)_(P(v==NL,4)Nn=v<0?(v=-v),2:1;UL m=10;W(m<=v&&n<19,n++;m*=10)n)
S V Jl(Lv){s=v-NL?sl(s,v):Mc(s,"null",4)+4;}
S N nx(Ax/*0*/)_(Xi(nl(xv))Xl(nl(*xL))Xd(Dv=*xD;P(v==(L)v,nl(v))P(v!=v,4)Cb[32];sd(b,*(L*)&v)-b)Xc(Cc=xv;nC(&c,1))
 XC(nC(xC,xn))Xu(x-au?4:5)Xm(nx(xx)+nx(xy)-1-!_N(xx))XMT(Nn=xN,m=1+n+!n;i(n,m+=nX(ii(x,i)))m)nX(str(xR)))
S V Jx(Ax/*0*/){switch(xt){C(ti,s=sl(s,xv))C(tl,Jl(*xL))C(tc,Cc=xv;JC(&c,1))C(tC,JC(xC,xn))
 C(td,Dv=*xD;s=v==(L)v?sl(s,v):v!=v?Mc(s,"null",4)+4:sd(s,*(L*)&v))C(tu,Nn=x-au?4:5;Mc(s,x-au?"true":"false",n);s+=n)
 C(tm,*s++='{';i(xN,I(i,*s++=',')JX(ii(xx,i));*s++=':';JX(ii(xy,i)))*s++='}')
 DF(I(xtMT,*s++='[';i(xN,I(i,*s++=',')JX(ii(x,i)))*s++=']')E(JX(str(xR))))}}
S N nX(Ax/*1*/)_(Nn=nx(x);x(0);n)
S V JX(Ax/*1*/){Jx(x);x(0);}
A1(js1,Ay=aC(nx(x));s=yC;JX(x);Q(s==yC+yn);y)
