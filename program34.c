//print the sum of Odd digits
#include<stdio.h>

int SumOddDigits(int iNo)
{
    int iSum = 0;
    while(iNo != 0)
    {
        if((iNo % 10)%2 == 1)
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

    iRet = SumOddDigits(iValue);

    printf("Sum of Odd digits is :%d",iRet);
    return 0;
}