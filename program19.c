#include<stdio.h>
void Display(int iFrequency)
{
    int iCount = 0;
    for(iCount = iFrequency;iCount > 0;iCount--)
    {
        printf("%d Jay Ganesh...!\n",iCount);
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