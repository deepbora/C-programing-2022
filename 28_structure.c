#include<stdio.h>
#include<string.h>


struct  student
{
    int roll;
    char name[10];
    float marks;
    // char ch;
};
//declaration
struct student s1;

int main(){
struct student s1;

    // //intialization
    // s1.roll=10;
    // s1.marks=35.50;

    // //alternative--
    // struct student s3={11 ,34.45};
    // // s1.name="deep";

    // printf("the roll number is :%d\n",s1.roll);
    // printf("the s1 marks is is :%f\n",s1.marks);

    // printf("the s3 roll number is :%d\n",s3.roll);
    // printf("the s3 marks is is :%f\n",s3.marks);


    // printf("%ld",sizeof(s1));

    // // for (int i = 0; s1.name[i]!='\0'; i++)
    // // {
    // // printf("the roll number is :%s",s1.name);
        
    // // }    

     struct student s[50];
     int n,tmp;
     char ch='y';

     printf("how many student would you store");
     scanf("%d",&n);

     for (int i = 0; i < n; i++)
     {
        printf("enter the roll:");
        scanf("%d",&s[i].roll);
        printf("enter the name");
        scanf("%s",&s[i].name);
        
        

        printf("enter the marks");
        scanf("%f",&s[i].marks);
        
     }
     while (ch=='y' || ch=='Y')
     {
    

     printf("enter the roll for shearch");
     scanf("%d ",&tmp);

     for (int i = 0; i < n; i++)
     {
        if(s[i].roll==tmp){
            printf("the name of candidate is :%s",s[i].name);
        }else{
            printf("the candidate does not exist");
        }
     }
        printf("\n press y fo continue..");
        ch=gets();
     }
     
     

    
    

    return 0;
}