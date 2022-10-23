/* static variable-A static variable is a variable that persists its value across the various function calls.

 static function-As we know that non-static functions are global by default means that the function can be accessed outside the file also, but if we declare the function as static, then it limits the function scope. The static function can be accessed within a file only. 

*/

#include<stdio.h>

int main(){

    void avg(){

       static int count=0;
        count++;
        printf("%d",count);
    }

    avg();
    avg();

    avg();

    // static void func()  
    // {  
    //     printf("Hello javaTpoint");  
    // }  
//  func();
printf("deep");

    return 0;
}