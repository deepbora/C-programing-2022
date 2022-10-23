// #include "01_printf.c"
#include<stdio.h>

/*

variable are container use to store data..

types of variable--

1.local varible-->use with in fuction
2. global variable-->use entier program
3.static variable-->It retains its value between multiple function calls.
4.autometic varible-->All variables in C that are declared inside the block, are automatic variables by default. We can explicitly declare an automatic variable using auto keyword.
5.externel varible-->

*/
int z=10;//global vriable..
int main(){


        

        float a=29.2;//local
        printf("the value of a is %f\n",a);
       


        void func(){
            int b;//this is the local variable..
            static int c=1;
            c++;
            printf("function called..\n");
            printf(" the value of static variable : %d \n",c);
            printf(" the value of a : %f \n",a);
            printf(" the value of z : %d\n",z);



        }


        func();
        func();
        func();
            // printf(" the externel variable is : %d ",x);

        

    return 0;
}