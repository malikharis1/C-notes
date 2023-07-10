// program to check a number is prime or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int num, div = 2, flag = 0;
    // to get a number provided by the user
    printf("enter the number you want to check=");
    scanf("%d", &num);
    // loop
    while (div < num)
    {
        // statement to check a number is prime or not
        if (num % div == 0)
        {
            printf("%d is not prime", num);
            // flag goes 1 if it's not a prime number
            flag = 1;
            // the loop gets break here
            break;
        }
        div++;
    }
    // if above statement goes fail then this statement first checks is flag still 0
    if (flag == 0)
    {
        printf("%d is a prime number", num);
    }
}
