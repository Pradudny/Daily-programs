#include<stdio.h>
#include<stdbool.h>

void Factors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    
    printf("Please enter the number : ");
    scanf("%d",&iValue);

    Factors(iValue);

    return 0;
}