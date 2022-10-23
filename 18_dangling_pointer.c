#include<stdio.h>
#include<stdlib.h>

int *func(){

     static int x=100;// solve dangling ponter
    return &x;
}

int *func1(){
   static int arr[5]={1,2,3,4,5};// solve dangling ponter

    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    return arr;
    
}

int main(){

    int *ptr=(int*)malloc(3*sizeof(int));

    ptr[0]=10;
    

    printf("%d\n",ptr[0]);

    free(ptr);//dangling pointer

    printf("%d\n",ptr[0]);


    
     int *p= func();

     printf("%d\n",*p);//this is dangling poninter with out static 




     int *pt= func1();//with out static this is dangling pointer

     for (int i = 0; i < 5; i++)
     {
        printf("%d\n",pt[i]);
     }
     


    int *x;


    {
      static  int b=10;// solve dangling ponter
        x=&b;
    }

    printf("%d",*x);//this is dangling pointer


    return 0;
}