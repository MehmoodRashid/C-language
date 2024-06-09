/*#include<stdio.h>
#include<stdlib.h>
int factorial(int num)
{
    //base case
    if(num==1 || num==0)
        return 1;
    //recursive case
    else
        return num*(factorial(num-1));
}
int main()
{
    int num;
    printf("enter a number you want to see factorial: ");
    scanf("%d",&num);
    printf("factorial is %d ",factorial(num));

}*/
#include<stdio.h>
int num;
char ch;
int factorial(int num)
{
    if(num == 1 || num == 0)
        return 1;
    else
        return num*(factorial(num-1));
}
int main()
{
    printf("enter a number to see factorial: ");
    scanf("%d",&num);
    if(num<0){
        printf("not possible\n");
    }else if(num==ch)
        printf("invalid\n");
    else
    printf("factorial of %d is %d ",num,factorial(num));
    return 0;
}
