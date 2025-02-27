//print the digits
#include<stdio.h>

int main()
{
    int iNo = 0, iDigit = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    while(iNo != 0)
    {
        iDigit =  iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo/10;

    }
    return 0;
}