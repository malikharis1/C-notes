#include <conio.h>
#include <stdio.h>
void main()
{
    int a[20], max = 0, i, limit;
    printf("Enter the limit of an array: ");
    scanf("%d", &limit);
    printf("Enter the values in array: ");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("The largest element in an array is : %d", max);
}