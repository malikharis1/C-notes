#include <stdio.h>

int main()
{
    FILE *fptr;
    int number;

    // Open the file in write mode
    fptr = fopen("file.txt", "w");
    if (fptr == NULL)
    {
        printf("The file could not be opened for writing. The program will exit now.");
        return 1;
    }

    printf("Enter a number: ");
    scanf("%d", &number);

    // Write the number to the file
    fprintf(fptr, "%d", number);

    fclose(fptr); // Close the file

    // Open the file in read mode
    fptr = fopen("file.txt", "r");
    if (fptr == NULL)
    {
        printf("The file could not be opened for reading. The program will exit now.");
        return 1;
    }

    // Read the number from the file
    fscanf(fptr, "%d", &number);
    printf("Number read from file: %d\n", number);

    fclose(fptr); // Close the file

    return 0;
}
