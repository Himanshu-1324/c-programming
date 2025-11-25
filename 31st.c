#include<stdio.h>

int main()
{
    int i,N;
    unsigned long sum;

   
    printf("\nEnter the value of N :: ");
    scanf("%d",&N);

    
    sum=0;

    
    for(i=1;i<=N;i++)
        sum= sum+ (i*i);

    

    printf("\nSum of the series is :: [ %ld ]\n",sum);

    return 0;
}