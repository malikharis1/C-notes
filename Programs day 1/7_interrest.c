#include <conio.h>
#include <stdio.h>
void main()
{
    float amount, interest, time, formula;
    printf("Enter the amount of loan: ");
    scanf("%f", &amount);
    printf("Enter the rate of interest: ");
    scanf("%f", &interest);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    formula = (amount * interest * time) / 100;
    printf("Interest earned : %f", formula);
}
