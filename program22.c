#include<stdio.h>
#include<stdbool.h>

bool ChechDivisibleBy(int iNo)
{
    if(iNo % 3 == 0 && iNo % 5 == 0)
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

    bRet = ChechDivisibleBy(iValue);
    if(bRet == true)
    {
        printf("%d is divisible by 5 & 3\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5 & 3\n",iValue);
    }

    return 0;
}