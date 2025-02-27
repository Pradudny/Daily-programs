//Even elements in the array
#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[], int iSize)
{
    int iCnt = 0;
        for(iCnt = 0; iCnt < iSize;iCnt++)
        {
            if(Arr[iCnt] % 2 ==0)
            {
                printf("%d\t",Arr[iCnt]);
            }
        }
}
int main()
{
    int iLength = 0,iCnt = 0;
    int *ptr = NULL;
    ptr = (int*)malloc(iLength * sizeof(int));

    printf("Please enter the size of an array : ");
    scanf("%d",&iLength);

    printf("Please enter the Values : \n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
   EvenDisplay(ptr,iLength);
    free(ptr);
    return 0;
}