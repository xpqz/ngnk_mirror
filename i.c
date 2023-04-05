#include<sys/socket.h> // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
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
S UI addr(Q*p)_(Qs=*p;P(!*s,0x0100007f)UC v[4];i(4,I(i,P(*s-'.',ed0())s++)v[i]=pu(&s);P(v[i]>255,ed0()))*p=s;*(UI*)v)
S I skt(UI h,UH p)_(If=socket(AF_INET,SOCK_STREAM,0);P(f<0,eo0())Iv=setsockopt(f,IPPROTO_TCP,TCP_NODELAY,(I[]){1},4);P(v<0,eo0())
 ST sockaddr_in a;a.sin_family=AF_INET;a.sin_addr.s_addr=h;a.sin_port=(UH)(p<<8|p>>8);P(connect(f,(ST sockaddr*)&a,SZ a)<0,eo0())f)
S I osf(Qs,L fl)_(P(!strchr(s,':'),If=open(s,fl,0666);P(f<3/*fbsd*/,eo0())f)UI h=addr(&s);P(*s-':',ed0())s++;UL p=pu(&s);P(*s,ed0())skt(h,p))
S I o(Ax/*1*/,I fl)_(Xz(gl(x))Xs(Lv=xv;P(!v,1)Qs=qs(&v);osf(s,fl))XC(x=str0(x);Iv;Mx(v=osf(xV,fl));v)et1(x))
S A frd(If)_(DIR*a=fdopendir(f);P(!a,ei0())Ax=oC;ST dirent*e;W((e=readdir(a)),Qs=e->d_name;x=apc(cts(x,s,SL(s)),10))closedir(a);x)                // read dir
S A frs(If)_(Cb[1024];Ax=oC;W(1,Ik=read(f,b,SZ b);P(k<0,eo1(x))x=cts(x,b,k);P(k-SZ b,x))0)                                                        // read stream
S A frm(If)_(Ln=lseek(f,0,SEEK_END);n<0?eo0():n?mf(f,n):oC)                                                                                       // read through mmap
S A fws(If,Qs,Nn)_(W(n>0,Lk=write(f,s,n);P(k<0,eo0())P(!k,au)s+=k;n-=k)au)                                                                        // write stream
S A fwm(If,Qs,Nn)_(ftruncate(f,n);V*p=mmap(0,n,PROT_READ|PROT_WRITE,MAP_SHARED,f,0);MC(p,s,n);munmap(p,n);au)                                     // write through mmap
S I fm(If)_(ST stat s;fstat(f,&s)<0?0:s.st_mode)                                                                                                  // get file mode
A1(opn,Xz(x)ai(N(o(x,O_RDWR|O_CREAT))))                                                                                                           // <s
AL(cls,close(n);au)                                                                                                                               // >i
A1(u0c,spl(N(u1c(x))))                                                                                                                            // 0:x
A1(u1c,Xz(frs(gl(x)))If=N(o(x,O_RDONLY));P(f<3,frs(f))Im=fm(f);x=(S_ISDIR(m)?frd:S_ISREG(m)?frm:frs)(f);close(f);x)                               // 1:x
Y2(v0c,RA(v0c(x,N(jc(10,y))))RC(v1c(x,apc(y,10)))R_(et1(y)))                                                                                      // x 0:y
A2(v1c,P(!ytC,et1(y))Xz(If=gl_(x);My(x=(f<3||!S_ISREG(fm(f))?fws:fwm)(f,yV,yn))x)If=N(o(xR,O_RDWR|O_CREAT|O_TRUNC));Az=v1c(ai(f),y);f>2&&close(f);z) // x 1:y

S A rda(If)_(Ax=aC(256-HD);L m=0,k;W((k=read(f,xV+m,xn-m))>0,m+=k;I(m+1000000>xn&&2*m>xn,Ay=aC(2*xn+HD);MC(yV,xV,m);x=x(y)))close(f);AN(m,x))
S I lC(Ax)_(XA(i(xn,P(_t(xa)-tC,0))1)0)//list of strings?
A1(frk,P(!xtA||xn-2,et1(x))Ay=kv(&x);P(!lC(x)||!ytC,ed2(x,y))x=Ny(e1f(str0,x));Q a[xn+1];i(xn,a[i]=_V(xa))a[xn]=0;I p[4];pipe(p);pipe(p+2);I pid=fork();
 P(!pid,dup2(*p,0);dup2(p[3],1);i(4,close(p[i]))exit(execve(*a,(C**)a,(C*O*)env));0)close(*p);close(p[3]);N(v1c(ai(p[1]),x(y)));close(p[1]);Ax=rda(p[2]);wait4(pid,0,0,0);x)
L now()_(ST timeval t;gettimeofday(&t,0);1000000ll*t.tv_sec+t.tv_usec)
