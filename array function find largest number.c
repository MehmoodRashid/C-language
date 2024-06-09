/*#include<stdio.h>
int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;

}
int min(int a, int b)
{
    if(a<b)
    return a;
    else
    return b;

}
int main(void)
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("the minimum value is %d\n",min(a,b));
    printf("the maximum value is %d\n",max(a,b));
    return 0;
}*/

#include<stdio.h>

int find_largest(int a[],int n)
{
    int i,max;
    max=a[0];
    for(i=1; i<n; i++)
        if(a[i]>max)
        max=a[i];
   return max;
}
int main(){
int a[]={5,4,6,2,9,10};
printf("max=%d\n",find_largest(a,6));
return 0;
}
