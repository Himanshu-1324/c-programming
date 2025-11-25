
#include <stdio.h>

int main()
{
    int num,tNum,cnt;

    printf("\nEnter any number :: ");
    scanf("%d",&num);

    cnt=0;
    tNum=num;

    while(tNum>0){
        cnt++;
        tNum/=10;
    }

    printf("\nNumber of digits in [ %d ] is :: [ %d ].\n" ,num,cnt);

    return 0;
}