#include<stdio.h>
int main()
{
    int matrix1[2][2];
    int matrix2[2][2];
    int result[2][2];
//taking values of first matrix
    printf("enter value of first matrix \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
//taking values of second matrix
    printf("enter values of second matrix\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
//performing multiplication of matrix
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            result[i][j]=0;
            for(int k=0; k<2; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
