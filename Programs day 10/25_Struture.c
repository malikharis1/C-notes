#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    struct Student student1;

    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter name: ");
    scanf("%s", student1.name);

    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
