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

int main(void)
{
  int number;
  int exponent;
  int result;

  printf("Nombre :");
  scanf("%d", &number);
  printf("Exposant :");
  scanf("%d", &exponent);

  result = power(number,exponent);
  printf("Result :%d", result);

}
