// the factorial of a number

#include <stdio.h>
#include <conio.h>
void main()
{
    int num, i,factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error: Factorial of negative number doesn't exist.");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d is %lld", num, factorial);
    }
}
