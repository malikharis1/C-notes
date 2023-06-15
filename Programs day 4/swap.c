#include <conio.h>
#include <stdio.h>
void main()
{

    int a, b, swipe;
    printf("Enter two number a , b: ");
    scanf("%d%d", &a, &b);
    printf("\nbefore swiping");
    printf("\nvalue in A : %d", a);
    printf("\nvalue in B : %d", b);
    swipe = a;
    a = b;
    b = swipe;
    printf("\nAfter swiping");

    printf("\nvalue in A : %d", a);
    printf("\nvalue in B : %d", b);
}