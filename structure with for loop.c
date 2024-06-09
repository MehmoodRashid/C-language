#include<stdio.h>
struct company
{
    char name[50];
    char address[50];
    int phone;
    int noemp;

};
int main()
{
    struct company com[2];
    for(int i=0;i<2;i++){
        printf("enter name\n");
        scanf("%s",com[i].name);
        printf("enter address\n");
        scanf("%s",com[i].address);
        printf("enter phone\n");
        scanf("%d",&com[i].phone);
        printf("enter no of employee\n");
        scanf("%d",&com[i].noemp);
    }
    //print
    for(int i=0;i<2;i++){
        printf("name is %s\n",com[i].name);
        printf("address is %s\n",com[i].address);
        printf("phone is %d\n",com[i].phone);
        printf("no. employee is %d\n",com[i].noemp);
    }

}
