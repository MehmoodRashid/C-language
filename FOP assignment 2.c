#include<stdio.h>  //HEADER FILE
#define pi 3.1428  // DEFINE VALUE OF PI
#define const1 0.5  //DEFINE VALUE OF CONSTANT
int main()
{
    int choice;// DECLARE INTEGER VARIABLE (choice) FROM THE USER
    float area,rad;// DECLARE FLOAT VARIABLES(area,rad) FROM THE USER
    float length,width;//DECLARE FLOAT VARIABLE (length,width) FROM THE USER
    float height;//DECLARE FLOAT VARIABLE (height) FROM THE USER
    float side;//DECLARE FLOAT VARIABLE (side) FROM THE USER
    float base;//DECLARE FLOAT VARIABLE (base) FROM THE USER
    float base1,base2;//DECLARE FLOAT VARIABLE (base1 , base2) FROM THE USER

    do{    // USING DO STATEMENT
        printf("enter 1 for circle\n");      //DISPLAYS MENU TO USER FROM (1-7) AND 7 TO EXIT
        printf("enter 2 for rectangle\n");
        printf("enter 3 for triangle\n");
        printf("enter 4 for square\n");
        printf("enter 5 for parallelogram\n");
        printf("enter 6 for trapazoide\n");
        printf("enter 7 to exit the program \n");

        scanf("%d",&choice);  // INPUT CHOICE FROM THE USER TO SELECT ANY ONE FROM THE MENU

        switch(choice)  //USING SWITCH STATEMENT TO RUN THE CHOICE OF THE USER
        { //switch brak
    case 1:    // CASE 1 IS USED TO FIND AREA OF THE CIRCLE
        printf("area of circle\n");
        printf("enter radius\n");
         scanf("%f",&rad);    //INPUT rad(RADIUS) FROM THE USER
        area = pi*rad*rad;    //COMPUTE AREA FOR THE CIRCLE
        printf("area of circle = %f\n",area);   //OUTPUT AREA OF CIRCLE
        break;
    case 2:  // CASE 2 IS USED TO FIND AREA OF RECTANGLE
        printf("area for rectangle\n");
        printf("enter length and width\n");
         scanf("%f%f",&length,&width);  //INPUT LENGTH AND WIDTH FROM THE USER
        area=length*width;  //COMPUTE AREA FOR RECTANGLE
        printf("area of rectangle = %f\n",area); //OUTPUT AREA OF RECTANGLE
        break;
    case 3:   // CASE 3 IS USED TO FIND AREA OF TRIANGLE
        printf("area for triangle\n");
        printf("enter base and height\n");
        scanf("%f%f",&base,&height); //INPUT BASE AND HEIGHT FROM THE USER
        area=const1*base*height; //COMPUTE AREA OF TRIANGLE
         printf("area of triangle = %f\n",area);
         break;
    case 4:   // CASE 4 IS USED TO FIND AREA OF SQUARE
        printf("area for square\n");
        printf("enter side\n");
         scanf("%f%f",&side,&side); //INPUT TWO SIDES FROM THE USER
        area=side*side;  //COMPUTE AREA OF SQUARE
         printf("area of square = %f\n",area); //OUTPUT AREA OF SQUARE
         break;
    case 5:   // CASE 5 IS USED TO FIND AREA OF PARALLELOGRAM
         printf("area for parallelogram\n");
        printf("enter base and height\n");
         scanf("%f%f",&base,&height);  //INPUT BASE AND HEIGHT FROM THE USER
        area=base*height;  //COMPUTE AREA FOR PARALLELOGRAM
         printf("area of parallelogram = %f\n",area); // OUTPUT AREA OF PARALLELOGRAM
         break;
    case 6:   // CASE 6 IS USED TO FIND AREA OF TRAPOZOID
         printf("area for trapozid \n");
        printf("enter base1 and base2\n");
         scanf("%f%f",&base1,&base2);  //INPUT BASE1 AND BASE2 FROM THE USER
        printf("enter height\n");
         scanf("%f",height);  //INPUT HEIGHT FROM THE USER
        area=const1 * (base1+base2) * height; //COMPUT AREA OF TRAPOZOID
         printf("area of trapozoid = %f\n",area); //OUTPUT AREA OF TRAPOZOID
         break;
    case 7:   // CASE 7 IS USED TO EXIT THE PROGRAM
        printf("goodbye :)\n"); //THE USER HAS PRESSED 7 SO GOODBYE
        break;
    default:  //DEFAULT STATEMENT IS USED IF THE USER PRESS ANY WRONG KEY WHICH IS NOT IN THE RANGE OF (1-7) THEN DISPLAY INVALID
        printf("invalid\n");
        break;
        }//switch brac

    }while(choice!=0);  //WHEN THE USER PRESS KEY '0' THE PROGRAM TERMINATES AND EXIT FROM THE LOOP

    return 0;
}
