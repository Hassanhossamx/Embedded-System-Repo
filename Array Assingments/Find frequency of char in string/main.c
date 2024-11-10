#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxsize 100
int main()
{
    char arr[maxsize];
    char chr;
    int counter=0;

    printf(" Enter the string \n");
    gets(arr);
    printf("enter the character to get its frequency \n");
    scanf("%c",&chr);

    for (int i=0;i,i<maxsize;++i)
    {
        if(arr[i]==chr)
        {
            ++counter;
        }
    }

    printf("Frequency of %c = %d",chr,counter);
    return 0;
}
