#include <stdio.h>

// Struct example
struct Rectangle
{
    int width;
    int height;
};

// Union example
union Shape
{
    int sides;
    float radius;
};

void main()
{
    // Struct usage
    struct Rectangle rect;
    rect.width = 10;
    rect.height = 5;
    printf("Rectangle - Width: %d, Height: %d\n", rect.width, rect.height);

    // Union usage
    union Shape shape;
    shape.sides = 4;
    printf("Shape - Sides: %d\n", shape.sides);
    shape.radius = 2.5;

    printf("Shape - Radius: %f\n", shape.radius);
}
