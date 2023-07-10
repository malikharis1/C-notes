#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], i, j;
    printf("enter the values in 2darray= \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

            scanf("%d", &a[i][j]);
    }
    printf("the values of 2d array is = \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}