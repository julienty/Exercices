#include <stdio.h>

int power(base, exponent)
{
  int result;

  result = 0;

  if (exponent > 0)
  {
    result = base * power(base, exponent - 1);
  }
  else if (exponent == 0)
  {
    result = 1;
  }
  return result;
}

int atoi(char a[])
{
  int i;
  int base;
  int j;
  int tab[10];
  int result;
  int istock;

  base = 10;
  i = 0;
  j = 0;
  result = 0;

  while (a[i] != '\0')// calcul la longueur et attribue les valeurs dans tab[i]
  {
    tab[i] = a[i] - 48;
    i++;
  }

  istock = i; //je sauve la valeur de i parce que je vais la faire varier par la suite.

  while (j < istock) //tant que c'est < à la valeur de istock.
  {
    result += tab[j]*power(base, (i - 1)); //111 = 1 x 100 + 1 x 10 + 1 x 1 = 1 x 10^2 + 1 x 10^1 + 1 x 10^0
    i--; // On diminue l'exposant.
    j++; // j = O car je dois commencer par le premier nombre, celui en position 0. Ensuite j'augmente au fur et à mesure
  }
  return result;
}

int main()
{
  char a[10] = "100";
  int value = atoi(a);
  printf("Value = %d\n", value);
  return 0;
}
