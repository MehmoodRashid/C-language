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
void print_Table(int n)//formal parameter
{
    for(int i=1;i<=10;i++)
        printf("%d x %d = %d\n",n,i,i*n);
}
int main()
{
    int i,n,end;
    printf("enter number to start table: ");
    scanf("%d",&n);
    print_Table(n);//argument,actual parameter
    return 0;
}*/
/*
#include<stdio.h>
void calculate_price(float value)
{
    value=value+(0.18*value);
    printf("final value is %f\n",value);
}
int main()
{
    int n;
    printf("enter value: ");
    scanf("%d",&n);
    calculate_price(n);
    printf("your actual value is %d",n);
    return 0;
}*/
/*
#include<stdio.h>
#define PI 3.142
float area_of_circle(float radius,float areaCR)
{
    printf("enter radius to find area of circle: ");
    scanf("%f",&radius);
    areaCR= PI*radius*radius;
    return areaCR;

}
float area_of_square(float side,float areaSQ)
{
    printf("enter side to find area of square: ");
    scanf("%f",&side);
    areaSQ= side*side;
    return areaSQ;
}
float area_of_rectangle(float length, float width, float areaREC)
{
    printf("enter length & width to find area of rectangle: ");
    scanf("%f",&length);
    scanf("%f",&width);
    areaREC= length*width;
   return areaREC;

}
//main function
int main()
{
    int choice;
    float radius,areaCR;
    float side,areaSQ;
    float areaREC,length,width;
    printf("press 1 for area of circle\n");
    printf("press 2 for area of square\n");
    printf("press 3 for area of rectangle\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("area of circle is %f\n",area_of_circle(radius,areaCR));
        break;
    case 2:
        printf("area of square is %f\n ",area_of_square(side,areaSQ));
        break;
    case 3:
        printf("area of rectangle is %f\n ",area_of_rectangle(length,width,areaREC));
        break;
    }//...
    return 0;
}
*/
//recursion
#include<stdio.h>
void printHW(int n)
{
    if(n==0)
        return;
    printf("hello world %d \n",n);
    printHW(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printHW(n);
    return 0;
}

























