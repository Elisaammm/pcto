#include <stdio.h>
int main()
{
    char lettera;
    char a = 97;
    char e = 101;
    char i = 105;
    char o = 111;
    char u = 117;
    printf("inserisci una lettera/n");
    scanf("%c" , &lettera);
    if((lettera != a) && (lettera != e) && (lettera != i) && (lettera != o) && (lettera != u))
    {
        printf("la lettera è una consonante/n");
    }
    else
    {
        printf("la lettera non è una consonante/n");
    }
    return(0);
}