//A 1 B 2 C 3 D 4 E 5
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt = 1,ch=65;iCnt <= iValue;iCnt++,ch++)
    {
        printf("%c\t%d\t",ch,iCnt);
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