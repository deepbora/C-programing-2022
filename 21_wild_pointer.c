#include<stdio.h>

int main(){

    int a=9;
    int *ptr;//this is wild pointer so we put this null int *ptr=null

    // *ptr=456;//this ocurs bug
    ptr=&a;

    printf("%d\n",*ptr);

    printf("the address of p is : %p\n",ptr);
    printf("the address of a is : %p",&a);

    return 0;
}