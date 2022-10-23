#include<stdio.h>

int main(){

    FILE *ptr=NULL;
    char ch[200];
    char c;

    
    //*****reading and writing file  other function****

    // ptr=fopen("file2.txt","w+");
    // fprintf(ptr,"hello world");
    // while (fscanf(ptr,"%s",ch)!=EOF)
    // {
    //     printf("%s",ch);
    // }

    // fclose(ptr);

    //fputc

    // ptr=fopen("file3.txt","w");
    // fputc('a',ptr);
    // fclose(ptr);
    
    //fgetc

    // ptr=fopen("file3.txt","r");

    // while (fgetc(ptr)!=EOF)
    // {
    //     printf("%c",c);
    // }
    

    //fputs

    // ptr=fopen("file3.txt","a");

    // fputs("\nthis is new line",ptr);
    // fclose(ptr);
    
    //fgets

    ptr=fopen("file3.txt","r");

    printf("%s",fgets(ch,200,ptr));
    fclose(ptr);


    
    return 0;
}