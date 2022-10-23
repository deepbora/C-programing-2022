#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("the value of argc is :%d\n",argc);

    for(int i=0;i<argc;i++){
        printf("the content of store argv is :%s\n",argv[i]);
    }
    return 0;
}
