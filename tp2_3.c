#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7

int main()
{
    int i,j;
    int mt[N][M];

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            mt[i][j]=1+rand()%100;
            printf("%d\t", mt[i][j]);
        }
        printf("\n");
    }

    printf("\n----------------------------------------------------------\n");

    //Codigo modificado utilizando punteros
    int mt2[N][M];
    int *p;
    p=&mt2[0][0];

    for (i=0;i<N;i++)
    {
        for (j=0;i<M;j++)
        {
            mt2[i][j]=1+rand()%100;
            printf("%d\t", *(p+i*M+j));
        }
        printf("\n");
    }


    return 0;
}