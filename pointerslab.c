#include<stdio.h>
int main()
{
    int rohan=18;
    int *rohan_p;
    rohan_p = &rohan;
      printf("value of rohan variable is %d\n",rohan);
      printf("address stored in rohan_p variable is %d \n",rohan_p);
      printf("value of *rohan_p variable is %u \n",*rohan_p);
    return 0;
}
