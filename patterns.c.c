/*#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
           if(i+j>=n*2){
            printf("*");
           }else{
            printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}
