#include<stdio.h>
#include<string.h>

void func(char ch[]){
    for(int i=0;ch[i]!='\0';i++){
        printf("%c",ch[i]);
        ;

    }
    printf("\n");

}

void func1(char *ch){
     for(int i=0;ch[i]!='\0';i++){
        printf("%c",ch[i]);
        
    }
    printf("\n");
}

int main(){

    char ch[]={'a','b','c'};
    
    for (int i = 0; ch[i]!='\0'; i++)
    {
        printf("%c",ch[i]);
    }
    printf("\n");


    //for input from user

    // char c[5];

    // scanf("%s",c);

    // // fgets(c);

    // puts(c);
//stings with array..


    char s[10]="deep";
    func(s);
    func1(s);


//store string in a pointer


char *c="Deep";

     printf("%s",c);
     

    
    

    return 0;
}