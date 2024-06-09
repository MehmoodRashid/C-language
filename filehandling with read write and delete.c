/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    char data[]="mehmood";
    FILE *fp;
    fp=fopen("data.txt","w");
     if(fp==NULL){
        printf("error occurred !");
        return 1;//exit(1);
     }
     fputs(data,fp);
    return 0;
}
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char data[]="mehmood";
    int num=1;
    float price=15.2;
    char ch='X';
    FILE *fp;
    fp=fopen("data.txt","w");
     if(fp==NULL){
        printf("error occurred !");
        return 1;//exit(1);
     }
     //fputs(data,fp);
     fprintf(fp,"number=%d\nstring=%s\nprice=%f\nchar=%c\n",num,data,price,ch);

    return 0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char data[]="mehmood";
    int num=1;
    float price=15.2;
    char ch='X';
    FILE *fp;
    fp=fopen("data.txt","w");
     if(fp==NULL){
        printf("error occurred !");
        return 1;//exit(1);
     }
     fputs(data,fp);
     fprintf(fp,"number=%d\nstring=%s\nprice=%f\nchar=%c\n",num,data,price,ch);
     for(int i=0;data[i]!='\0';i++){
        fputc(data[i],fp);
     }
    return 0;
}*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char data[]="mehmood";
    int num=1;
    float price=15.2;
    char ch='X';
    FILE *fp;
    fp=fopen("data.txt","r");
     if(fp==NULL){
        printf("error occurred !");
        return 1;//exit(1);
     }/*
     fputs(data,fp);
     fprintf(fp,"\nnumber=%d\nstring=%s\nprice=%f\nchar=%c\n",num,data,price,ch);
     for(int i=0;data[i]!='\0';i++){
        fputc(data[i],fp);
     }*//*
     while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
     }
    return 0;
}*/




































