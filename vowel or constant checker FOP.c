// Mehmood Rashid
/*Vowel or Consonant Checker:
Create a program that takes a single character as input and determines whether it's a vowel or a consonant using if statements.*/
                 //PSEUDO CODE IS WRITEN WITH SINGLE COMMENT
#include<stdio.h>
int main(void)
{
    char a,e,i,o,u,vowel,consonant;//declare variables a,e,i,o,u,vowel,consonant
     printf("ENTER A CHARACTER TO DETERMINE EITHER VOWEL OR CONSONANT \n");
      scanf("%c",&vowel);       //input letter from user

    if((vowel=='a'))           //IF(vowel = 'a'){ print a as vowel }
        {
        printf("%c is a VOWEL \n",vowel);
    }
    else if ((vowel=='e'))     //ELSE IF(vowel = 'e'){ print e as vowel }
        {
        printf("%c is a VOWEL \n",vowel);
    }
    else if((vowel=='i'))      //ELSE IF(vowel = 'i'){ print i as vowel }
        {
        printf("%c is a VOWEL \n",vowel);
    }
    else if((vowel=='o'))      //ELSE IF(vowel = 'o'){ print o as vowel }
        {
        printf("%c is a VOWEL \n",vowel);
    }
    else if((vowel=='u'))      //ELSE IF(vowel = 'u'){ print u as vowel }
        {
        printf("%c is a VOWEL \n",vowel);
    }
    else {                      //ELSE { print consonant }
        printf("%c is a CONSONANT ",consonant);
    }
    return 0;
}                              //END
