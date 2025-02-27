//find the number present int the array or not 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize,int iValue)
{
    int iFrequency = 0,iCnt = 0;
        for(iCnt = 0; iCnt < iSize;iCnt++)
        {
            if(Arr[iCnt]== iValue)
            {
                break;
            }
        }

        if(iCnt == iSize)
        {
            return false;
        }
        else
        {
            return true;
        }
}
int main()
{
    int iLength = 0,iCnt = 0,iNo = 0;
    bool bRet = false;

    int *ptr = NULL;
    ptr = (int*)malloc(iLength * sizeof(int));

    printf("Please enter the size of an array : ");
    scanf("%d",&iLength);

    printf("Enter the number thst you have to find : ");
    scanf("%d",&iNo);

    printf("Please enter the Values : \n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    bRet = Search(ptr,iLength,iNo);
    if(bRet ==true)
    {
        printf("Number is present in the array\n");
    }
    else
    {
        printf("Number is not present in the array\n");
    }
    free(ptr);
    return 0;
}