#include<stdio.h>

void DisplayDigit(int iValue)
{
    int iDigit= 0;
    while(iValue != 0)
    {
        iDigit =  iValue % 10;
        printf("%d\t",iDigit);

        iValue = iValue/10;

    }

}
int main()
{
    int iNo = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    DisplayDigit(iNo);
   
    return 0;
}