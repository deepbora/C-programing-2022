#include "myfile.h"
#include<stdio.h>
#include<stdlib.h>

extern int var;
void func123();
int main(){

    printf("this is print %d \n",var);
    printf("this is print %d \n",var1);
    // printf("this is print %d \n",var2);//this ocurs error because this is static variable..

    func123();
    // func123();


    return 0;
}