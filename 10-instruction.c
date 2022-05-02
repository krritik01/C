#include <stdio.h>

int main()
{
    // int a = 4;      //Type declaration instruction
    // int b = a;     //Type declaration instruction
    // int c = a;    //Type declaration instruction

    // printf("The value of a is %d\n", a);
    // printf("the value of b is %d\n",b);
    // printf("The value of c is %d\n",c);

    // float a = 1.1;   //Type declaration instruction
    // float b = a+3;   //Type declaration instruction
    // printf("The value of b is %f\n", b);

    int a = 4;
    int b = 13;
    int c = 29;
    int d = c / a;

    printf("The value of a+b+c is %d\n\n", a + b + c); // Arithemetic Insruction
    printf("The value of a*b*c is %d\n\n", a * b * c); // Arithemetic Insruction
    printf("The value of a-b-c is %d\n\n", a - b - c); // Arithemetic Insruction
    printf("The value of a/b/c is %d\n\n", a / b / c); // Arithemetic Insruction
    printf("The value of d is %d\n\n", d);             // Arithemetic Insruction

    printf("29 when divided by 8 leaves a remainder of %d\n\n", 29 % 8); //(29%8 here % this is modular operator which returns remainder and cannot be applied on float)

    
    return 0;
}