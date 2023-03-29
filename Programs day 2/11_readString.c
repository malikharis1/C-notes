#include <stdio.h>
#include <conio.h>
void main()
{
    char str[20];
    printf("Enter your name: ");
    scanf("%s", &str);
    printf("%s", str);
}

// %[^\n] for reading spaces also