#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
  int random;
  int choice;

  srand(time(NULL));
  random = (rand()%100) + 1;

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

  return (0);
}
