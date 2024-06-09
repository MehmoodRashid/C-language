#include <stdio.h>//HEADER FILE
int main()//MAIN FUNCTION
{

    int choice,amount; //DECLARE INT VARIABLE choice,amount
    int current=10000;//DECLARE AND ASSIGN VARIABLE current=10000
    int sav=5000;//DECLARE AND ASSIGN VAIABLE sav
        printf("welcome to ATM\n");//PRINT welcome message
    while(1){  // infinite loop
            //main menu
            printf("1 for current account\n ");//print 1 for current account
             printf("2 for saving account\n");//2 for saving account
              printf("3 for exit\n");//3 for exit
             printf("enter your choice\n");//print enter your choice
             scanf("%d",&choice); //take choice from the user
    switch(choice)  //using switch statement to execute user's choice
    {//switch braks
    case 1://CASE 1 is for current account
        printf("your current account balance is %d\n",current);//show current account balance
        //submenu
        printf("\t deposit funds into current account press[ 5 ]\n");//print deposit funds into current account press[ 5 ]
        printf("\t withdraw funds from current account press[ 6 ]\n");//print withdraw funds from current account press[ 6 ]
        printf("\t return to main menu press[ 7 ]\n");//print return to main menu press[ 7 ]
         printf("enter choice from sub menu\n");//print enter choice from the sub menu
        scanf("%d",&choice);//input choice from user from sub menu
        if(choice==5){// USING IF STATEMENT TO DEPOSIT MONEY IN CURRENT ACCOUNT
            printf("enter amount to deposit money in current account\n ");//if user press 5 then print enter amount to deposit money in current account
            scanf("%d",&amount);//take input amount from the user
            current=amount+current; //add amount (taken from the user) into current account
            printf("your current account balance is %d after depositing money\n",current);//after addition in current account print the new value
        //withdraw
        }else if(choice==6){ //ELSE IF USER PRESS 6 THEN PRINT enter amount to withdraw from your current account
            printf("enter amount to withdraw from your current account\n");//printf is used to print the statement
            scanf("%d",&amount);//INPUT AMOUNT FROM THE USER TO WITHDRW MONEY
            current=current-amount;//AFTER TAKING INPUT FROM THE USER SUBTRACT IT FROM CURRENT AMOUNT
            if(amount>10000){ //USING IF STATEMENT FOR insufficient balance
                printf("insufficient balance__!\n");//IF AMOUNT >10000 THEN PRINT insufficient balance
            }
            printf("your current account balance is %d after withdrawing \n",current);//PRINT THE NEW VALUE OF SAVING ACCOUNT
        }else if(choice==7){//ELSE IF CHOICE = 7 THEN RETUN TO MAIN MENU
            printf("main menu\n");
        }
        else{// WHEN USER PRESS ANY INVALID KEY FROM THE SUB MENU THEN PRINT INVALID
           printf("invalid\n");
             }

        break;//BREAK STATEMENT IS USE TO BREAK THE CASE 1 STATEMENT
    case 2://CASE 2 is for saving account
        printf("your saving account balance is %d\n",sav);//show the value of saving account

        //sub menu
        printf("\t deposit funds into saving account press[ 8 ]\n");//print deposit funds into saving account press[ 8 ]
        printf("\t withdraw funds from saving account press[ 9 ]\n");//print withdraw funds from current account press[ 9 ]
        printf("\t return to main menu press[ 0 ]\n");//print return to main menu press[ 0 ]
         printf("enter choice from sub menu\n");//print enter choice from sub menu
        scanf("%d",&choice);//take choice from the user according to sub menu
        if(choice==8){//IF USER'S CHOICE IS 8 THEN PRINT enter amount to deposit money in saving account
            printf("enter amount to deposit money in saving account\n ");
            scanf("%d",&amount);//INPUT AMOUNT FROM THE USER TO DEPOSIT MONEY IN SAVING ACCOUNT
            sav=amount+sav;//ADD USER'S AMOUNT INTO SAVING ACCOUNT
            printf("your saving account balance is %d after depositing money\n",sav);//AFTER ADDITION IN SAVING ACCOUNT PRINT THE NEW VALUE
        //withdraw
        }else if(choice==9){//ELSE IF USER PRESS 9 THEN PRINT enter amount to withdraw from your saving account
            printf("enter amount to withdraw from your saving account\n");
            scanf("%d",&amount);//INPUT AMOUNT FROM THE USER TO WITHDRAW
            sav=sav-amount;//SUBTRACT THE AMOUNT FROM THE SAVING ACCOUNT
            if(amount>5000){//IF AMOUNT >5000 THEN PRINT insufficient balance
                printf("insufficient balance__!\n");
            }
            printf("your saving account balance is %d after withdrawing \n",sav);//PRINT THE NEW VALUE OF SAVING ACCOUNT AFTER THE DEDUCTION
        }else if(choice==0){//ELSE IF USER PRESS 0 THEN RETURN TO MAIN MENU
            printf("main menu\n");
        }
        else{//WHEN USER PRESS ANY INVALID KEY FROM THE SUB MENU THEN PRINT INVALID
           printf("invalid\n");
             }

        break;//BREAK STATEMENT IS USE TO BREAK THE CASE 2 STATEMENT
    case 3://case 3 is used to exit the program
        printf("goodbye :)\n");//when user press 3 print goodbye messege
        return 0;// return 0 is used to exit the loop
        break;//BREAK STATEMENT IS USE TO BREAK THE CASE 2 STATEMENT
    default://default is used when user press any invalid key print invalid!!
        printf("invalid!!\n");


    }//switch closed



    }//loop closed


return 0;//return 0 is used to execute the program
}//main closed
