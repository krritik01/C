// Write a program to calculate simple interest for a set of values representing principal, no of years and rate of interest
#include<stdio.h>

int main(){
    int principal = 500, year = 2, rate = 4;
    int simpleintrest = (principal*rate*year)/100;
    printf("The value of simple intrest is %d", simpleintrest); 

    return 0;
}