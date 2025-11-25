#include<stdio.h>
#include<math.h>

int main()
{
    int i,N;
    float sum;
    int count;


    
    printf("\nEnter total number of terms :: ");
    scanf("%d",&N);

    
    sum=0.0f;

    /*calculate sum of the series*/
    count=1;
    for(i=1;i<=N;i++)
    {
        sum = sum +  ( (float)(pow(count,2)) / (float)(pow(count,3)) );
        count+=2;
    }

    
    printf("\nSum of the series is :: %f\n",sum);

    return 0;
}