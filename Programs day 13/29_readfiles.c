#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file.text", "r"); // Open the file in read mode
    if (fptr == NULL)
    {
        printf("The file could not be opened. The program will exit now.");
        return 1;
    }
    else
    {
        printf("The file is opened successfully.\n");
        // Read the contents of the file
        char c;
        while ((c = fgetc(fptr)) != EOF)
        {
            printf("%c", c);
        }
        fclose(fptr); // Close the file
        return 0;
    }
}
