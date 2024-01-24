#include <stdio.h>
int main()
{
    int lato1;
    int lato2;
    int lato3;
    int base;
    int altezza;
    float area;
    printf("inserisci la dimensione di un triangolo");
    scanf("%d" , &lato1);
    scanf("%d" , &lato2);
    scanf("%d" , &lato3);
    printf("risultato = %d/n" , lato1+lato2+lato3);
    printf("inserisci la base del triangolo: ");
    scanf("%d" , &base);
    printf("inserisci l'altezza del rettangolo: ");
    scanf("%d" , &altezza);
    area = (base * altezza)/2;
    printf("L' area del triangolo vale: %.2f" , area);
    return(0);
}