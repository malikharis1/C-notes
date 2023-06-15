// BUbble sort elements in an array

#include <conio.h>
#include <stdio.h>
void main()
{
    int a[20], i = 0, limit, temp, j;
    printf("Enter the limit of an array : ");
    scanf("%d", &limit);
    printf("Enter the element in an array: ");

    while (i < limit)
    {
        scanf("%d", &a[i]);
        i++;
    }
    // sort
    for (i = 1; i < limit; i++)
    {
        for (j = 0; j < limit - 1; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    i = 0;
    while (i < limit)
    {
        printf("%d ", a[i]);
        i++;
    }
}