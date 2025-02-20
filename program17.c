#include<stdio.h>
void Display(int iFrequency)
{
    int iCount = 1;
    while(iCount < iFrequency)
    {
        printf("%d\n",iCount);
        iCount++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the frequency : ");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;
}