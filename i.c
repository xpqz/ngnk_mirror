#include<dlfcn.h> // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include<sys/socket.h>
#include<sys/wait.h>
#include<netinet/in.h>
#include<netinet/tcp.h>
#include<fcntl.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/time.h>
#undef __USE_EXTERN_INLINES
#include<sys/stat.h>
#include<sys/mman.h>
#include<dirent.h>
#include"a.h"
S U addr(Q*p)_(Q s=*p;P(!*s,0x0100007f)UC v[4];i(4,I(i,P(*s-'.',ed0())s++)v[i]=pu(&s);P(v[i]>255,ed0()))*p=s;*(U*)v)
S I skt(U h,UH p)_(I f=socket(AF_INET,SOCK_STREAM,0);P(f<0,eo0())I v=setsockopt(f,IPPROTO_TCP,TCP_NODELAY,(I[]){1},4);P(v<0,eo0())
ST sockaddr_in a;a.sin_family=AF_INET;a.sin_addr.s_addr=h;a.sin_port=(UH)(p<<8|p>>8);P(connect(f,(ST sockaddr*)&a,SZ a)<0,eo0())f)
S I osf(Q s,L fl)_(P(!strchr(s,':'),I f=open(s,fl,0666);P(f<3/*fbsd*/,eo0())f)U h=addr(&s);P(*s-':',ed0())s++;W p=pu(&s);P(*s,ed0())skt(h,p))
S I o(A x/*1*/,I fl)_(Xz(gl(x))Xs(L v=xv;P(!v,1)Q s=qs(&v);osf(s,fl))XC(x=str0(x);I v;Mx(v=osf(xV,fl));v)et1(x))
S I fm(I f)_(ST stat s;fstat(f,&s)<0?0:s.st_mode)                                                                                                            // get file mode
S A frd(I f,N i,N n)_(P(i||n+1,en0())DIR*a=fdopendir(f);P(!a,ei0())A x=oC;ST dirent*e;W((e=readdir(a)),Q s=e->d_name;x=apc(cts(x,s,SL(s)),10))closedir(a);x) // read dir
S A frS(I f,N n)_(C b[1024];A x=oC;W(n,I k=read(f,b,MIN(SZ b,n));P(k<0,eo1(x))n-=k;x=cts(x,b,k);P(k-SZ b,x))x)                                               // read stream (only length)
S A frs(I f,N i,N n)_(I(i&&lseek(f,i,SEEK_CUR)<0,mr(N(frS(f,i))))frS(f,n))                                                                                   // read stream (offset too)
S A frm(I f,N i,N n)_(L m=lseek(f,0,SEEK_END);P(m<0,eo0())n=MIN(n,MAX(0,m-i));n?mf(f,i,n):oC)                                                                // read through mmap
S A fr(A x/*1*/,N i,N n)_(Xz(frs(gl(x),i,n))I f=N(o(x,O_RDONLY));P(f<3,frs(f,i,n))I m=fm(f);x=(S_ISDIR(m)?frd:S_ISREG(m)?frm:frs)(f,i,n);close(f);x)         // read
S A fws(I f,Q s,N n)_(W(n>0,L k=write(f,s,n);P(k<0,eo0())P(!k,au)s+=k;n-=k)au)                                                                               // write stream
S A fwm(I f,Q s,N n)_(ftruncate(f,n);V*p=mmap(0,n,PROT_READ|PROT_WRITE,MAP_SHARED,f,0);MC(p,s,n);munmap(p,n);au)                                             // write through mmap
S X2(fw,Rz(I f=gl_(x);My(x=(f<3||!S_ISREG(fm(f))?fws:fwm)(f,yV,yn))x)R_(I f=N(o(xR,O_RDWR|O_CREAT|O_TRUNC));A z=v1c(ai(f),y);f>2&&close(f);z))               // write
SN A dle()_(C*e=dlerror();I(e,os(e);os("\n"))eo0())
A1(opn,Xz(x)ai(N(o(x,O_RDWR|O_CREAT))))                                                                                        // <s
A cls(L n)_(close(n);au)                                                                                                       // >i
A1(u0c,spl(N(u1c(x))))                                                                                                         // 0:x
X1(u1c,RA(P(xn-2,el1(x))P(!_tZ(xy),et1(x))P(_n(xy)-2,el1(x))A y=kv(&x);N i=gl(ii(y,0)),n=gl(ii(y,1));fr(x,i,n))R_(fr(x,0,-1))) // 1:x
A1(u2c,en1(x))                                                                                                                 // 2:x
Y2(v0c,RA(v0c(x,N(jc(10,y))))RC(v1c(x,apc(y,10)))R_(et1(y)))                                                                   // x 0:y
Y2(v1c,RC(fw(x,y))R_(et1(y)))                                                                                                  // x 1:y
A2(v2c,P(!xts||!ytA,et1(y))P(yn-2,el1(y))P(!_ts(yx)||!_ti(yy),et1(y))L v=xv,w=_v(yx);I k=_v(yy);y(0);P(!k||k>8u,ed0())         // x 2:y
 V*l=dlopen(qs(&v),RTLD_LAZY);P(!l,dle())V*f=dlsym(l,qs(&w));P(!f,dle())ax(f,k))

S A rda(I f)_(A x=aC(256-HD);L m=0,k;W((k=read(f,xV+m,xn-m))>0,m+=k;I(m+1000000>xn&&2*m>xn,A y=aC(2*xn+HD);MC(yV,xV,m);x=x(y)))close(f);AN(m,x))
S I lC(A x)_(XA(i(xn,P(_t(xa)-tC,0))1)0)//list of strings?
A1(frk,P(!xtA||xn-2,et1(x))A y=kv(&x);P(!lC(x)||!ytC,ed2(x,y))x=Ny(e1f(str0,x));Q a[xn+1];i(xn,a[i]=_V(xa))a[xn]=0;I p[4];pipe(p);pipe(p+2);I pid=fork();
 P(!pid,dup2(*p,0);dup2(p[3],1);i(4,close(p[i]))exit(execve(*a,(C**)a,(C*O*)env));0)close(*p);close(p[3]);N(v1c(ai(p[1]),x(y)));close(p[1]);A x=rda(p[2]);wait4(pid,0,0,0);x)
L now()_(ST timeval t;gettimeofday(&t,0);1000000ll*t.tv_sec+t.tv_usec)
