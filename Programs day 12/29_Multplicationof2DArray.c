//program for multiplication of 2darray 
#include<conio.h>
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("enter the values for first 2darray= \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
     printf("enter the values for second 2darray=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    printf("the values after multiplication in 2darray=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0,sum=0;k<3;k++)
            sum= sum +(a[i][k]*b[k][j]);
            c[i][j]= sum;
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}