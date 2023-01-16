// ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include"a.h"
#include<stdarg.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<netinet/in.h>
#include<netinet/tcp.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/time.h>
#undef __USE_EXTERN_INLINES
#include<sys/stat.h>
I pg=4096;//pagesize

//__builtin_ia32_ldmxcsr(__builtin_ia32_stmxcsr()|1<<6|1<<15); //daz,ftz
#ifndef shared
 I main(In,Q*a)_(kinit();kargs(n,a);I r=0;I(n<2,repl())J(!bsl(a[1]),r=1;epr(0))Q(bsm(""));r)
#endif

#if defined(wasm)
 I pipe(Iv[2])_(-1)
 C*getcwd(C*s,Nn)_((V*)0)
 I js_in(V*,N);V js_out(OV*,N),js_log(OV*),*js_alloc(N),js_time(I*,long*),js_exit(I);
 S ST{C*a,p[16];Nn;}s[8]={{.a=""},{.a=""},//s:storage,
  #include"o/w/fs.h"
 };S ST{C i;N o;}d[8]={{.i=1},{.i=1},{.i=1}};S O I ns=LEN(s),nd=LEN(d);//d:fd table
 #define FI P((UI)f>=nd||!d[f].i,EBADF)Ii=d[f].i;//validate fd "f" and get inode "i"
 I open(Qp,Iv,...)_(Im=Sn(p);P(m>=SZ s[0].p,ENAMETOOLONG)Ii=0;W(i<ns&&SQ(s[i].p,p),i++)
  I(i>=ns,P(O_CREAT&~v,ENOENT)i=0;W(i<ns&&s[i].a,i++)P(i>=ns,ENOSPC)s[i].a="";s[i].n=0;Mc(s[i].p,p,m))
  If=0;W(f<nd&&d[f].i,f++)P(f>=nd,EMFILE)d[f].i=i;d[f].o=0;f)
 I close(If)_(FI d[f].i=0;0)
 I read(If,V*a,Nn)_(FI P(i==1,js_in(a,n))I o=d[f].o;n=max(0,min(n,s[i].n-o));Mc(a,s[i].a+o,n);d[f].o+=n;n)
 I write(If,OV*a,Nn)_(FI;P(i==1,js_out(a,n);n)
  Im=d[f].o+n;I(m>s[i].n,C*b=js_alloc(m);Mc(b,s[i].a,n);s[i].a=b;s[i].n=m)Mc(s[i].a+d[f].o,a,n);n)
 off_t lseek(If,off_t o,I w)_(FI;o=w==SEEK_CUR?o+d[f].o:w==SEEK_END?o+s[i].n:w==SEEK_SET?o:-1;P(o<0,EINVAL)d[f].o=o)
 I fstat(If,ST stat*r)_(FI;In=s[i].n;
  *r=(TY(*r)){.st_ino=i,.st_mode=S_IFCHR,.st_nlink=1,.st_size=n,.st_blksize=512,.st_blocks=n+511>>9};0)
 V*mmap(V*a,Nn,I pr,I fl,If,off_t o)_(I(!a,a=js_alloc(n))P(f<0,a)P(f>=nd||!d[f].i,(V*)-1)Ii=d[f].i;Mc(a,s[i].a+o,n);a)
 I munmap(If,In)_(0)
 I gettimeofday(ST timeval*a,V*b)_(js_time((V*)&a->tv_sec,(V*)&a->tv_usec);0)
 V exit(Iv){js_exit(v);}
 I dup2(If,Iv)_(-1)I execve(Qp,C*O*a,C*O*e)_(-1)I fork()_(-1)I socket(Ii,Ij,Ik)_(-1)
 I setsockopt(If,I l,I s,OV*v,socklen_t n)_(-1)I connect(If,O ST sockaddr*s,socklen_t n)_(-1)I chdir(Qp)_(-1)
 I ftruncate(If,off_t o)_(-1)
 I wait4(Ii,I*l,I o,ST rusage*u)_(-1)
 long sysconf(Ii)_(i==_SC_PAGESIZE?4096:-1)
 V*memcpy (V*x,OV*y,Nn)_(C*p=x  ;Qq=y  ;i(n,*p++=*q++)x)
 V*memrcpy(V*x,OV*y,Nn)_(C*p=x+n;Qq=y+n;i(n,*--p=*--q)x)
 V*memmove(V*x,OV*y,Nn)_((y<x&&x<y+n?memrcpy:memcpy)(x,y,n))
 V*memset(V*x,Iv,Nn)_(C*p=x;i(n,*p++=v);x)
 V*memchr(OV*x,Iv,Nn)_(Qs=x;i(n,P(s[i]==v,(V*)(s+i)))(V*)0)
 V*memmem(OV*x,Nm,OV*y,Nn)_(Qp=x,q=y;i((L)m-(L)n+1,P(!memcmp(p+i,q,n),(V*)(p+i)))(V*)0)
 I memcmp(OV*x,OV*y,Nn)_(Qs=x,t=y;i(n,Iv=*s++-*t++;P(v,v))0)
 N strlen(Qs)_(Qp=s;W(1,UL v=~*(UL*)(V*)p;v&=v>>1;v&=v>>2;v&=v>>4;v&=0x0101010101010101ll;B(v)p+=8)W(*p,p++)p-s)
 C*strchr(O C*s,Iv)_(W(1,P(*s==v,(V*)s)P(!*s++,(V*)0))(V*)0)
 C*strstr(O C*p,O C*q)_(MM(p,Sn(p),q,Sn(q)))
 I strcmp(Qp,Qq)_(W(*p&&*p==*q,p++;q++)*p-*q)
 C*strchrnul(Qs,Iv)_(W(1,P(*s==v,(V*)s)P(!*s,(V*)s)s++)(V*)s)
#else
 I js_eval(C*s,Im,C*r,In)_(0)
#endif
