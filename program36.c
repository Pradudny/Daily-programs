//Create the array and take the values from user
#include<stdio.h>
int main()
{
    int Arr[5];
    int i = 0;
    printf("Enter the numbers : \n");
    for(i = 0; i < 5;i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("Values from the array are :\n");

    for(i = 0; i < 5;i++)
    {
        printf("%d\t",Arr[i]);
    }
    return 0;
}