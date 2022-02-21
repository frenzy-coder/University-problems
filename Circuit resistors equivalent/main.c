#include<stdio.h>
#include <math.h>

int main()
{
    int n,p;
    float Rt,Req2=0,Req1,Req3=0;
    scanf("%d%d",&n,&p);

    float R[p][n];

    for(size_t i = 0; i < p; i++)
        for(int j = 0; j < n; j++)
            scanf("%f",&R[i][j]);

    for(size_t i = 0; i < n; i++)
    {
        if(R[1][i] == 0)
            Req1 += R[0][i];
        else
            for(size_t k = 0; k < p; k++)
            {
                if(R[k][i] == 0)
                    break;
                else
                    Req2 += 1/R[k][i];
            }
        if(Req2 != 0)
            Req3 += 1 / Req2;
        Req2 = 0;
    }
    Rt = Req1 + Req3;

    printf("%.1f",Rt);

   return 0;
}
