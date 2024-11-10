#include <stdio.h>
#include <stdlib.h>

int main()
{
   int counter_1;
   int counter_2;
   float arr[6];
   float sum=0;

   printf("Pleas enter your Numbers to calculate its average \n");

   for(counter_1=0;counter_1<6;++counter_1)
   {
       scanf("%f",&arr[counter_1]);

   }

   for (counter_2=0;counter_2<6;++counter_2)
   {
       sum+=arr[counter_2];

   }

   printf("\n Average equal =  %.2f ",sum/6);
    return 0;
}
