//calculate percentage
#include<stdio.h>

float CountPercentage(int marksObtained, int totalMarks)
{
    float fAns = ((float)(marksObtained)/(float)totalMarks)*100;
    return fAns; 
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fPercentage = 0.0f;

    printf("Enter the obtained marks in your exam : \n");
    scanf("%d",&iValue1);

    printf("Enter the total marks : \n");
    scanf("%d",&iValue2);

    fPercentage = CountPercentage(iValue1, iValue2);

    printf("Percentage is %f\n",fPercentage);
    return 0;
}