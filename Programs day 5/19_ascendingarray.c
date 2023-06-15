#include <conio.h>
#include <stdio.h>
void main()
{
    int a[20], asc = 0, i, limit, j, temp;
    printf("Enter the limit of an array: ");
    scanf("%d", &limit);
    printf("Enter the values in array: ");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < limit; i++)
    {
        temp = i;
        for (j = 1; j < limit; j++)
        {
            if (a[j] < a[temp])
            {
                temp = j;
            }
        }
        

    }
}