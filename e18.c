#include <stdio.h>
int main()
{
    int a; 
    int b;
    int c;
    printf("inserisci tre numeri per le lunghezze dei lati di un trinagolo");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
            {
                printf("possono essere le lunghezze di un triangolo");
            }
            else
            {
                printf("non posono essere le lunghezze di un trinagolo");
            }
        }
    }
    return(0);
}
    











