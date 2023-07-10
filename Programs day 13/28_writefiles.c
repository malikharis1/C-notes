#include <stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("file.text", "r");
    if (fptr == NULL)
    {
        printf("The file is not opened. The program will "
               "exit now");
        exit(0);
    }
    else
    {
        printf("The file is created Successfully.");
    }
}