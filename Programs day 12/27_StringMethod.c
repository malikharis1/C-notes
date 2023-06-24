#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // strlen() - calculates the length of a string
    int length = strlen(str1);
    printf("Length of str1: %d\n", length);

    // strcpy() - copies the content of one string to another
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // strcat() - concatenates two strings together
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // strcmp() - compares two strings
    int compare = strcmp(str1, str2);
    if (compare == 0)
    {
        printf("Strings are equal.\n");
    }
    else if (compare < 0)
    {
        printf("str1 is less than str2.\n");
    }
    else
    {
        printf("str1 is greater than str2.\n");
    }

    // strstr() - searches for a substring within a string
    char *substring = strstr(str1, "World");
    if (substring != NULL)
    {
        printf("Substring found: %s\n", substring);
    }
    else
    {
        printf("Substring not found.\n");
    }

    // strncpy() - extracts a substring from a string
    char substring2[100];
    strncpy(substring2, str1 + 6, 5);
    substring2[5] = '\0';
    printf("Extracted substring: %s\n", substring2);

    // strupr() - converts a string to uppercase
    char uppercase[100];
    strcpy(uppercase, str1);
    for (int i = 0; uppercase[i] != '\0'; i++)
    {
        uppercase[i] = toupper(uppercase[i]);
    }
    printf("Uppercase string: %s\n", uppercase);

    // strlwr() - converts a string to lowercase
    char lowercase[100];
    strcpy(lowercase, str1);
    for (int i = 0; lowercase[i] != '\0'; i++)
    {
        lowercase[i] = tolower(lowercase[i]);
    }
    printf("Lowercase string: %s\n", lowercase);

    // strrev() - reverses a string
    char reverse[100];
    strcpy(reverse, str1);
    int len = strlen(reverse);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = reverse[i];
        reverse[i] = reverse[j];
        reverse[j] = temp;
    }
    printf("Reversed string: %s\n", reverse);
}
