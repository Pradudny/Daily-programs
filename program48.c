//find the frequency of 10
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iFrequency = 0,iCnt = 0;
        for(iCnt = 0; iCnt < iSize;iCnt++)
        {
            if(Arr[iCnt]== 10)
            {
                iFrequency++;
            }
        }
        return iFrequency;
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
    iRet = Frequency(ptr,iLength);
    printf("Frequency of 10 in the array is %d\n",iRet);
    free(ptr);
    return 0;
}