/*
//assignment of FOP.
//celsius into fahrenhiet.
#include<stdio.h>
#define fz 32.0
#define con 5.0/9.0
int main()
{
    float cel;
    float fah;
    printf("ENTER YOUR FAHRENHIET TEMP.  : ");
    scanf("%f",&fah);
    cel= con * (fah - fz);
    printf("cel=%f\n",cel);

    return 0;
}
*/

//calculate surface area and volume for the box
#include<stdio.h>
#define pi 3.1428
int main()
{
    float volume,l,w,h,area,rad;
//for volume
     printf("ENTER LENGTH ");
      scanf("%f",&l);
     printf("ENTER WIDTH ");
      scanf("%f",&w);
     printf("ENTER HEIGHT ");
      scanf("%f",&h);
//for radius
          printf("ENTER RADIUS ");
          scanf("%f",&rad);
//formula for volume & area
     volume=l*w*h;
     area=pi * rad*rad;

printf("volume=%f\n",volume);
printf("area=%f",area);
    return 0;
}






















