#include <stdio.h>

int main(void)
{
    int size,seed,i,j;

    scanf("%d",&size);
    scanf("%d",&seed);

    for(i=1;i<=size;i++)
    {
        for(j=1;j<=i;j++)
        {
            seed = seed % 9;
            if(seed ==0)
                seed =9;

            printf("%d",seed);
            seed++;
        }
        printf("\n");

    }

    return 0;
}
