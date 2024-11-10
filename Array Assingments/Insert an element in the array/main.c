#include <stdio.h>
#include <stdlib.h>
#define maxsize 50
int main()
{
    int arr[maxsize];
    int num ;
    int value;
    int position;

    printf("pleas enter number of element :\n\n" );

    scanf("%d",&num);
 printf(" Enter the element of array \n");
    for(int i=0;i<num;++i)
    {
        scanf("%d",&arr[i]);
    }
      printf("Enter the value you want to insert it \n");
      scanf("%d",&value);
      printf("Enter the position \n\n");
      scanf("%d",&position);

       for (int i=num;i>position-1;--i)
       {
           arr[i]=arr[i-1];
       }
       arr[position-1]=value;
       for(int i=0;i<num+1;i++)
       {
           printf("%d \t",arr[i]);
       }

    return 0;
}
