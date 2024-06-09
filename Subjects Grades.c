#include <stdio.h>
#define TOTAL 300
int main()
{
    float urdu;
    float math;
    float phy;
    float sum,per;
     printf("Enter Marks Of Urdu\n");
      scanf("%f",&urdu);
     printf("Enter Marks Of Math\n");
      scanf("%f",&math);
     printf("Enter Marks Of Physics\n");
      scanf("%f",&phy);
 //calculation
    sum=urdu+math+phy;
    per=sum/TOTAL * 100;
  printf("percentage = %f\n",per);

 if(per>=80 && per<=100)
  {
      printf("GRADE A!\n");
       printf("EXCELLENT!\n");
  }
else if(per>=70 && per<=79)
  {
      printf("GRADE B!\n");
       printf("NOT BAD!\n");
  }
else if(per>=60 && per<=69)
  {
      printf("GRADE C!\n");
       printf("NEED MORE IMPROVEMENT!\n");
  }
else if(per>=50 && per<=59)
  {
      printf("GRADE D!\n");
       printf("JUST PASS!\n");
  }
else if(per>=40 && per<=49)
  {
      printf("GRADE E!\n");
       printf("WORK HARD!\n");
  }
else
  {
      printf("GRADE F!\n");
       printf("BETA TU FAIL HOGIA\a!\n");
  }

    return 0;
}
