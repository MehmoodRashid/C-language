/*1. Write a C function to find the maximum of two numbers.*/
/*#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main(void)
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("%d is max\n",max(a,b));
    printf("%d is min\n",min(a,b));
    return 0;
}
*/
//2. Implement a function to calculate the factorial of a given number.
/*#include<stdio.h>
int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d",&num);
    if((num<0)){
        printf("IMPOSSIBLE\n");
    }
    else{
        int i=1;
        int fact=1;
        while(i<=num){
            fact=fact*i;
            i++;
        }
        printf("factorial= %d",fact);
    }

}
*/
/*
#include<stdio.h>
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("factorial =%d",fact(n));
    return 0;
}
*/
// Create a program to check if a number is prime or not using a function.
/*#include<stdio.h>

int main()
{
    while(1){
    int num,result;
    printf("Enter a number to check prime number\n");
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++){
        result=num%i;
        if(result==0)
            printf("not a prime number\n");
    }
    if(result!=0)
    printf("is prime \n");
    }//some errs
   return 0;
}*/
//Implement a program to find the sum of elements in an array.
/*#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("enter numbers in array\n");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    int sum;
    for(int i=0;i<size;i++)
        sum=sum+a[i];
     printf("sum of elements in array is %d",sum);

}
//Create a function to count the number of even and odd elements in an array.
#include<stdio.h>
int main()
{
    int size;
    printf("enter size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter values in array\n");
    for(int i=0; i<size; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<size; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d is even\n",a[i]);
        }
        else
        {
            printf("%d is odd\n",a[i]);
        }
    }
return 0;
}
//average of elements in array
#include<stdio.h>
int main()
{
    int size;
    printf("enter size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter values in array\n");
    for(int i=0; i<size; i++)
        scanf("%d",&a[i]);
    float avg;
    int sum=0;
    for(int i=0; i<size; i++)
       sum=sum+a[i];
    printf("sum of array is %d\n",sum);
    for(int i=0;i<size;i++)
        avg=sum/size;
    printf("average of array is %f",avg);

return 0;
}

#include<stdio.h>
int main()
{
    int rows;
    printf("enter number of rows\n");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j =0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }

}

#include<stdio.h>
#include<stdlib.h>
int add(int a,int b)
{
    int result;
    result=a+b;
    return result;
}
int sub(int a,int b)
{
    int result;
    result=a-b;
    return result;
}
int mult(int a,int b)
{
    int result;
    result=a*b;
    return result;
}
int main(void)
{
    int a,b,result,choice;
    printf("1 for add\n");
    printf("2 for subtraction\n");
    printf("3 for mult\n");
    printf("4 for div\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("enter two numbers\n");
        scanf("%d%d",&a,&b);
        printf("addition is %d\n",add(a,b));
        break;
    case 2:
        printf("enter two numbers\n");
        scanf("%d%d",&a,&b);
        printf("subtraction is %d\n",sub(a,b));
        break;
    case 3:
        printf("enter two numbers\n");
        scanf("%d",&a);
        scanf("%d",&b);
        printf("multiplication is %d\n",mult(a,b));
        break;



    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int size,j,i;
    printf("enter size of an array\n");
    scanf("%d",&size);
    int a[size];
    printf("enter values in array\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("enter a number to find weather it is in array or not\n");
    scanf("%d",&j);
    for(i=0;i<size;i++){
    if(a[i]==j){
        printf("found on %d iteration\n",i);
    }else
        printf("not found on %d iteration\n",i);
    }

    return 0;
}















