//string are same or diffrent
#include<conio.h>
#include<stdio.h>
void main()
{
    char a[20] ,b[20];
    int i=0;
    printf("enter the first string=");
    scanf("%s",&a);
      printf("enter the second string=");
    scanf("%s",&b);

    if(strcmp(a,b)==0)
    printf("both are same");
    else 
    printf("both are different");
    
}
