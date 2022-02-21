#include<stdio.h>
#include <math.h>

int main()
{
   int a , b , prime = 0;
   
   scanf("%d%d",&a,&b);
   for(int i = a; i <= b; i++)
   {
      for(int j = 1; j <= i; j++)
         if(i % j == 0)
            prime++;
      if(prime == 2)
         printf("%d\n",i);
      prime = 0;
   }
}
