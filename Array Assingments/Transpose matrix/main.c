#include <stdio.h>
#include <stdlib.h>
 #define maxsize 50
int main()
{
    int col;
    int row;
    int matrix [maxsize][maxsize];
    int transpose [maxsize][maxsize];
    printf("pleas enter your matrix size number of row first and coloumn the second \n");

    scanf("%d",&row);
    scanf("%d",&col);
    matrix[row][col];
    transpose[col][row];

    printf("Enter elements if matrix \n");

    for(int x=0;x<row;++x)
    {
        for(int y=0;y<col;++y)
        {
            scanf("%d",&matrix[x][y]);
             transpose[y][x]=matrix[x][y];
        }

    }

    printf("Entered matrix : \n");

    for(int c1=0;c1<row;++c1)
    {
        for(int c2 =0;c2<col;++c2)
        {
            printf("%d \t",matrix[c1][c2]);
            //transpose[c2][c1]=matrix[c1][c2];
        }
        printf("\n");
    }

    printf("Matrix transpose : \n");

    for(int a=0;a<col;++a)
    {
        for(int b=0;b<row;++b)
        {
            printf("%d \t",transpose[a][b]);

        }

        printf("\n");
    }

    return 0;
}
