#include<stdio.h>
#include<stdlib.h>

//passing array with function
// void getarr(int arr[]){
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d",arr[i]);
//     }
// }

//passing array with function as pointer
//  void getarr(int *arr){
//     for (int i = 0; i < 5; i++)
//     {
//         // printf("%d",arr[i]);
//         printf("%d",*(arr+i));


//     }
// }
//passing array from the function using dynamic allocated array

// int *getarr(){
//     int size;
//     printf("enter the size array");
//     scanf("%d",&size);
//     int *ptr=(int*)malloc(size*sizeof(int));
//     printf("enter the elemet");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d",&ptr[i]);
//     }
//     return ptr;
    
// }





int main(){

    // int i,j,a[3][3]={{1,2,3},{2,3,4},{4,5,6}};

    // for(i=0;i<3;i++){
    //  for(j=0;j<3;j++){
    //     printf("%d",a[i][j]);


    //  }
    //  printf("\n");
    // }



//passing array with function as pointer

    // int arr[5]={1,2,3,4,5};

    // getarr(&arr[0]);




    // int n;

    // printf("enter the number");
    // scanf("%d",&n);
    // int num[n];
    // printf("put the number");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d",&num[i]);
    // }

    // for(int i=0;i<n;i++){
    //     printf("%d ",num[i]);
    // }
//passing array from the function using dynamic allocated array



// int *ptr=getarr();
// // int l=sizeof(ptr);//not applicable

// for (int i = 0; i < ptr[i]!='\0'; i++)//
// {
//     printf("%d\n",ptr[i]);
// }
// free(ptr);


//print arry using pointer


int arr[]={1,2,3,4,5};

int *ptr=arr;

for (int i = 0; i < ptr[i]!='\0'; i++)
{
    printf("%d",ptr[i]);
}


    
    
    
    return 0;
}