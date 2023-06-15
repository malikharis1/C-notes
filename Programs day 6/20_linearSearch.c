// search an element in an array

#include <conio.h>
#include <stdio.h>
void main()
{
    int a[20], i = 0, ele, flag = 0, limit;
    printf("Enter the limit of an array : ");
    scanf("%d", &limit);
    printf("Enter the element in an array: ");

    while (i < limit)
    {
        scanf("%d", &a[i]);
        i++;
    }
    printf("Enter the element you want to find: ");
    scanf("%d", &ele);
    // search
    for (i = 0; i < limit; i++)
    {
        if (a[i] == ele)
        {
            printf("Element found in an array");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is not found: ", ele);
    }
}