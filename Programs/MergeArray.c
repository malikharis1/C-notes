// merge sorting

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[40], b[40], c[60], limit1, limit2, i, j, k;
    // for first array
    printf("enter the limit of first array=");
    scanf("%d", &limit1);
    printf("enter the value in first array=");
    for (i = 0; i < limit1; i++)
        scanf("%d", &a[i]);
    // for second array
    printf("enter the limit of second array=");
    scanf("%d", &limit2);
    printf("enter the value in second array=");
    for (i = 0; i < limit2; i++)
        scanf("%d", &b[i]);
    // logic
    for (i = 0, j = 0, k = 0; i < limit1 && j < limit2; k++)
    {
        if (a[i] < b[j])
            c[k] = a[i++];
        else
            c[k] = b[j++];
    }
    while (i < limit1)
        c[k++] = a[i++];
    while (j < limit2)
        c[k++] = b[j++];
    printf("values of an array after insertion is=");
    for (i = 0; i < limit1 + limit2; i++)
        printf("%d ", c[i]);
}
