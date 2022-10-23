#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,sum;

    if(argc!=3){
        printf("please type ./sum value2 value2 ");
    }
    // for (int i = 0; i < argc; i++)
    // {
    //     sum +=sum+atoi(argv[i]);
    //     printf("sum of two number is : %d",sum);
    // }

    a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a+b;
        printf("sum of two number is : %d",sum);

    
    return 0;
}
