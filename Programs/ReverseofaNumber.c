#include<stdio.h>
#include<conio.h>
void main ()
{
    int num,rem;
    printf("TYPE ANY NUMBER TO CHECK THE REVERSE OF THAT NUMBER=");
    scanf("%d",&num);
    printf("the reverse of %d is=",num);
    for (;num>0;)
{
       rem = num%10;
        printf("%d",rem);
        num= num/10;
}
    getch();
}
