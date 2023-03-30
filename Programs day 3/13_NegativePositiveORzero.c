// check if a number is positive, negative or zero

#include <conio.h>
#include <stdio.h>

void main()
{
    int number ;
    printf("Enter the number : ");
    scanf("%d",&number);
    if (number > 0)
    {
        printf("Number is positive");
    }
    else if(number <0)
    {
        printf("Number is negative");

    }
    else{
        printf("Number is zero");

    }
    
}