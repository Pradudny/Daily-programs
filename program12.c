#include<stdio.h>
/*
8   9:30
9   10:30
10  11:30
*/
void DisplayTimeTavle(int iStd)
{
    switch(iStd)
    {
        case 8:
        printf("Timing for 8th is 9:30 AM");
        break;
        case 9:
        printf("Timing for 9th is 10:30 AM");
        break;
        case 10:
        printf("Timig for 10th is 11:30 AM");
        break;
        default:
        printf("Sorry we dont have information for your standard");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter your standard : ");
    scanf("%d",&iValue);

    DisplayTimeTavle(iValue);
    return 0;
}