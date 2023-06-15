#include <conio.h>
#include <stdio.h>
void main()
{
    int a[20], sum = 0, i, limit;
    printf("Enter the limit of an array: ");
    scanf("%d", &limit);
    printf("Enter the values in array: ");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("The sum of array is : %d", sum);
}