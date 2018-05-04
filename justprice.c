#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int random;
  int choice;

  random = rand();

  printf("Quel est le montant ?");
	scanf("%d", &choice);

  while (choice != random)
  {
    if (choice > random)
    {
      printf("C'est moins !");
    }
    else
    {
      printf("C'est plus !");
    }
    scanf("%d", &choice);
  }
  printf("Ah je dis oui oui oui !");
}
