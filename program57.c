//1 2 3 4 5(as per input)
#include<stdio.h>

int main()
{
    int iNo = 0, iCnt = 0;

    printf("Please enter the frequency : ");
    scanf("%d",&iNo);

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    return 0;
}