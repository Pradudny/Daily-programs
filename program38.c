//get the size & values of array from user and print it
#include<stdio.h>
void DisplayArr(int *ptr,int iSize)
{
    int iCnt = 0;
    printf("The values of the array are :\n");
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
}
int main()
{
    int Arr[5];
    int iCnt = 0, iValue = 0;

    printf("Enter the size of an array : ");
    scanf("%d",&iValue);

    printf("Enter the numbers :\n");
    for(iCnt = 0; iCnt < iValue;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    DisplayArr(Arr, iValue);

    return 0;
}