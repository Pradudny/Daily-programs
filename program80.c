//Input Row = 4 Column = 4 
// a b c d
// e f g h 
// i j k l 
// m n o p 
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0,j = 0;
    char ch = '\0';

    for(i = 1, ch = 'a'; i <= iRow; i++)
    {
        for(j = 1; j<= iCol; j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Please enter the number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}