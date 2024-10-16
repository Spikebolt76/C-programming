//triangle, circle, rectangle, square

#include <stdio.h>

int main()
{
    int shape;    //shape== choice of shape that you wanna find the area of

    printf("Enter your choice (1 for Circle, 2 for Rectangle, 3 for Square, 4 for Triangle): ");
    scanf("%d", &shape);
    
    switch(shape)
    {
        case 1 : 
        {
            float radius, area;
            printf("Enter Radius of the Circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of the Circle = %f",area);
            break;
        }
        case 2 : 
        {
            float l, b, area;
            printf("Enter Length l and Width b of the rectangle: ");
            scanf("%f %f", &l, &b);
            area = l * b;
            printf("Area of the rectangle is = %f",area);
            break;
        }
        case 3 : 
        {
            float l, area;
            printf("Enter Length l of the Square: ");
            scanf("%f", &l);
            area = l * l;
            printf("Area of the square is = %f",area);
            break;
        }
        case 4 : 
        {
            float b, h, area;
            printf("Enter base b and height h of the rectangle: ");
            scanf("%f %f", &b, &h);
            area = 1.0 / 2.0 * (b * h);
            printf("Area of the triangle is = %f",area);
            break;
        }
    }
    return 0;
}