//print the sum of Even digits
#include<stdio.h>

int SumEvenDigits(int iNo)
{
    int iSum = 0;
    while(iNo != 0)
    {
        if((iNo % 10)%2 == 0)
        {
            iSum = iSum + (iNo % 10);
        }
        iNo = iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumEvenDigits(iValue);

    printf("Sum of even digits is :%d",iRet);
    return 0;
}