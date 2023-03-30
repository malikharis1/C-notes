// check if a number is even or odd

#include <conio.h>
#include <stdio.h>

void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}