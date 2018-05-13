#include <stdlib.h>
#include <stdio.h>

int fibonacci( double fibo1, double fibo2, int number)
{
  double result;
  result = fibo1 + fibo2;
  if(result < number)
  {
    return fibonacci( fibo2, fibo1+fibo2, number);
  }
  else if(result == number)
  {
    return(2);
  }
  else if (result > number)
  {
    return(1);
  }
  return(0);
}

int main(void)
{
  int number;

  printf("Quel est le nombre ?");
	scanf("%d", &number);

  if (fibonacci(0,1,number) == 2)
  {
    printf("%d fait partie de la suite de fibonaci ?",number);
  }
  else if (fibonacci(0,1,number) == 1)
  {
    printf("%d ne fait pas partie de la suite de fibonaci",number);
  }
  return(0);
}
