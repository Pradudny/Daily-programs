//input 3
// * * *
// * * *
// * * *

#include<stdio.h>

int main()
{
    int iNo = 0,i = 0,j = 0;
    printf("Please enter the frequency : ");
    scanf("%d",&iNo);
    for(i = 1; i <= iNo;i++)
    {
        for(j = 1; j<=iNo;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}