#include <conio.h>
#include <stdio.h>
void main()
{
    int F, formula;
    printf("Enter the F value : ");
    scanf("%d", &F);
    formula = (F - 32) * 5 / 9;
    printf("The C is : %d", formula);
}