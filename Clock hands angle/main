#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int H,M,i=0;
    float degree,result[1000];

    scanf("%d:%d",&H,&M);

    while(H != 0 || M != 0)
    {
        degree = fabs(H * 30 - M *5.5);

        if(degree <= 180)
            result[i] = degree;
        else if(degree > 180 && degree <= 360)
            result[i] = 360.0-degree;
        else
            result[i] = 720.0-degree;
        i++;
        scanf("%d:%d",&H,&M);
    }

    for(int j = 0; j < i; j++)
        printf("%.2f\n",result[j]);

    return 0;
}
