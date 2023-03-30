// program to print the greatest num in three variable

#include <conio.h>
#include <stdio.h>
void main()
{

    int num1, num2, num3;
    printf("Enter three values: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is the greatest number", num1);
        }
        else
        {
            printf("%d is the greatest number", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is the greatest number", num2);
        }
        else
        {
            printf("%d is the greatest number", num3);
        }
    }
}