#include <stdio.h>

int main()
{
    int i, n;

    printf("\nEnter value of n :: ");
    scanf("%d", &n);

    printf("\nNatural Numbers in Reverse Order Upto [ %d ] :: \n",n);

    for(i=n; i>=1; i--)
    {
        printf("\t%d\n", i);
    }

    return 0;
}