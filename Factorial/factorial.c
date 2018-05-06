#include <stdlib.h>
#include <stdio.h>

int calcul (int factorial)
{
  double result;
  if (factorial == 1)
  {
    result = 1;
  }
  else if (factorial == 0)
  {
    result = 1;
  }
  else
  {
    result = factorial * calcul(factorial -1);
  }
  return result;
}

int main()
{
  int factorial;
  double result;
  int init;

  printf("Voulez-vous calculer la factorielle de quel nombre ?");
  scanf("%d", &factorial);

  init = factorial;

  result = calcul(factorial);

  printf("La factorielle de %d est %f",init,result);

}
