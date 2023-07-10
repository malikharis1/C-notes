//program for reverse of an string post difined method
#include<conio.h>
#include<stdio.h>
void main()
{
    char a[20],temp;
    int i,j;
    printf("enter the string=");
    scanf("%s",&a);
    for(i=0,j=strlen(a)-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("the reversed string is %s",a);
}