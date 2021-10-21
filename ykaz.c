
#include <stdlib.h>
#include <stdio.h>
#include <float.h> 
#include <math.h>  

int main() {
  
  // int a = 0x12345678;
  // unsigned char *p;
  // p=(unsigned char*) &a;
  // printf("%lx\n %hx\n %hhx\n",a,a,a);
  // printf("%hhx\n %hhx\n %hhx\n %hhx\n",*p,*(p+1),*(p+2),*(p+3));

  // short a,*pa,*pb,b;
  // printf("%p\n,%p\n,%p\n,%p\n",&a,&pa,&pb,&b);

  // short a,b,c,d;
  // printf("%p\n%p\n%p\n%p\n",&a,&b,&c,&d);

  short a,b,*ep;
  short c,d;
  printf("%p\n%p\n%p\n%p\n%p\n",&a,&b,&ep,&c,&d);

  return 0;
}
  
