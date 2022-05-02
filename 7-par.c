// Calculate the area of circle and modify the same program to calculate the volume of a cylinder given its radius and height
#include <stdio.h>
int main()
{
    int radius = 4;
    float pi = 3.14;
    printf("Area of circle is %f\n", pi * radius * radius);
    int height = 8;
    printf("Volume of cylinder is %f\n", pi * radius * radius * height);
    return 0;
}
