#include<stdio.h>
int main()
{
    int age,options;
    char std,choice;
        printf("enter your age\n");
    while(1)
{
        scanf("%d",&age);
        if(age<0 || age>122){
            printf("invalid age\n");
         return 1;}
    printf("are you a student[Y/N]\n");
     scanf("%c",&choice);
     if(std=='Y'){
     printf("1 for package 1500\n");
     printf("2 for package 1800\n");
     printf("3 for package 2000\n");
     printf("4 for exit\n");
       }
   switch(options){
 case 1:






     }



}

    return 0;
}
