#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[2000] , *strpt;
    int index = 0 , alpha[100]={0};

    fgets(str,sizeof(str),stdin);

    strpt = strtok(str,"!,. ");

    while(strpt != NULL)
    {
        index = strlen(strpt);
        alpha[index] += 1;
        strpt = strtok(NULL,"!., ");
    }

    for(int i = 1; i <= 20; i++)
        if(alpha[i] != 0)
            printf("%d:%d\n",i,alpha[i]);

    return 0;
}
