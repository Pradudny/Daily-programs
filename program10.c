//Display result above or eqial t0 40 is pass otherwise fail
#include<stdio.h>
void DisplayResult(float fPercentage)
{
    //Filter
    if(fPercentage<0.0f || fPercentage > 100.0f)
    {
        printf("Invalid percentage, please enter the value in range 0 to 100");
    }
    if(fPercentage < 40)
    {
        printf("You are fail");
    }
    else
    {
        printf("You are Pass");
    }

}
int main()
{
    float fValue = 0.0f;

    printf("Enter the obtained Percentage : \n");
    scanf("%f",&fValue);

     DisplayResult(fValue);

    return 0;
}