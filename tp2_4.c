#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tama 5

struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}typedef compu;

void MostrarPc(compu lista[]);
void PcMasVieja(compu lista[]);
void PcMasRapida(compu lista[]);

int main()
{
    srand(time(NULL));
    compu ListaCompus[tama];
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};

    for (int i=0;i<tama;i++)
    {
        ListaCompus[i].anio=2015+rand()%9;  //Variable=Lim_inf + rand() % (Lim_Sup-Lim_inf+1)
        ListaCompus[i].velocidad=1+rand()%3;
        ListaCompus[i].cantidad=1+rand()%8;
        ListaCompus[i].tipo_cpu=tipos[rand()%6];
    }

    MostrarPc(ListaCompus);
    PcMasVieja(ListaCompus);
    PcMasRapida(ListaCompus);
    
    return 0;
}

void MostrarPc(compu lista[])
{
    for (int i=0;i<tama;i++)
    {
        printf("\n----------------Computadora[%d]----------------\n", i+1);
        printf("Tipo: %s\n", lista[i].tipo_cpu);
        printf("velocidad en GHz: %d\n", lista[i].velocidad);
        printf("anio: %d\n", lista[i].anio);
        printf("cantidad: %d\n", lista[i].cantidad);
    }
}

void PcMasVieja(compu lista[])
{
    int menor=2024, masVieja;

    for (int i=0;i<tama;i++)
    {
        if(lista[i].anio <= menor)
        {
            menor=lista[i].anio;
            masVieja=i+1;
        }
    }
    printf("\nLa PC mas vieja es la %d y es del anio %d\n", masVieja, menor);
}

void PcMasRapida(compu lista[])
{
    int mayor=0, masRapida;

    for (int i=0;i<tama;i++)
    {
        if(lista[i].velocidad >= mayor)
        {
            mayor=lista[i].velocidad;
            masRapida=i+1;
        }
    }
    printf("La PC con mayor velocidad es la %d y tiene %d GHz\n", masRapida, mayor);
}

/*ListaCompus[0].anio=2;
ListaCompus[0].velocidad=3;
ListaCompus[0].cantidad=8;
ListaCompus[0].tipo_cpu=tipos[rand()%6];

printf("anio: %d\n", ListaCompus[0].anio);
printf("vel: %d\n", ListaCompus[0].velocidad);
printf("cantidad: %d\n", ListaCompus[0].cantidad);
printf("Tipo: %s", ListaCompus[0].tipo_cpu);*/