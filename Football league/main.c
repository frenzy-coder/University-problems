#include <stdio.h>
#include <math.h>
#include "stdlib.h"


int main()
{
    int p1,s1,s2,p2;
    int sum_s,sum_p;

    scanf("%d%d",&p1,&s1);
    scanf("%d%d",&s2,&p2);

    sum_s = s1+s2;
    sum_p = p1+p2;


    if(sum_s > sum_p)
        printf("Esteghlal");
    else if(sum_s < sum_p)
        printf("Persepolis");
    else if(sum_s == sum_p)
        if(s1 > p2)
            printf("Esteghlal");
        else if(p2 > s1)
            printf("Persepolis");
        else if(s1 == p2 && s2 == p1)
            printf("Penalty");


    return 0;
}
