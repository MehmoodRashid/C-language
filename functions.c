//FUNCTIONS
#include<stdio.h>
int sum(int a,int b)
{
    int result=a+b;
    return result;
}
int sub(int a,int b)
{
    int result=a-b;
    return result;
}
int mult(int a,int b)
{
    int result=a*b;
    return result;
}
float div(float a, float b)
{
    float result=a/b;
    return result;
}
int main()
{
    while(1){
    int a,b;
    int choice;
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
     scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("=========================\n");
        printf("\taddition\n");
        printf("=========================\n");
        printf("enter value of a\n enter value of b\n");
        scanf("%d%d",&a,&b);
        printf("addition = %d\n",sum(a,b));
        break;
    case 2:
        printf("=========================\n");
        printf("\tsubtraction\n");
        printf("=========================\n");
        printf("enter value of a\n enter value of b\n");
        scanf("%d%d",&a,&b);
        printf("subtraction = %d\n",sub(a,b));
        break;
    case 3:
        printf("=========================\n");
        printf("\tmultiplication\n");
        printf("=========================\n");
        printf("enter value of a\n enter value of b\n");
        scanf("%d%d",&a,&b);
        printf("multiplication = %d\n",mult(a,b));
        break;
    case 4:
        printf("=========================\n");
        printf("\tdivision\n");
        printf("=========================\n");
        printf("enter value of a\n enter value of b\n");
        scanf("%d%d",&a,&b);
        printf("division = %f\n",div(a,b));
        break;
    default:
        printf("you have pressed an invalid key\n");
    }
    }
    return 0;
}
