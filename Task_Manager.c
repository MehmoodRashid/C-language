#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
int main()
{
 // declare variables
   char choice;
   int select;
// MENU
  printf("This is yours complete week schedule \n");
  printf("Press 'a' for MONDAY \n");
  printf("Press 'b' for TUESDAY \n");
  printf("Press 'c' for WEDNESDAY \n");
  printf("Press 'd' for THURSDAY \n");
  printf("Press 'e' for FRIDAY \n");
//for weekends
  printf("Press 'f' for SATURDAY \n");
  printf("Press 'g' for SUNDAY \n");
   printf("\t Enter your Day to see your schedule_\n");
   scanf("%c",&choice);

//Using switch statement
  switch(choice)
  {
  case 'a':// SCHEDULE OF MONDAY
    printf("\tSo today is MONDAY U have alot of work to do \n");
    printf("\tPress 1 for morning \n");
    printf("\tPress 2 for afternoon \n");
    printf("\tPress 3 for evening \n");
    printf("\tPress 4 for night \n");

     printf("enter choice\n");
     scanf("%d",&select);  //TAKE INPUT USER'S CHOICE
     switch(select)
     {
 case 1:
    printf("   Your morning schedule of MONDAY is following\n");
    printf("\t8:00AM_wakeup \n ");
    printf("\t  9:00AM__breakfast \n ");
    printf("\t    10:00AM till 12:00PM___study \n ");
    break;
 case 2:
    printf("Your afternoon schedule of MONDAY is following\n");
    printf("1:00PM till 2:30PM You have to go library \n ");
    printf("3:00PM__launch \n ");
    break;
 case 3:
     printf("Your evening schedule is following\n");
    printf("4:00PM till 5:00PM you have to go playground \n ");
    printf("6:00PM__evening tea\n");
    break;
 case 4:
    printf("Your night schedule is following \n");
    printf("From 7:00PM till 9:00PM you have to complete your assignments and projectes\n");
    printf("9:30PM__dinner\n");
    printf("After dinner you have to read books \n");
    printf("At 12:00AM sleep\n");
    break;
 default:
    printf("ERROR please enter number between 1-4\a");
     }
  //case 'b':

  }//switch of choice











   return 0;
}
