#include<stdio.h>
// #pragma pack(1)// to avoid structure padding
struct student
{
    // int x: 1;
    // int y: 2;

    // int z: 4;

    // int w: 8;
    // int a: 8;

    char a;//1
    // char d;
    // char e;
    // // char f;
    


    int c;//4
    char b;//1



}_attribute_(packed);;


int main(){


    struct student std;
    printf("the size of structure is :%ld",sizeof(std));
    // printf("the size of structure is :%ld",sizeof(double));

    return 0;
}