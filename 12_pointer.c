#include<stdio.h>

int *func(){
    int a[2]={1,2};
    // float b;
    // double c;

    return &a;
    
}

int main(){


    int a=10;
    int *p1=&a;
    int **p2=&p1;

    printf("%p \n",p1);
    // printf("%x \n",p2+1);

    // printf("%d \n",*p1);
    // printf("%d \n",**p2);

    // // printf("%d ",sizeof(func());

    // char c='a';
    //  char *ch=&c;

    //  printf("%x\n",&c+5);
    //  printf("%c\n",c);

     int arr[5]={1,2,3,4,5};

    //  int *p=arr;


    //  for (int i = 0; i < 5; i++)
    //  {
    //     // printf("%d",*(p+i));
    //     printf("%d\n",p[i]);


    //  }
     

// printf("%lu \n",sizeof(arr));


// printf("%u \n",&arr[0]);
// printf("%u \n",arr);
// printf("%u \n",&arr[1]);
// printf("%u \n",arr+1);


// printf("%d \n",arr[0]);
// printf("%d \n",*arr);
// printf("%d \n",*(&arr[0]));








    return 0;
}