#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
S Qs;S A0 jv;S C jw()_(W(si(" \n\t\r",*s)<4,++s)*s)S A0(je,0)
S A0(jd,Im=*s=='-';s+=m;Cc=*s++;P(!c09(c),0)Dv=c-'0';W(c09(*s),v*=10;v+=*s++-'0')
 I(*s=='.',s++;D t=1;W(c09(*s),t/=10;v+=(*s++-'0')*t))
 I((*s|32)=='e',s++;s+=*s=='+';L e=pl(&s);D t=10;I(e<0,e=-e;t=.1)P(e>308,0)i(e,v*=t))ad(m?-v:v))
S A1(ju,Iv=0;i(4,UC c=*s++;v=16*v+(c09(c)?c-'0':(c|32)-'a'<6u?(c|32)-'a'+10:99999);P(v<0,s--;0))
 P(v<128,apc(x,v))P(v<2048,x=cts(x,(C[]){192|v>>6,128|63&v},2))x=cts(x,(C[]){224|v>>12,128|63&v>>6,128|63&v},3))
S A0(js,s++;Ax=oC;W(1,Qp=s;UC c=*s++;W(c-'"'&&c-'\\'&&c>31,c=*s++)P(c<32,s--;x(0))x=cts(x,p,s-1-p);P(c=='"',x)c=*s++;
                       Ii=si("\"\\/bfnrtu",c);P(i>8,s--;x(0))x=i<8?apc(x,"\"\\/\b\f\n\r\t"[i]):ju(x);p=s)0)
S A0(ja,s++;Ax=oA;P(jw()==']',s++;x)W(1,xq(Nx(jv()));P(*s==']',s++;x)Nx(*s==',');s++)0)
S A0(jo,s++;Ax=am(oS,oA);Cc=jw();P(c=='}',s++;x)
 W(1,Nx(c=='"');_q(xx,cS(Nx(js())));Nx(jw()==':');s++;_q(xy,Nx(jv()));P(*s=='}',s++;x)Nx(*s==',');s++;c=jw())0)
S A jr(Qp,Lv)_(Cc;W((c=*p++),P(c-*s,0)s++)az(v))S A0(jt,jr("true",1))S A0(jf,jr("false",0))S A0(jN,jr("null",NL))
S A0(jv,Cc=jw();Ii=si("-ftn[{\"",c)*!c09(c);Ax=T(&jd,jf,jt,jN,ja,jo,js,je)[i]();jw();x)
A1(js0,XC(x=str0(x);s=xV;Ay=jv();I(y&&*s,y=y(0))P(!y,eS(x,s-(Q)xV);ep1(x))x(y))Xc(js0(enl(x)))et1(x))

S A jstr(Qs,Nn)_(Nm=2+n;i(n,Cc=s[i];I(si("\"\\\b\f\n\r\t",c)<7,n++)J((UC)c<32||c==127,n+=5))
 Ax=aC(m);C*r=xC;*r++='"';S Q h="0123456789abcdef";
 i(n,Cc=*s++;Ij=si("\"\\\b\f\n\r\t",c);
  I(j<7,*r++='\\';*r++="\"\\bfnrt"[j])J((UC)c<32||c==127,Mc(r,"\\u00",4);r+=4;*r++=h[(UC)c>>4];*r++=h[c&15])E(*r++=c))
 *r='"';x)
A1(js1,Xz(Lv=gl(x);Qs=!v?"false":v==1?"true":v==NL?"null":0;s?aCz(s):js1(ad(v)))Xd(str(x))
 Xc(Cc=xv;jstr(&c,1))XC(x(jstr(xC,xn)))XMT(sur('[',jc(',',N(eac1f(x,js1))),']'))
 Xm(Ay=kv(&x);sur('{',jc(',',N(K("{(`j'x),'\":\",'`j'y}",x,y))),'}'))js1(str(x)))
