#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char str[1000];
    int n , c = 0 , num;
    double num2;

    fgets(str,sizeof(str),stdin);
    char *temp3 , *temp2 , *temp;

    while(c < strlen(str))
    {
        temp = str + c;

        if(isdigit(temp[0])||(temp[0]=='-' && isdigit(temp[1])))
        {
            num2 = strtod(temp, &temp2);
            num = strtol(temp, &temp3, 10);

            if(*(temp2-1) == '.' || temp2 == temp3)
                printf("%d\n",num);

            else
                printf("%.1lf\n",num2);

            strcpy(str,temp2);
            c = 0;
            continue;
        }
        c++;
    }
    return 0;
}
