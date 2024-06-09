#include<stdio.h>
#include<stdlib.h>
void addition(int mat1[2][2], int mat2[2][2], int result[2][2])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void subtraction(int mat1[2][2], int mat2[2][2], int result[2][2])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
int main()
{
    int mat1[2][2];
    int mat2[2][2];
    int sum[2][2];
    int sub[2][2];
    int choice;

    printf("enter values in matrix 1\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter values in matrix 2\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    //calling function
    addition(mat1,mat2,sum);
    subtraction(mat1,mat2,sub);
    //printing result
    printf("press 1 for addition\npress 2 for subtraction\n");
    printf("enter choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("result of addition\n");
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        printf("result of subtraction\n");
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                printf("%d\t",sub[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("Invalid\n");
    }
    return 0;
}
