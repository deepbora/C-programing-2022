#include<stdio.h>
#include<stdlib.h>

int main(){

    int a=10;

    int *ptr=NULL;
    ptr=&a;

    if(ptr!=NULL){
        printf("%d the adress of ptr is",*ptr);
    }else{
        printf("this is null");
    }




   
    return 0;
}