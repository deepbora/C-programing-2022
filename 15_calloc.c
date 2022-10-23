#include<stdio.h>

#include<stdlib.h>

int main(){


     int *ptr,n,i;

    printf("enter the size of array you want");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));  


    for(i =0;i<n;i++){
    printf("put the number %d",i);

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