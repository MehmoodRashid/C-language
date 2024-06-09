/*#include<stdio.h>
int main()
{
    int x=5;
    int *y=&x;
    printf("%d\n",x);
    printf("%d\n",&x);//memory address of x
    printf("%u\n",y);//%u unsigned not negative//memory address of pointer y points to x
    printf("%d\n",*y);//value of pointer
    printf("%u\n",&y);//memory address of y pointer its self

   return 0;
}
 OUTPUT
5
6422044
6422044
5
6422032
*/

//swaping using pointers
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num1=1;
    int num2=2;
    printf("before swapping: num1=%d, num2=%d\n ",num1,num2);

    swap(&num1,&num2);
    printf("After swapping: num1=%d, num2=%d\n ",num1,num2);
    return 0;
}





















