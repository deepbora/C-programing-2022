#include<stdio.h>
int var=10;


static int var1=100;


  void func123(){

    static int var2=8;
    var2++;

    // printf("this is a gloabl functin call");
    printf("%d\n",var2);

}