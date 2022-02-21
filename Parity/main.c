#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,x=0,y=0,sum_row=0,sum_column=0,temp1=0,temp2=0;
    int bit[100][100],check[100];

    scanf("%d",&n);

    //input 2D array
    while(n != 0)
    {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                scanf("%d",&bit[i][j]);

        //check row elements
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                    temp1 += bit[i][j];
            sum_row += temp1;
            if(temp1 % 2 != 0)
            {
                check[x] = i;
                x++;
                y++;
            }
            temp1 = 0;
        }
        if(y >= 2)
        {
            y = 0;
            x = 0;
            sum_row = 0;
            printf("Corrupt\n");
            scanf("%d",&n);
            continue;
        }
        y = 0;
        //check column elements
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                    temp2 += bit[j][i];
            sum_column += temp2;
            if(temp2 % 2 != 0)
            {
                check[x] = i;
                x++;
                y++;
            }
            temp2 = 0;
        }
        if(y >= 2)
        {
            y = 0;
            x = 0;
            sum_column = 0;
            printf("Corrupt\n");
            scanf("%d",&n);
            continue;
        }

        //resault
             if(x == 2)
                printf("Change bit (%d,%d)\n",check[0]+1,check[1]+1);
            else if(sum_column % 2 == 0 && sum_row % 2 == 0)
                printf("OK\n");

            sum_row = 0;
            sum_column = 0;
            x = 0;
            y = 0;
            scanf("%d",&n);
    }
    return 0;
}
