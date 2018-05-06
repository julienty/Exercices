#include <stdlib.h>
#include <stdio.h>

int main()
{
  int factorial;
  double result;
  int init;

  printf("Voulez-vous calculer la factorielle de quel nombre ?");
  scanf("%d", &factorial);

  init = factorial;
  result = factorial;

  while (factorial != 1)
  {
    factorial--;
    result = result * factorial;
  }
  printf("La factorielle de %d est %f",init,result);
  return result;
}
