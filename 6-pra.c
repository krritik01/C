// Write a progrsm to find area of rectangle
#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Enter the value of length\n");
    scanf("%d", &length);

    printf("Enter the value of breadth\n");
    scanf("%d", &breadth);

    printf("Area of rectangle is %d", length * breadth);
    return 0;
}