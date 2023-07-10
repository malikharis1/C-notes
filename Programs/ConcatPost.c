//program for merge string post defined method
#include<conio.h>
#include<stdio.h>
void main()
{
    char a[20] ,b[20];
    int i,j;
    printf("enter the string=");
    scanf("%s",&a);
    printf("enter the second string=");
    scanf("%s",&b);
    for(i=strlen(a),j=0;b[j]!=NULL;i++,j++)
        a[i]=b[j];
        a[i]=NULL;
    printf("the concated string is %s",a);
}