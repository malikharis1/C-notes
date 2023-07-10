#include <stdio.h>
#include <conio.h>
void main()
{
    int fc, cc, rent, tbill, cm;
    printf("ENTER THE NUMBER OF CALLS MADE =");
    scanf("%d", &cm);
    if (cm <= 200)
    {
        fc = 0;
        cc = 0;
        rent = 200;
    }
    else if (cm > 200 && cm <= 400)
    {
        fc = 200;
        cc = 1;
        rent = 200;
    }
    else if (cm > 400 && cm <= 600)
    {
        fc = 300;
        cc = 2;
        rent = 300;
    }
    else if (cm > 600)
    {
        fc = 300;
        cc = 2;
        rent = 300;
    }
    tbill = (cm - fc) * cc + rent;
    printf("\ntotal number of free calls = %d", fc);
    printf("\ncall charge = %d", cc);
    printf("\n rent  = %d", rent);
    printf("\n\n\t\ttotal bill = %d", tbill);
    printf("\n\n\t\t Thanks for visting");
}
