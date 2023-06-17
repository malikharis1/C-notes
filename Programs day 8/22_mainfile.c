#include <stdio.h>

// Function Declarations
void printMessage();
int addNumbers(int a, int b);
int factorial(int n);
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);

int main()
{
    // Built-in function call
    printf("Hello, World!\n");

    // User-defined function call
    printMessage();

    // Function call with parameters and return value
    int result = addNumbers(5, 7);
    printf("The sum is: %d\n", result);

    // Recursion: Factorial
    int num = 5;
    int fact = factorial(num);
    printf("Factorial of %d is: %d\n", num, fact);

    // Sorting: Bubble Sort
    int arr1[] = {5, 2, 8, 1, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    bubbleSort(arr1, n1);
    printf("Sorted array using Bubble Sort: ");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Sorting: Insertion Sort
    int arr2[] = {10, 4, 6, 2, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    insertionSort(arr2, n2);
    printf("Sorted array using Insertion Sort: ");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Sorting: Selection Sort
    int arr3[] = {7, 3, 9, 5, 2};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    selectionSort(arr3, n3);
    printf("Sorted array using Selection Sort: ");
    for (int i = 0; i < n3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}

// Function Definitions

// User-defined function to print a message
void printMessage()
{
    printf("This is a user-defined function!\n");
}

// User-defined function to add two numbers and return the sum
int addNumbers(int a, int b)
{
    return a + b;
}

// Recursive function to calculate the factorial of a number
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Bubble Sort algorithm
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Insertion Sort algorithm
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort algorithm
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
