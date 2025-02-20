//Area of circle 
#include<stdio.h>
float AreaOfCircle(float fRad)
{
    float fArea = 0.0f;
    fArea = 3.14f * fRadius * fRadius;
    return fArea;
} 
int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of circle :");
    scanf("%f",&fRadius);

    fArea = AreaOfCircle(fRadius);
    printf("Area of circle is %f\n",fArea);

    return 0;
}