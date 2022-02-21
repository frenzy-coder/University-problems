#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
   int count = 1,count2 = 1,c = 0,j = 0,k = 1;
   char str[256] , command[256];
   //const char ch[2] = ",;";
   char *temp;

   fgets(str,sizeof(str),stdin);

   for(int i = 0; str[i] != '=' ; i++,count2++)
      command[j++] = str[i];
   command[j] = '\0';

   temp = strtok(str+count2,",;");

   printf("%s\n",command);
   while(temp != NULL)
   {
      printf("param%d: %s\n",count++,temp);
      temp = strtok(NULL,",;");
   }

   return(0);
}
