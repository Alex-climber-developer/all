#include <stdlib.h>
#include <stdio.h>
#include <float.h> 
#include <math.h>  
#include <alloc.h>

int main()
{
  #define N 50
  unsigned double n[N];
  unsigned double elem,sum_1,sum_2,summ;
  int i=0;
  do
  {
    printf("enter %d elem mass (elem >= 0)  ",i);
    scanf("%lf", &elem);
    if (elem >= 0){
      n[i] = elem;
      ++i;
    }
  } while (i < N);
  for ( i = 1; i < N-1; i++)
  {
    if (i==0 || i==N-1){
      sum1 = 0;

    }
  }
  
  
  return 0;
}