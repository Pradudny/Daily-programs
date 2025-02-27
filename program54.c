#include<stdio.h>
#include<stdlib.h>

int Minimum(int *Arr, int iSize)
{
    int iCnt = 0,iMin = Arr[0];
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;
    printf("Please enter the size of array : ");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*(sizeof(int)));

    printf("Please enter the values :\n");
    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Minimum(ptr,iLength);

    printf("Minimum is :%d",iRet);

    free(ptr);

    return 0;
}