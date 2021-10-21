// #include<stdlib.h>
// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     /* «Обычные» переменные */
//     int a = 1;
//     float b = 2;
//     double c = 3;
//     /* Указатели */
//     int *p1 = &a;
//     float *p2 = &b;
//     double *p3 = &c;
//     void *p4;
//     /* Адреса «обычных» переменных и размер выделяемой памяти */
//     printf("a:      int: start address %p extent %d\n",&a,sizeof(a));
//     printf("b:    float: start address %p extent %d\n",&b,sizeof(b));
//     printf("c:   double: start address %p extent %d\n\n",&c,sizeof(c));
//     /* Адреса указателей и размер выделяемой памяти */
//     printf("p1: pointer: start address %p extent %d\n",&p1,sizeof(p1));
//     printf("p2: pointer: start address %p extent %d\n",&p2,sizeof(p2));
//     printf("p3: pointer: start address %p extent %d\n\n",&p3,sizeof(p3));
//     /* Значения, на которые ссылаются указатели */
//     printf("p1: %p related value %d\n",p1,*p1);
//     printf("p2: %p related value %f\n",p2,*p2);
//     printf("p3: %p related value %lf\n\n",p3,*p3);
// }
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
      int i1;
      char c1;
      double d1;
      char *cp= &c1;
      char c2;
      double d2;
      int i2;
  
   printf("c1:%p,%d\nc2:%p,%d\t\ni1:%p,%d\t\ni2:%p,%d\t\nd1:%p,%d\t\nd2:%p,%d\t\ncp:%p,%d\n\n",&c1,sizeof(c1),&c2,sizeof(c2),&i1,sizeof(i1),&i2,sizeof(i2),&d1,sizeof(d1),&d2,sizeof(d2),cp,sizeof(cp));
      return 0;
}