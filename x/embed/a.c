#include<stdio.h>
#include"../../k.h"

K add(K x,K y){
 printf("add()\n");
 int a=iK(x);
 int b=iK(y);
 int c=a+b;
 return Ki(c);
}

int main(){
 setbuf(stdout,0);
 printf("kinit()\n"); kinit();
 printf("KR()\n");    KR("add",add,2);
 printf("KC()\n");    K s=KC("`0:$add[2;3]",13);
 printf("K1()\n");    K1('.',s);
 printf("return\n");  return 0;
}
