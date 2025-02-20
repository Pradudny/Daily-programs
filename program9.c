//calculate percentage greater than or equal to 40 is pass otherwise fail 
#include<stdio.h>

void CountPercentage(int marksObtained, int totalMarks)
{
    float fAns = ((float)(marksObtained)/(float)totalMarks)*100;
    if(fAns < 40)
    {
        printf("fail");
    }
    else
    {
        printf("Pass");
    }

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

     CountPercentage(iValue1, iValue2);

    return 0;
}