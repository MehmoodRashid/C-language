   
/*Positive, Negative or Zero:
Create a program that takes a number as input and uses if statements to determine if it's positive, negative, or zero.*/

#include<stdio.h> //BEGIN
int main()
{
     int num; //DECLARE num
     printf("ENTER A NUMBER TO DETERMINE POSITIVE, NEGATIVE, OR ZERO \n");
      scanf("%d",&num); //INPUT NUM

   if((num>0)){  // IF (NUM>0) {THEN PRINT POSITIVE}
    printf("NUMBER IS POSITIVE ");
   }
   else if((num<0)){  //ELSE IF (NUM<0){THEN PRINT NEGETIVE}
    printf("NUMBER IS NEGATIVE");
   }
   else if((num==0)){  //ELSE IF {THEN PRINT ZERO}
    printf("NUMBER IS ZERO ");
   }
       return 0;   //END
}
