//5 4 3 2 1(input 5)
#include<stdio.h>

int main()
{
    int iNo = 0, iCnt = 0;

    printf("Please enter the frequency : ");
    scanf("%d",&iNo);

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    return 0;
}