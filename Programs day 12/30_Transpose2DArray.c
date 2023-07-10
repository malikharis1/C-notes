// date 04/december/2021 program for printing 2darray and transpose of 2darray
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], at[3][3], i, j;
    printf("enter the value in array=");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    // for printing 2d array
    printf("values of 2d array are=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    // for printing 2d array transpose
    printf("the transpose of an 2d array is= \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            // logic
            at[j][i] = a[i][j];
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", at[i][j]);
        printf("\n");
    }
}