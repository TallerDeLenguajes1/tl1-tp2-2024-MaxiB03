#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
    //Codigo a modificar
    int i;
    double vt[N];

    for (i=0;i<N;i++)
    {
        vt[i]=1+rand()%100;
        printf("%f\n", vt[i]);
    }

    //Codigo modificado utilizando aritmetica de punteros

    int vt2[N];
    int *p=vt2;

    for (i=0;i<N;i++)
    {
        *p=1+rand()%100;
        printf("%d\n", *p);
        p++;
    }

    return 0;
}