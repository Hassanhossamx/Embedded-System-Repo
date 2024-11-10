#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr [50];
    int counter=0;
    printf("enter a string\n");
    scanf("%s",arr);

    for(int i=0;i<50;++i)
    {
        if(arr[i]==0)
        {
            break;
        }
        counter++;
    }

    printf("length of array = %d \n",counter);
    return 0;
}
