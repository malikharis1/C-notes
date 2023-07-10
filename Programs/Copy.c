//program for copying one string to another predefined
#include<conio.h>
#include<stdio.h>
void main()
{
    char a[20] ,b[20];
    printf("enter the string=");
    scanf("%s",&a);
    strcpy(b,a);
    printf("this %s is copied in B array",b);
}