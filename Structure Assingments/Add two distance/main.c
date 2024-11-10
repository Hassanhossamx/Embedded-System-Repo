#include <stdio.h>
#include <stdlib.h>

struct sdistance
{
   int feet;
   float inch;

};

struct sdistance add(struct sdistance x, struct sdistance y)
{
    struct sdistance z;

    z.feet = x.feet+y.feet;
    z.inch =x.inch+y.inch;
    return z;
};
int main()
{
    struct sdistance a,b,sum;

    printf("Enter information for 1sT distance \n");
    printf(" Enter feet \n");
    scanf("%id",&a.feet);
    printf("Enter inch \n");
    scanf("%f",&a.inch);

    printf("Enter information for 2sT distance \n");
    printf(" Enter feet \n");
    scanf("%d",&b.feet);
    printf("Enter inch \n");
    scanf("%f",&b.inch);

    sum=add(a,b);

    while (sum.inch>=12.0)
    {
        sum.inch-=12.0;
        ++sum.feet;
    }
    printf("Sum of the distances = %d'- %.1f\"",sum.feet,sum.inch);


    return 0;
}
