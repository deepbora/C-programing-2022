#include<stdio.h>


 void func(){
    func();
}

int main(){
    
    func();
    printf("deep");
    return 0;
}