#include<stdio.h>
void DisplayArr(int *ptr)
{
    int iCnt = 0;
    printf("The values of the array are :\n");
    for(iCnt = 0;iCnt<5;iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
}
int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the numbers :\n");
    for(iCnt = 0; iCnt < 5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    DisplayArr(Arr);

    return 0;
}