/*
#include<stdio.h>
#define PI 3.1428
int main()
{   // AREA FOR CIRCLE
    float rad,areacircle;  //declare  rad,areacircle
    printf("ENTER RADIUS: ");
    scanf("%f",&rad);  //input rad
//formula
    areacircle = PI * rad*rad;  //compute
    printf("area of circle=%f\n",areacircle);  //output

// AREA FOR TRIANGLE

    float b,h,areatriangle;
    printf("ENTER BREATH OF TRIANGLE:  ");
    scanf("%f",&b);
    printf("ENTER HEIGHT: ");
    scanf("%f",&h);
//formula
    areatriangle = 0.5 * (b*h);
    printf("area of triangle=%f",areatriangle);

    return 0;
}*/
#include<stdio.h>
int main()
{
    int a,b,c;
      printf("Enter value of a ");
      scanf("%d",&a);
     printf("Enter value of b ");
      scanf("%d",&b);
     c=a;
     a=b;
     b=c;
     printf("a = %d\n",a);
     printf("b = %d\n",b);
     
    return 0;
}