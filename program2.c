#include<stdio.h>
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    printf("Enter the first number :");
    scanf("%d",&iNo1);

    printf("Enter the second number :");
    scanf("%d",&iNo2);

    iAns = iNo1 + iNo2;

    printf("Addition is %d",iAns);
    return 0;
}
