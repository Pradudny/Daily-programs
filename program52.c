#include<stdio.h>
#include<stdlib.h>

float Average(int *Arr, int iSize)
{
    int iCnt = 0,iSum = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (float)iSum/(float)iSize;
}
int main()
{
    int iLength = 0, iCnt = 0;
    float fRet = 0;
    int *ptr = NULL;
    printf("Please enter the size of array : ");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*(sizeof(int)));

    printf("Please enter the values :\n");
    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    fRet = Average(ptr,iLength);

    printf("Average is :%f",fRet);

    free(ptr);

    return 0;
}