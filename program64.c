//2 4 6 8 10 (input 5)
#include<stdio.h>

int main()
{
    int iNo = 0, iCnt = 0;

    printf("Please enter the frequency : ");
    scanf("%d",&iNo);

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {

        printf("%d\t",iCnt*2);
    }
    return 0;
}