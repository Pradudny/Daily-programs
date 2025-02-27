//print the number of digits
#include<stdio.h>

int CountDigits(int iValue)
{
    int iDigit= 0, iCount = 0;
    //Updater
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    while(iValue != 0)
    {
        iCount++;
        iValue = iValue/10;

    }
    return iCount;

}
int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    iRet = CountDigits(iNo);
    printf("number of digits in given nymber is %d",iRet);
   
    return 0;
}