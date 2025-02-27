//input 4
// 0 2 3 4
// 1 0 3 4
// 1 2 0 4
// 1 2 2 0

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
            if(i == j)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
    return 0;
}