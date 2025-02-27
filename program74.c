//input 5
// a b c d e
#include<stdio.h>
int main()
{
    int iNo = 0,iCnt = 0;
    char ch = 'a';
    printf("Please enter the number : ");
    scanf("%d",&iNo);

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    return 0;
}