//A B C D E 
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt = 1,ch=65;iCnt <= iValue;iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}
int main()
{
    int iNo = 0;
    printf("Please enter the number : ");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}