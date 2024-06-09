/*#include<stdio.h>
int main()
{
  int a;
  printf("hi, this is rohan \n");
  printf("how many vowels are there in english ? \n");
   scanf("%d",&a);
  printf("there are 5 vowels",a);
return 0;
}
//_________________________________________________________________
*/

//integer and constant value

/*#include<stdio.h>
int main()
{
    int a=2;
    int b=3;
printf("integer value=%d\n",a);
printf("constant value=%d",b);
    return 0;
}*/
//_________________________________________________________________

/*
//calculator

#include<stdio.h>
int main()
{
    float a,b,sum,sub,multi,divid;
    printf("enter number  \n");
     scanf("%f",&a);
    printf("enter second number  \n");
     scanf("%f",&b);
 //formula
  sum=a+b;
  sub=a-b;
  multi=a*b;
  divid=a/b;
    printf("sum=%f\n",sum);
     printf("sub=%f\n",sub);
      printf("multi=%f\n",multi);
       printf("divide=%f",divid);
    return 0;
}*/
//________________________________________________________________

#include<stdio.h>
#define FZ 32
#define SCALE 9/5
//celsius into fahrenhiet f=c*(9/5)+32
int main()
{
    float cel,fah;
    printf("enter celsius temp ");
     scanf("%f",&cel);
    fah = cel * SCALE + FZ;
      printf("fahrenhiet=%f",fah);
    return 0;
}


















