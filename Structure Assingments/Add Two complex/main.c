#include <stdio.h>
#include <stdlib.h>
struct scomplex
{
    float real;
    float img;
} ;

struct scomplex read_data ()
{
   struct scomplex z;
     printf("pleas Enter the number respectively ex first is real (2.5 ,3.2)\n");
     scanf("%f ,%f",&z.real,&z.img);
     return z;
};

struct scomplex add (struct scomplex x , struct scomplex y)
{
    struct scomplex a;
    a.real =x.real+y.real;
    a.img = x.img+y.img ;
    return a;
};
int main()
{
    struct scomplex a,b,sum;

    a=read_data();
    b=read_data();
    sum=add(a,b);

    printf("sum = %.2f + %.2fi \n",sum.real,sum.img);

    return 0;
}
