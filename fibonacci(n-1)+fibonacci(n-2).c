/*
#include<stdio.h>
int fibonacci(int n)
{
    //base case
    if(n<=1)
        return n;
    //recursive case
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int num ,sum=0;
    printf("enter a number\n");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d ",fibonacci(i));
        sum+=fibonacci(i);
    }
    printf("sum is %d \n",sum);
    printf("\n");
  return 0;
}//build logic
*/
/*
#include<stdio.h>
int i; //external variable or global variable//by default value of i is 0

void print_count(i)
{
    printf("T minus %d and counting\n",i);
   return i;
}
int main(void)
{
    for(i=10;i>0;--i)
     print_count(i);
   return 0;
}
*/
#include<stdio.h>
//outer function to calculate the area of circle
float calculateArea(float radius)
{
    //nested function to calculate square of number
    float square(float num)
    {
        return num*num;
    }
    return 3.14*square(radius);
}
int main()
{
    float radius;

    printf("enter the radius of circle: ");
    scanf("%f",&radius);

    printf("area of circle is %f \n",calculateArea(radius));
    return 0;
}


































