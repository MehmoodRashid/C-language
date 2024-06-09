
/*Month Name Printer:
Write a program that takes a number (1-12) as input and prints the corresponding month name using if statements.*/
#include<stdio.h>
int main(void)
{
    int month;
     printf("ENTER NUMBER [1-12] TO CHECK MONTH \n");
      scanf("%d",&month);

      if((month==1)){
        printf("JANUARY\n");
      }
      else if((month==2)){
        printf("FEBRURY\n");
      }
      else if((month==3)){
        printf("MARCH\n");
      }
      else if((month==4)){
        printf("APRIL\n");
      }
      else if((month==5)){
        printf("MAY\n");
      }
      else if((month==6)){
        printf("JUNE\n");
      }
      else if((month==7)){
        printf("JULY\n");
      }
      else if((month==8)){
        printf("AUGUST\n");
      }
      else if((month==9)){
        printf("SEPTEMBER\n");
      }
      else if((month==10)){
        printf("OCTBOBER\n");
      }
      else if((month==11)){
        printf("NOVEMBER\n");
      }
      else if((month==12)){
        printf("DECEMBER\n");
      }
      else{
        printf("INVALID NUMBER");
      }

    return 0;
}
