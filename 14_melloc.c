#include<stdio.h>
#include<stdlib.h>

int main(){

    //without heap
     int i;

    // printf("enter the number");
    // scanf("%d",&n);
    // int num[n];
    // printf("put the number %d",i);
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d",&num[i]);
    // }

    // for(int i=0;i<n;i++){
    //     printf("%d ",num[i]);
    // }
     
     //using heap--->
    int *ptr,n;

    printf("enter the size of array you want");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));  

    printf("put the number %d",i);

    for(i =0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

     for(i =0;i<n;i++){
        // printf("%d  ",ptr[i]);
        //atlternative
        printf("%d  ",*(ptr+i));

    }

    free(ptr);



    return 0;
}