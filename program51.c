#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int *Arr, int iSize, int iValue)
{
    int iCnt = 0;
    bool bFLag = false;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            break;
            bFLag = true; 
        }
    }
    return bFLag;
}
int main()
{
    int iLength = 0, iCnt = 0, iNo = 0;
    int *ptr = NULL;
    bool bRet = false;
    printf("Please enter the size of array : ");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*(sizeof(int)));

    printf("Please enter the values :\n");
    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Please enter the number that you want to search : ");
    scanf("%d",&iNo);
    bRet = Search(ptr,iLength,iNo);

    if(bRet == true)
    {
        printf("Element is present \n");
    }
    else
    {
        printf("Element is not present \n");
    }

    free(ptr);

    return 0;
}