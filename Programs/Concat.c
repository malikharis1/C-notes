//program for merge string
#include<conio.h>
#include<stdio.h>
void main()
{
    char a[20] ,b[20];
    int i=0;
    printf("enter the string=");
    scanf("%s",&a);
    printf("enter the string=");
    scanf("%s",&b);
    strcat(a,b);
    printf("the concated string is %s",a);
}