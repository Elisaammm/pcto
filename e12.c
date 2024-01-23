#include <stdio.h>
int main()
{
    int p;
    int e;
    printf("inserisci a quanti anni si può prendere la patente");
    scanf("%d" , &p);
    printf("inserisci l'età/e");
    scanf("%d" , &e);
    if(e>=p)
    {
        printf("può prendere la patente");
    }
    else
    {
        printf("non può prendere la patente");
    }
    return(0);
}