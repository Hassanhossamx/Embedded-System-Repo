#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var;
   int mult=1;
   int counter;
printf("pleas enter your  number to calculate  it \n");
  //fflush("stdout");

  scanf("%d",&var);

  if(var<0)
  {
      printf(" Error !!!!!! Factorial of the negative number dosen`t exist");

  }
    else
    {


    for(counter=1;counter<=var;++counter)
    {
        mult*=counter;

    }

    printf(" Your Factorial of the number (%d) is equal = %d\n\n",var,mult);

    }
    return 0;
}
