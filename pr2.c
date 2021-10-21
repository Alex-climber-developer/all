
// #include <stdlib.h>
// #include <stdio.h>
// #include <float.h> 
// #include <math.h>  

// int main()
// {
//   double s,t;
//   printf("s: ");
//   scanf("%lf",&s);

//   printf("t: ");
//   scanf("%lf",&t);
//   printf("%lf\n", s>4 ? 3*t-1 :
//   s<=4 && t!=0 ? sqrt(fabs(t-s)) :
//   s+2);
  
//   return 0;
// }


// #include <stdlib.h>
// #include <stdio.h>
// #include <float.h> 
// #include <math.h>  
// double a1,a2,x;
// int main()
// {
//   while (1)
//   {
//     printf("a1: ");
//     scanf("%lf",&a1);

//     printf("a2: ");
//     scanf("%lf",&a2);

//     printf("x: ");
//     scanf("%lf",&x);
//     if ((a1!=0 || a2!=0 || x!=0) && a1* x* pow(sin(2*x),2) + exp(-2 * x) * (x + a2)>=0)
//     {
//       break;
//     } else{printf("try again, params are Bad.\n");}
//   }

//   printf("B= %lf\n", (sqrt(a1* x* pow(sin(2*x),2) + exp(-2 * x) * (x + a2))) / (x + sqrt(a1*a1 + a2*a2)) );
  
//   return 0;
// }



// 3

// #include <stdlib.h>
// #include <stdio.h>
// #include <float.h> 
// #include <math.h>  

// int main()
// {
//   int x;
//   printf("x (3 digits): ");
//   scanf("%d",&x);
//   int a= x/100 ;
//   int b= (x/10) - (a*10);
//   int c= x-(a*100+b*10);
//   if (a == b && b == c && a == c) {
//     printf("%d\n",x);

//   } else if (a != b && b != c && a != c) {
//     (a<b && a<c) ? a=0 :
//     (b<a && b<c) ? b=0 :
//     (c<b && c<a) ? c=0 :
//     printf("NONE\n");
//     printf("%d%d%d\n",a,b,c);

//   } else {
//     printf("%d%d%d\n",c,b,a);
//   }
  
  
//   return 0;
// }




// 4

// #include <stdlib.h>
// #include <stdio.h>
// #include <float.h> 

// int main() {
//   unsigned int n;
//   float summ = 1;

//   printf("n (n in N): ");
//   scanf("%u",&n);

//   for (int i = 1; i < n+1; i++) {
//     summ *= (1+(1.0/(i*i)));
//   }
//   printf("%f\n",summ);
//   return 0;
// }



// 5

// #include <stdio.h>


// int main() {
//   unsigned int a, b,i,max;
//   while (1) {
//     printf("a: ");
//     scanf("%u",&a);

//     printf("b: ");
//     scanf("%u",&b);
//     if (a>10 && b>10){break;}
//     printf("Try again(a,b>10)\n");
//   }
//   unsigned int multi= a*b;
//   max = a>b ? a : b;
//   for ( i = max; i < multi; i++) {
//     if (i%a==0 && i%b==0) {
//       printf(":  %u\n",i);
//     }
//   }
//   return 0;
// }




// // 6
// #include <stdio.h>
// int main() {
//   int n,k;
//   k=2;
//   char f=1;
//   printf("n (n in N): ");
//   scanf("%d",&n);
//   while (n != 1 && f) {
//     if ((n%k!=0)) f=0;
//     else n/= k;
//     k+=1;
//     if (n<1 || !f) {
//       printf("Is not a factorial\n");
//       f=0;
//       break;}
    
//   }
//   if (f) printf("%d\n",k-1);
//   return 0;
// }
  



// 7
// #include <stdlib.h>
// #include <stdio.h>
// #include <float.h> 
// #include <math.h>  

// int main() {
//   char inc=1;
//   int n = 0, fact=1;
//   float summ=0, prev_summ = 0, e= 0.0000001, diff=0; 
//   do {
//     prev_summ=summ;
//     summ+= inc*(pow((M_PI/3),2*n+1)/fact);
//     diff = fabs(prev_summ - summ);

//     inc*=-1;
//     fact*=(2*++n+1)*2*n;
//   } while(diff > e) ;
//   printf("%f\n",summ);
//   return 0;
// }





// #include <stdlib.h>
// #include <stdio.h>
// #include <float.h> 
// #include <math.h>  

// int main() {
//   double a=M_PI/3, s0= 0,s1=a, e= 0.0000001,n=1;
//   while(fabs(s1-s0) > e) {
//     s0=s1;
//     a*=-(M_PI/3)*(M_PI/3)/(2*n*(2*n+1));
//     n++;
//     s1+=a;
//   } 
//   printf("%lf\n",s1);
//   return 0;
// }




// 8

// #include <stdlib.h>
// #include <stdio.h>
// #include <float.h> 
// #include <math.h>  

// int main() {
//   int inc=1, n = 1;
//   float summ=0, prev_summ = 0, e= 0.0000001, diff=0, x=0; 
//   printf("x (-1,1]: ");
//   scanf("%f",&x);

//   do {
//     prev_summ=summ;
//     summ+= inc*(pow(x,n)/n++);
//     diff = fabs(prev_summ - summ);
//     inc*=-1;
//   } while(diff > e) ;
//   printf("%f\n",summ);
//   return 0;
// }

// с рекурентными функциями 
// #include <stdlib.h>
// #include <stdio.h>
// #include <float.h> 
// #include <math.h>  

// int main() {
//   double x;
//   printf("x (-1,1]: ");
//   scanf("%lf",&x);
//   double a=x, s0= 0,s1=a, e= 0.0000001,n=2;
  
//   while(fabs(s1-s0) > e) {
//     s0=s1;
//     a*=-x*(n-1)/n;
//     n++;
//     s1+=a;
//   } 
//   printf("%lf\n",s1);
//   return 0;
// }




// 9

// #include <stdlib.h>
// #include <stdio.h>
// #include <float.h> 
// #include <math.h>  

// int check_easy(n) {
//   int f =1;
//   for ( unsigned int i = 2; i < (int)sqrt(n)+1; i++) { /*оптимизация   - пробегаем до корня+1  тк дальше не надо */
//     if (n%i==0) {
//       f = 0; 
//       break;
//     }
//   }
//   return f;
// }

// int main() {
//   unsigned int a,b;

//   do {
//     printf("a: ");
//     scanf("%u",&a);
//     printf("b: ");
//     scanf("%u",&b);
//   } while(a>b ||  a<1 || b<1);
//   for ( unsigned int i = a+1; i < b; i++) {
//     if (check_easy(i)) printf("%u\n",i) ;
//   }
//   return 0;
// }