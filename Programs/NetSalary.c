#include <stdio.h>
#include <conio.h>
void main()
{
    float hra, ta, ma, da, pf, gdf, bs, gs, ns;
    printf("ENTER THE AMOUNT OF BASIC SALARY =");
    scanf("%f", &bs);
    if (bs >= 30000)
    {
        hra = (bs * 20) / 100;
        ta = (bs * 15) / 100;
        ma = (bs * 18) / 100;
        da = (bs * 12) / 100;
        pf = (bs * 20) / 100;
        gdf = (bs * 10) / 100;
    }
    else if (bs < 30000 && bs >= 20000)
    {
        hra = (bs * 15) / 100;
        ta = (bs * 12) / 100;
        ma = (bs * 10) / 100;
        da = (bs * 8) / 100;
        pf = (bs * 15) / 100;
        gdf = (bs * 8) / 100;
    }
    else if (bs < 20000 && bs >= 10000)
    {
        hra = (bs * 10) / 100;
        ta = (bs * 8) / 100;
        ma = (bs * 6) / 100;
        da = (bs * 6) / 100;
        pf = (bs * 10) / 100;
        gdf = (bs * 6) / 100;
    }
    else if (bs < 10000)
    {
        hra = (bs * 5) / 100;
        ta = (bs * 3) / 100;
        ma = (bs * 2) / 100;
        da = (bs * 0) / 100;
        pf = (bs * 3) / 100;
        gdf = (bs * 0) / 100;
    }
    gs = hra + bs + ta + ma + da;
    ns = gs - (pf + gdf);
    printf("\nthe total HRA is = %f", hra);
    printf("\nthe total TA is = %f", ta);
    printf("\nthe total MA is = %f", ma);
    printf("\nthe total DA is = %f", da);
    printf("\nthe total PF is = %f", pf);
    printf("\nthe total GDF is = %f", gdf);
    printf("\n\n\t\tthe total GS is = %f", gs);
    printf("\n\n\t\tthe total NS is = %f", ns);
}
