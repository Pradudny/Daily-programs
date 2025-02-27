#include<stdio.h>
#include<stdlib.h>

int Maximum(int *Arr, int iSize)
{
    int iCnt = 0,iMax = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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
    
    iRet = Maximum(ptr,iLength);

    printf("Maximum is :%d",iRet);
    free(ptr);


    return 0;
}