/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j>=n-1){
                printf("*");
            }else{
            printf(" ");
            }
        }
        printf("\n");
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j<=n-1){
                printf("*");
            }else{
            printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char name1[50];
    char name2[50];
    printf("enter your name\n");
    scanf("%s",&name1);
    scanf("%s",&name2);
    printf("name is %s %s",name1,name2);

    return 0;
}*/
/*
//LOGIN SYSTEM
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char username[50];
    char password[50];

    char user[50]="rohan";
    char pass[50]="2380246";

    printf("enter user name : ");
     scanf("%s",&username);
    printf("enter your password : ");
     scanf("%s",&password);

   if(strcmp(username,user)==0 && strcmp(password,pass)==0){
    printf("congrats\n");
   }else{
    printf("invalid");
   }

    return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int arr[5]= {12,25,85,45,46};
    printf("enter a num  : \n");
    scanf("%d",&j);

    for(i=0; i<5; i++)
    {
        if(arr[i]==j )
        {
            printf("found on %d\n",i);
        }
    else
        printf("not found on %d\n",i);
    }
//for ends
    return 0;
}

















