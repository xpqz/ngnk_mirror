#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S O C JE[]="\"\\/\b\f\n\r\t",EJ[]="\"\\/bfnrt";S C*s;//34='"',44=',',48='0',92='\\',97='a'

S A0 jx;S I w(Cc)_(c<33&&1ll<<c&0x100002600/*32\t\r\n*/)S C jw()_(Cc;W(w(c=*s),s++)c)
S A0(jd,Im=*s=='-';s+=m;Cc=*s++;P(!c09(c),0)Fv=c-48;W(c09(*s),v*=10;v+=*s++-48)I(*s=='.',s++;F t=1;W(c09(*s),t/=10;v+=t*(*s++-48)))
 I((*s|32)=='e',s++;s+=*s=='+';L e=pl((V*)&s);F t=10;I(e<0,e=-e;t=.1)P(e>308,0)i(e,v*=t))af(m?-v:v))
S I ju(Qs)_(Iv=0;i(4,UC c=*s++,d=c-48;v<<=4;v|=d<10?d:(d=(c|32)-97)<6?d+10:-1)v)
S A0(js,UC c;C*p=++s;Nn=0;W((c=*p)-34,P(c<32,s=p;0)p++;I(c==92,c=*p++;P(c<32,s=p;0)n++;I(c=='u',Lv=ju(p);P(v<0,s=p;0)p+=4;n+=4-(v>127)-(v>2047))))Ax=aC(p-s-n);p=s;C*r=xC;
 W((c=*p++)-34,I(c==92,c=*p++;I(c-'u',Ij=si(EJ,c);P(j>=SZ EJ,s=p-1;x(0))c=JE[j])E(Iv=ju(p);p+=4;I(v<128,c=v)J(v<2048,*r++=192|v>>6;c=128|63&v)E(*r++=224|v>>12;*r++=128|63&v>>6;c=128|63&v)))*r++=c)s=p;x)
S A0(ja,s++;Ax=oA;P(jw()==']',s++;x)W(1,xq(Nx(jx()));P(*s==']',s++;x)Nx(*s==44);s++)0)
S A0(jo,s++;Ax=oS,y=oA;Cc=jw();P(c=='}',s++;am(x,y))W(c==34,Az=js();B(!z)xq(cS(z));B(jw()-':')s++;z=jx();B(!z)yq(z);P(*s=='}',s++;am(x,y))B(*s-44)s++;c=jw())x(y(0)))
S I jp(Qp)_(s++;W(*p&&*p++==*s++)!*p)S A0(jt,jp("true"+1)?au+1:0)S A0(jf,jp("false"+1)?au:0)S A0(jN,jp("null"+1)?_R(cn[tf]):0)
S A0(jx,Ax=T(&jf,jt,jN,ja,jo,js,jd)[si("ftn[{\"",jw())]();jw();x)
A1(js0,XC(x=str0(x);s=xV;Ay=jx();I(y&&*s,y=y(0))P(!y,ep0();eS(x,s-xC);x(0))x(y))Xc(js0(enl(x)))et1(x))

S V JX(A);S N nX(A);S UC t[256];S V it(){Ms(t,5,32);t[127]=5;i(SZ JE,t[JE[i]]=1)}
S N nC(Qp,Nn)_(I(!*t,it())Nm=2+n;i(n,m+=t[(UC)p[i]])m)
S V JC(Qp,Nn){I(!*t,it())*s++=34;UC c;i(n,SW(t[c=*p++],C(0,*s++=c)C(1,*s++=92;*s++=EJ[si(JE,c)])D(Mc(s,"\\u00",4);s+=4;*s++=HEX[c>>4];*s++=HEX[c&15])))*s++=34;}
S N nl(Lv)_(P(v==NL,4)Nn=v<0?(v=-v),2:1;UL m=10;W(m<=v&&n<19,n++;m*=10)n)
S V Jl(Lv){s=v-NL?sl(s,v):Mc(s,"null",4)+4;}
S N nx(Ax/*0*/)_(Xi(nl(xv))Xl(nl(*xL))Xf(Fv=*xF;P(v==(L)v,nl(v))P(v!=v,4)Cb[32];sf(b,*(L*)&v)-b)Xc(Cc=xv;nC(&c,1))XC(nC(xC,xn))Xu(x-au?4:5)Xm(nx(xx)+nx(xy)-1-!_N(xx))
 XMT(Nn=xN,m=1+n+!n;i(n,m+=nX(ii(x,i)))m)nX(str(xR)))
S V Jx(Ax/*0*/){switch(xt){C(ti,s=sl(s,xv))C(tl,Jl(*xL))C(tc,Cc=xv;JC(&c,1))C(tC,JC(xC,xn))C(tm,*s++='{';i(xN,I(i,*s++=44)JX(ii(xx,i));*s++=':';JX(ii(xy,i)))*s++='}')
 C(tf,Fv=*xF;s=v==(L)v?sl(s,v):v!=v?Mc(s,"null",4)+4:sf(s,*(L*)&v))C(tu,Nn=x-au?4:5;Mc(s,x-au?"true":"false",n);s+=n)D(I(xtMT,*s++='[';i(xN,I(i,*s++=44)JX(ii(x,i)))*s++=']')E(JX(str(xR))))}}
S N nX(Ax/*1*/)_(Nn=nx(x);x(0);n)
S V JX(Ax/*1*/){Jx(x);x(0);}
A1(js1,Ay=aC(nx(x));s=yC;JX(x);Q(s==yC+yn);y)
