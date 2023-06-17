#include <stdio.h>

void main()
{
    int num = 42;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value at the address pointed by ptr: %d\n", *ptr);
}
