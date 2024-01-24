#include <stdio.h>
int main()
{
    int anno;
    printf("inserisci l'anno in cui è nato");
    scanf("%d" , &anno);
    if(anno == 1969)
    {
        printf("è nato lo stesso anno dell'arrivo sulla luna");
    }
    else
    {
        if(anno<1969)
        {
            printf("è nato anni prima dell'arrivo sulla luna");
        }
        else
        {
            printf("è nato anni dopo l'arrivo sulla luna");
        }
    }
    return(0);
}