//chech the given number is perfect number or not
#include<stdio.h>
#include<stdbool.h>

bool SumFactors(int iNo)
{
    int iCnt = 0,iSum = 0;
    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iNo == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter the number : ");
    scanf("%d",&iValue);

    bRet = SumFactors(iValue);

    if(bRet == true)
    {
    printf("The given number is perfect number");
    }else
    {
        printf("The given number is not perfect number");
    }
    
    return 0;
}