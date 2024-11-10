#include <stdio.h>
#include <stdlib.h>

struct sstudent
{
    char name [40];
    int roll;
    float marks;
}student;
int main()
{
    //student data;
    printf("Pleas Enter information of student\n");

    printf("Enter name\n");
    scanf("%s",student.name);
    printf("Enter roll number\n");
    scanf("%d",&student.roll);
    printf("Enter marks\n");
    scanf("%f",&student.marks);

     printf("Displaying information\n");

     printf("name : %s\n",student.name);
     printf("roll : %d\n",student.roll);
     printf("Marks : %.2f\n",student.marks);

    return 0;
}
