#include<stdio.h>

#define PI 3.14

//macro

#define SQUER(r) r*r

int main(){

    float var= PI;
    int r=2;

    printf("the value of var is :%2.2f",var);
    printf("the area if circle is :%2.2f",PI * SQUER(r));
    

    return 0;
}