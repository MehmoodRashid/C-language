/*//LOGIN SYSTEM
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char username[50];
    char password[50];
    char user[50]="mehmood";
    char pass[50]="2380237";
   printf("Enter User Name : ");
    scanf("%s",&username);
   printf("Enter password : ");
    scanf("%s",&password);
   if(strcmp(username,user)==0 && strcmp(password,pass)==0){
    printf("congrats\n");
   } else
    printf("errr");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[5];
    int i,j;
    printf("enter numbers \n");

   for(i=0; i<5; i++){
    scanf("%d",&arr[i]);
   }
   printf("enter the value to find its iteration:");
   scanf("%d",&j);

   for(i=0;i<5;i++){  //logic
   if(arr[i]==j){
    printf("found on %d iteration\n",i);
   }else
      printf("not found on %d iteration\n",i);
   }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i=1,n,mult;
    printf("enter number to print table \n");
    scanf("%d",&n);
  while(i<=10){
    printf("%d * %d = %d\n",n,i,i*n);
    i++;
  }
    return 0;
}

































