/*#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int main()
{
    int num;
    printf("enter a number to see its factorial: ");
    scanf("%d",&num);
    printf("factorial is %d\n",fact(num));
    return 0;
}*/
//pointers
#include<stdio.h>
int main()
{
/*    int age=22;
    int *agep;
    agep=&age;
    printf("%u",agep);*/

    int a,b,sum;
    int *ap,*bp;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    ap=&a;
    bp=&b;
     sum = *ap + *bp;
    printf("sum =%d \n",sum);
    printf("sum = %u \n",*ap);
    printf("sum = %u \n",bp);



}
