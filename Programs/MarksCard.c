#include <stdio.h>
void main()
{
    float s, m, u, e, c, total, per;
    printf("enter the marks in science, math, urdu, english, chemistry=");
    scanf("%f%f%f%f%f", &s, &m, &u, &e, &c);
    total = s + m + u + e + c;
    printf("the total marks of a student is= %f ", total);
    per = total / 500 * 100;
    if (per <= 33)
        printf("bacha fail hai");
    if (per > 33 && per <= 50)
        printf("bacha baal baal bach gaya, grade C");
    if (per > 50 && per <= 75)
        printf("bachah pass hai lkn mehnat bolo karny ko, grade B");
    if (per > 75 && per <= 95)
        printf(" asl bach , grade A");
    if (per > 95)
    {
        printf("mubarak position");
    }
}
