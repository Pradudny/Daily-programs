//input 5
// a b c d e
#include<stdio.h>
int main()
{
    int iNo = 0,iCnt = 0;
    char ch = '\0';
    printf("Please enter the number : ");
    scanf("%d",&iNo);

    for(iCnt = 1,ch = 'a'; iCnt <= iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
    return 0;
}