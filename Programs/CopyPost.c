//program for copying one string to another post defined method
#include<conio.h>
#include<stdio.h>
void main()
{
    char a[20] ,b[20];
    int i=0;
    printf("enter the string=");
    scanf("%s",&a);
  while(a[i]!=NULL)
  {
   b[i]=a[i];
   i++;
  }
  b[i]=NULL;
    printf("this %s  is copied in B array",b);
}