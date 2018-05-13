#include <stdlib.h>
#include <stdio.h>

int calcul(int factorial)
{
  return factorial <= 1 ? 1 : (factorial * calcul(factorial - 1));
}

int main(void)
{
  int factorial;
  double result;
  int init;

  printf("Voulez-vous calculer la factorielle de quel nombre ?");
  scanf("%d", &factorial);

  init = factorial;

  result = calcul(factorial);

  printf("La factorielle de %d est %.0f\n",init,result);

  return (0);
}
