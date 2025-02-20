//Area of circle
#include<stdio.h>
int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of circle :");
    scanf("%f",&fRadius);

    fArea = fRadius* * fRadius * 3.14f;
    printf("Area of circle is %f\n",fArea);

    return 0;
}