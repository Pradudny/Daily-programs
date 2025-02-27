//Even elements in the array
#include<stdio.h>
#include<stdlib.h>

int AdditionOdd(int Arr[], int iSize)
{
    int iSum = 0,iCnt = 0;
        for(iCnt = 0; iCnt < iSize;iCnt++)
        {
            if(Arr[iCnt] % 2 == 1)
            {
                iSum = iSum + Arr[iCnt];
            }
        }
        return iSum;
}
int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
    int *ptr = NULL;
    ptr = (int*)malloc(iLength * sizeof(int));

    printf("Please enter the size of an array : ");
    scanf("%d",&iLength);

    printf("Please enter the Values : \n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
   iRet = AdditionOdd(ptr,iLength);
   printf("Addition of all Odd elemnts in the array is %d",iRet);
    free(ptr);
    return 0;
}