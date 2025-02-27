//dynamic memorey allocation
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    ptr = (int*)malloc(iLength * sizeof(int));
    free(ptr);
    return 0;
}