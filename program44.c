//Even elements in the array
#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCount = 0,iCnt = 0;
        for(iCnt = 0; iCnt < iSize;iCnt++)
        {
            if(Arr[iCnt] % 2 !=0)
            {
                iCount++;
            }
        }
        return iCount;
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
   iRet = CountOdd(ptr,iLength);
   printf("Odd elemnts in the array are %d",iRet);
    free(ptr);
    return 0;
}