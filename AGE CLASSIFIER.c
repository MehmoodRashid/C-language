
    /*Age Classifier:
    Build a program that categorizes a person's age into different groups (child, teenager, adult, senior) based on their input age using if statements.*/
      /*let,
            assuming age:
                    children = 1-12
                    teenage  = 13-19
                    adult    = 20-59
                    senior   = 60-100 */
    #include<stdio.h>      // BEGIN
    int main(void)
    {
        int age;      // DECLARE AGE
         printf("ENTER NUMBER TO CATAGEGORIZES YOUR AGE \n");
          scanf("%d",&age);  //INPUT AGE from user

    if((age>=1 && age<=12)){     //IF ((AGE >=1 AND AGE<=12)){THEN PRINT CHILDREN}
        printf("you are a children \n");
    }
    else if((age>=13 && age<=19)){  //ELSE IF ((AGE >=13 AND AGE<=19)){THEN PRINT TEENAGER}
        printf("YOU ARE A TEENAGER \n");
    }
    else if((age>=20 && age<=59)){   // ELSE IF ((AGE>=20 AND AGE<=59)){THEN PRINT ADULT}
        printf("YOU ARE AN ADULT \n");
    }
    else if((age>=60 && age<=100)){  // ELSE IF ((AGE>=60 AND AGE<100)){THEN PRINT SENIOR}
        printf("YOU ARE A SENIOR \n");
    }
    else if((age==1500)){         // ELSE IF ((AGE == 1500)){THEN PRINT THOR}
        printf("YOU ARE MIGHT BE THOR ;) ");
    }else{                        // ELSE PRINT INVALID AGE
        printf("INVALID AGE \a");
    }
        return 0;      //END
    }
