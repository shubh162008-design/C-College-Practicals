// Aim: Calculate the area and perimeter of Circle, Square and Rectangle.

/*
Formula:-
1) Circle
   Area = 3.14 * r^2
   Circumference = 2 * 3.14 * r

2) Square
   Area = side * side
   Perimeter = 4 * side

3) Rectangle
   Area = length * breadth
   Perimeter = 2 * (length + breadth)
*/

#include <stdio.h>

int main() {
    float radius, side, length, breadth;
    float area_circle, peri_circle;
    float area_square, peri_square;
    float area_rectangle, peri_rectangle;

    // Circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area_circle = 3.14 * radius * radius;
    peri_circle = 2 * 3.14 * radius;

    // Square
    printf("Enter side of the square: ");
    scanf("%f", &side);
    area_square = side * side;
    peri_square = 4 * side;

    // Rectangle
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    area_rectangle = length * breadth;
    peri_rectangle = 2 * (length + breadth);

    // Output
    printf("\n--- Results ---\n");

    printf("Circle:\nArea = %.2f\nCircumference = %.2f\n\n", area_circle, peri_circle);

    printf("Square:\nArea = %.2f\nPerimeter = %.2f\n\n", area_square, peri_square);

    printf("Rectangle:\nArea = %.2f\nPerimeter = %.2f\n", area_rectangle, peri_rectangle);

    return 0;
}
