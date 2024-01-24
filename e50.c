#include <stdio.h>
void somma(int a , int b)

{
printf("la somma dei numeri è : %d/n" , (a+b));
}
void sottrazione (int a , int b)
{
printf("la sottrazione dei numeri è : %d/n" , (a-b));
}
void moltiplicazione (int a , int b)
{
    printf("la moltiplicazione dei numeri è : %d/n" , (a*b));
}
void divisione (int a , int b)
{
    printf("la divisione dei numeri è : %d" , (a/b));
}
int main()
{
  int  q;
  int w;
  int operazione;
  printf("inserisci il primo numero/n");
  scanf("%d" , &q);
  printf("inserisci il secondo numero/n");
  scanf("%d" , &w);
  printf("che operazione faccio?/n");
  printf("premere :/n -1 per la somma -2 per la sottrazione -3 per la moltiplicazione -4 per la divisione");
  scanf("%d" , &operazione);
  if(operazione == 1)
  {
    somma(q , w);
  }
  else if(operazione == 2)
  {
    sottrazione(q , w );
  }
  else if(operazione == 3)
  {
    moltiplicazione(q , w);
  }
  else if(operazione == 4)
  {
    divisione(q , w);
  }
  return(0);

}