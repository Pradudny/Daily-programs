//summation of all factors for given number
#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0,iSum = 0;
    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Please enter the number : ");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Summation of factors is : %d ",iRet);

    return 0;
}