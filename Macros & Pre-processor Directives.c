// Macros & Pre-processor Directives.
/*
Macros:
Macros are defined using the #define directive and are used to create symbolic constants or to perform text substitution. When the compiler encounters a macro name in the code, it replaces it with the corresponding value or expression defined by the macro.
*/
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main()
{
    double radius = 5.0;
    double area = PI * SQUARE(radius);

    printf("Area of the circle: %lf\n", area);

    return 0;
}
// some commonly used preprocessor directives:
/*
#include: Used to include header files in the source code.
#ifdef, #ifndef, #else, #endif: Used for conditional compilation based on macro definitions.
#if, #elif, #else, #endif: Used for conditional compilation based on constant expressions.
#pragma: Used to provide additional instructions to the compiler.
*/
#include <stdio.h>

#define ENABLE_FEATURE_A

int main()
{
    printf("This is a sample program.\n");

#ifdef ENABLE_FEATURE_A
    printf("Feature A is enabled.\n");
#else
    printf("Feature A is disabled.\n");
#endif

#ifdef ENABLE_FEATURE_B
    printf("Feature B is enabled.\n");
#else
    printf("Feature B is disabled.\n");
#endif

    return 0;
}
