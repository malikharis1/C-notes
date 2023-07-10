//program for reverse of an string
#include<conio.h>
#include<stdio.h>
void main()
{
    char a[20];
    printf("enter the string=");
    scanf("%s",&a);
    strrev(a);
    printf("the reversed string is %s",a);
}