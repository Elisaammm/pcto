#include <stdio.h>
int main()
{
    int x;
    printf("inserisci la tua età/n");
    scanf("%d" , &x);
    if(x > 18)
    {
        printf("x è maggiore di 18/n");
    }
    else if(x == 18)
    {
        printf("x è uguale a 18/n");
    }   
    else
    {
        printf("x è minore di 18/n");
    }
    return(0);

}
