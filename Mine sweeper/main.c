#include <stdio.h>
#include <stdlib.h>                       // o o o o o o
                                          // o * . . . o
                                          // o . . . . o
                                          // o . * . . o
                                          // o . . . . o
                                          // o o o o o o
int main()
{
    int n,m,count1 = 1,count2 = 0;
    char block[500][500];

    scanf("%d %d",&n,&m);

    while(n != 0 && m != 0)
    {
        for(int i = 0; i <= n+1; i++)
            for(int j = 0; j <= m+1; j++)
                block[i][j] = '.';

        //input blocks
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                scanf(" %c",&block[i][j]);

        printf("Field #%d:\n",count1);
        count1++;

        //show numbers
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(block[i][j] == '*')
                printf("*");
        //check neighbour blocks
                else
                {
                    for(int p = -1; p < 2; p++)
                        for(int q = -1; q < 2; q++)
                            if(block[i+p][j+q] == '*')
                                count2++;
                    printf("%d",count2);
                    count2 = 0;
                }
            }
            puts("");
        }
        scanf("%d %d",&n,&m);
    }
    return 0;
}
