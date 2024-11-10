#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   float arr_1[2][2];
   float arr_2[2][2];

   printf("pleas Enter your data of your matrix 1 its size 2 * 2 \n");

   int counter_1;
   int counter_2;
   int counter_3;
   int counter_4;

   for (counter_1=0;counter_1<2;++counter_1)
   {
       for(counter_2=0;counter_2<2;++counter_2)
       {
           scanf("%f",&arr_1[counter_1][counter_2]);

       }
   }
   printf("pleas Enter your data of your matrix 2 its size 2 * 2 \n");

      for (counter_3=0;counter_3<2;++counter_3)
   {
       for(counter_4=0;counter_4<2;++counter_4)
       {
           scanf("%f",&arr_2[counter_3][counter_4]);

       }
   }

    printf("\n the summation of your array is equal \n\n");
   float summation_arr[2][2];

   for (int x=0;x<2;++x)
   {
       for(int y=0;y<2;++y)
       {
           summation_arr [x][y]=arr_1[x][y]+arr_2[x][y];
           printf("%.2f \t ",summation_arr[x][y]);
       }

       printf("\n");
   }

    return 0;
}
