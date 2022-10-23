#include<stdio.h>
int main(){


int a=10;
char ch='x';

void *p;

p=&a;
p=&ch;

printf("the value od a is :%d\n",*((int*)p));
printf("the value od a is :%c\n",*((char*)p));

//void pointer not allow to apply pointer arithmetic directly. we need to type case for resolve this problem

int arr[5]={1,2,3,4,5};
void *ptr=arr;

for(int i=0;i<5;i++){
    // printf("%d\n",ptr[i]);
    printf("%d\n",*((int* )ptr+i));//both same

}



return 0;

}