#include<stdio.h>
int main (){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if(age>=18 && age<=60){
        printf("You can drive ");
    }
    else{
        printf("You can not drive because you are underage");
    }

    return 0;
}