//input Row = 4 Column = 4
// a a a a
// b b b b
// c c c c
// d d d d
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';
    for(i = 1,ch=97;i <= iRow;i++,ch++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Please enter the Row : ");
    scanf("%d",&iValue1);

    printf("Please enter the Column : ");
    scanf("%d",&iValue2);


    Display(iValue1, iValue2);
    return 0;
}