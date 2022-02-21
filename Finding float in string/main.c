#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
   char str[100] , temp[100] , *temppt;
   int  count = 0;
   double check;

   fgets(str, sizeof(str), stdin);

   for(int i = 0; str[i] != '\0'; i++)
   {
      if(isdigit(str[i+1]) == 0 && (str[i] == '.' || str[i] == '-'))
         continue;
      else if(isdigit(str[i]) != 0 || str[i] == '.' || str[i] == '-')
         temp[count++] = str[i];
   }

   check = strtod(temp,&temppt);
   printf("%.0lf\n",round(check));

   return 0;
}
