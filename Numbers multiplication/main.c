#include <stdio.h>
#include <math.h>
#include "stdlib.h"

int main()
{
    int number,product=1;

    scanf("%d",&number);

    while(number != -1)
    {
        product *= number;
        scanf("%d",&number);
    }

    printf("%d",product);

    return 0;
}
