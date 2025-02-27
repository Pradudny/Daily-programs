//print the number in reverse order
#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    while(iNo != 0)
    {
        iDigit =  iDigit* 10 + iNo % 10;
        iNo = iNo/10;

    }
    printf("%d\t",iDigit);

    return 0;
}