//addition of two numbers
#include<stdio.h>
float fAddition(float fValue1, float fValue2)
{
    if(fValue1 < 0.0f)
    {
        fValue1 = -fValue1;
    }
    if(fValue2 < 0.0f)
    {
        fValue2 = -fValue2;
    }
    return fValue1 + fValue2; //addition of float
}
int main()
{
    float fNo1 = 0.0f;
    float fNo2 = 0.0f;
    float fAns = 0.0f;

    printf("Enter the first number :");
    scanf("%f",&fNo1);

    printf("Enter the second number :");
    scanf("%f",&fNo2);

    fAns = fAddition(fNo1, fNo2);

    printf("Addition is %f\n",fAns);
    return 0;
}
