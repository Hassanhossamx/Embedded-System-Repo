#include <stdio.h>
#include <stdlib.h>
struct  sstudent
{
    //int roll;
    char name[50];
    float marks;
};

int main()
{
    char y= y;
    int counter =0;
    struct sstudent x[10];
    printf("Enter information of students: \n");

do
{
   printf("for roll number %d\n",(counter+1));
   printf("Enter name\n",&x[counter].name);
   scanf("%s",&x[counter].name);
   printf("Enter marks \r\n");
   scanf("%f",&x[counter].marks);
   counter++;
   if(counter==10)
   {
       break;
   }
   printf ("\nDo you want to add more , press 'y' to continue\n");
}while(getch()=='y');

    return 0;
}
