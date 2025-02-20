#include<stdio.h>
void Display(int iFrequency)
{
    int iCount = 0;
    for(iCount = 1; iCount <= iFrequency; iCount++)
    {
        printf("%d\n",iCount);
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