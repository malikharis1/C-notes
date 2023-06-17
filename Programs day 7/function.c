// Functions with No Return Value:
// These functions are declared with a return type of void and do not return a value. They are typically used for performing actions or operations without returning any result. For example:

void printMessage()
{
    printf("Hello, World!\n");
}
// Functions with Return Value:
// These functions return a value of a specified data type. The return type is declared explicitly in the function signature. For example:

int add(int a, int b)
{
    return a + b;
}

// Functions without Parameters:
// Functions that do not accept any parameters are declared without any arguments. They perform their operations based on internal logic or global variables. For example:

void greet()
{
    printf("Hello, how are you?\n");
}

// Functions with Parameters:
// These functions accept one or more parameters as input values. The parameters are specified within the parentheses in the function declaration. For example:

void multiply(int a, int b)
{
    int result = a * b;
    printf("Multiplication result: %d\n", result);
}

// Recursive Functions:
// Recursive functions are functions that call themselves either directly or indirectly. They are often used to solve problems that can be divided into smaller subproblems. Recursive functions have a base case that stops the recursive calls and a recursive case that calls the function again with a modified argument. For example:

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
//     Library Functions:
// Library functions are functions provided by the C standard library or other libraries. They perform specific operations, such as input/output, string manipulation, mathematical calculations, memory management, and more. Examples include printf(), scanf(), strlen(), malloc(), etc.