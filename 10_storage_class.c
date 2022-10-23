#include"myfile.h"
#include<stdio.h>
int c;//global

extern int var;

int main(){
    //automatic
    auto int a;

    static int x;
    printf("%d local \n",a);

    register int b;

    printf("%d resister \n",b);

    printf("%d  gloabal\n",c);
    printf("%d  static \n",x);
    printf("%d  exteren \n",var);
 

    func123();




    

    return 0;
}