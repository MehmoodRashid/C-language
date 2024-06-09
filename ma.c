/*#include<stdio.h>
int main()
{
   int num,end;
   printf("enter a number: ");
    scanf("%d",&num);
   printf("enter ending number");
    scanf("%d",&end);
    do{
        printf("%d\n",num);
        num++;
    }while(num<=end);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int row;
    printf("enter number of rows: ");
    scanf("%d",&row);
    while(1){
    for(int i=0; i<row;i++){
        for(int j=0; j>i-row;--j){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0; i<row;i++){
        for(int j=0; j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0; i<row;i++){
        for(int j=0; j>i-row;--j){
            printf("\t\t>>>>>>");
        }
        printf("\n");
    }
    for(int i=0; i<row;i++){
        for(int j=0; j<i+1;j++){
            printf("\t\t>>>>>>");
        }
        printf("\n");
    }
    for(int i=0; i<row;i++){
        for(int j=0; j>i-row;--j){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0; i<row;i++){
        for(int j=0; j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0; i<row;i++){
        for(int j=0; j>i-row;--j){
            printf("\t\t<<<<");
        }
        printf("\n");
    }
    for(int i=0; i<row;i++){
        for(int j=0; j<i+1;j++){
            printf("\t\t >>>>");
        }
        printf("\n");
    }
    }
    return 0;
}
*/
/*#include<stdio.h>
void hello()
{
    printf("hello world\n");
}
int main()
{
    for(int i=0;i<=5;i++)
        hello();//calling function
    return 0;
}*/
//function
/*#include<stdio.h>
void salam()
{
    printf("salam\n");
}
void hello()
{
    printf("hello\n");
}
int main()
{
    char ch;
    printf("press m for muslim\npress n for non muslim\n");
    scanf("%c",&ch);
    if(ch=='m'||ch=='M')
        salam();
    else if(ch=='n'||ch=='N')
        hello();
    return 0;
}
*/

/*#include<stdio.h>//indirectly calling function
void salam()
{
    printf("salam\n");
    hello();
}
void hello()
{
    printf("hello\n");
}
int main()
{
    char ch;
    printf("press m for muslim\npress n for non muslim\n");
    scanf("%c",&ch);
    if(ch=='m'||ch=='M')
        salam();
    //else if(ch=='n'||ch=='N')
     //   hello();
    return 0;
}*/
/*
#include<stdio.h>
void print_Table(int n)
{
    for(int i=1;i<=10;i++)
        printf("%d x %d = %d\n",n,i,i*n);
}
int main()
{
    int i,n,end;
    printf("enter number to start table: ");
    scanf("%d",&n);
    print_Table(n);
    return 0;
}*/
















































































