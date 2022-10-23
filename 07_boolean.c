
/*
In C, Boolean is a data type that contains two types of values, i.e., 0 and 1. Basically, the bool type value represents two types of behavior, either true or false. Here, '0' represents false value, while '1' represents true value.


*/

#include<stdio.h>
#include<stdbool.h>

int main(){

  bool x=false; // variable initialization.  
if(x==true) // conditional statements  
{  
printf("The value of x is true");  
}  
else  
printf("The value of x is FALSE\n"); 



//bool using in array

bool b[2]={true,false}; // Boolean type array  
for(int i=0;i<2;i++) // for loop  
{  
printf("%d,",b[i]); // printf statement  
}  
    return 0;
}