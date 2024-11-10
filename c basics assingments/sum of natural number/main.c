#include <stdio.h>
#include <stdlib.h>

int main()
{
   int var;
   int sum;
   int counter;
printf("pleas enter your  number to calculate  it \n");
  //fflush("stdout");

  scanf("%d",&var);

    for(counter=1;counter<=var;++counter)
    {
        sum+=counter;

    }

    printf(" Your Summation of the number (%d) is equal = %d\n\n",var,sum);
    return 0;
}
