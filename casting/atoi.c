#include <string.h>
#include <stdio.h>
#include <math.h>

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

  while (a[i] != '\0')
  {
    switch (a[i])
    {
      case 48:
      tab[i] = 0;
      break;
      case 49:
      tab[i] = 1;
      break;
      case 50:
      tab[i] = 2;
      break;
      case 51:
      tab[i] = 3;
      break;
      case 52:
      tab[i] = 4;
      break;
      case 53:
      tab[i] = 5;
      break;
      case 54:
      tab[i] = 6;
      break;
      case 55:
      tab[i] = 7;
      break;
      case 56:
      tab[i] = 8;
      break;
      case 57:
      tab[i] = 9;
      break;
    }
    i++;
  }

  istock = i - 1;

  while (j <= istock)
  {
    result += tab[j]*pow(base, (i - 1));
    i--;
    j++;
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
