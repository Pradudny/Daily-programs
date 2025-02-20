#include<stdio.h>
void Display(int iFrequency)
{
    int iCount = 0;
    while(iCount < iFrequency)
    {
        printf("%d Jay Ganesh...!\n",iCount);
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