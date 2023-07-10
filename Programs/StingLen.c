//program for finding the length predefinded
#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    int len;
    printf("enter  the word whose length you want to find =\n");
    scanf("%s",&a);
    len = strlen(a);
    printf("the length of an word is =\n %d ",len);
}

