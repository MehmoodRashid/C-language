#include<stdio.h>
struct student{
   char name[50];
   int rollnumber;
   float marks[3];
};
int main()
{
    struct student students[3];
    float averagemarks;

    //input information for three student
    for(int i=0; i<3; ++i){
        printf("enter details for student %d:\n ",i+1);
        printf("Name: ");
        scanf("%s",students[i].name);
        printf("Roll Number: ");
        scanf("%d",&students[i].rollnumber);
        printf("marks in three subjects. ");
        for(int j=0; j<3; ++j){
            scanf("%f",&students[i].marks[j]);
        }
    }
    //display student details and calculate avg marks
    printf("\nstudents details and avg Marks: \n");
    for(int i=0;i<3;++i){
        printf("student %d:\n",i+1);
        printf("name %s:\n",students[i].name);
        printf("roll number %d:\n",students[i].rollnumber);
        printf("marks  %f\n%f\n%f:\n",students[i].marks[0] + students[i].marks[1] + students[i].marks[2]);

   //calculate the avg marks
   averagemarks=(students[i].marks[0] + students[i].marks[1] + students[i].marks[2])/3.0;
        printf("average marks: %f\n",averagemarks);
    }
    return 0;
}
