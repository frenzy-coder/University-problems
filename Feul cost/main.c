#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fuel_use,sahmiye_left,sahmiye_new;
    int cost;

    scanf("%d%d",&fuel_use,&sahmiye_left);

    sahmiye_new = sahmiye_left + 60;

    if(sahmiye_new >= fuel_use)
        cost = fuel_use * 1500;
    else
        cost = sahmiye_new * 1500+(fuel_use-sahmiye_new) * 3000;

    printf("%d",cost);

    return 0;
}
