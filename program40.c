//dynamic memorey allocation
#include<stdio.h>
#include<stdlib.h>

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
    printf("Values of the array are: \n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    free(ptr);
    return 0;
}