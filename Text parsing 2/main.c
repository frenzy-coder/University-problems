#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int count = 1 , j = 0;
    char str[256] , command[256];
    char *strpt , *temp[256];

    fgets(str,sizeof(str),stdin);

    for(int i = 0; str[i] != '='; i++,count++);

    strpt = strtok(str+count,",;");
    temp[j++] = strpt;

    while(strpt != NULL)
    {
        strpt = strtok(NULL,",;");
        temp[j++] = strpt;
    }
    temp[j] = '\0';

    if(str[0] == 'J')
        printf("jumping from %s,%s to %s,%s",
               temp[0],temp[1],temp[2],temp[3]);
    else if(str[0] == 'C' && str[1] == 'A')
        printf("camera is turned %s",
               temp[0]);
    else if(str[0] == 'P')
        printf("power save mode turned %s",
               temp[0]);
    else if(str[0] == 'R')
        printf("returning to overlord");
    else if(str[0] == 'C' && str[1] == 'H')
        printf("changing %s to %s",
               temp[0],temp[1]);

    return(0);
}
