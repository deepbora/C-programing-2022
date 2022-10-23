#include<stdio.h>

#include<string.h>

int main(){

    char ch[5];
    char ch1[5];

    gets(ch);

    printf("the length of the string : %li\n",strlen(ch));
    // gets(ch1);

    //copy
// strcpy(ch1,ch);
    // printf("the copy of strings is: %s\n",ch1);

//concatinate
    // printf("the concatineteof strings is: %s\n",strcat(ch,ch1));

    //compare

    // if(strcmp(ch,ch1)==0){
    //     printf("strings are equal");
    // }else{
    //     printf("strings are not equal");
    // }

    //lowercase



    // printf("lowercase %s\n",strrev(ch));




    return 0;
}