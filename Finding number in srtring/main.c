#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_prime(int);

int main()
{
   char str[100],temp1[100];
   int count = 0 , check;   
   
   fgets(str, sizeof(str), stdin);

   for(int i = 0; str[i] != '\0'; i++)
   {
      if(str[i] == ' ')
         continue;
      else if(isdigit(str[i]) != 0 || str[i] == '-')
      {
         temp1[count] = str[i];
         count++;
      }
   }
   
   //convert string to int
   check = atoi(temp1);

   if(check == 0)
      puts("positive prime");
   else if(is_prime(check) == 1 && check > 0)
      puts("positive prime");
   else if (is_prime(check) == 1 && check < 0)
      puts("negative prime");
   else if (is_prime(check) != 1 && check > 0)
      puts("positive composite");
   else if (is_prime(check) != 1 && check < 0)
      puts("negative composite");
   
   return 0;
}

int is_prime(int a)
{
   int prime = 0;
   
   if(a == 1 || a == -1)
      return 1;
      
   if(a < 0)
      a *= -1;
      
   for(int i = 1; i <= a; i++)
      if(a % i == 0)
         prime++;
         
   if(prime == 2)
      return 1;
   else 
      return 0;
}
