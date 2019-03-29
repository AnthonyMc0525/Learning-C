#include <stdio.h>

int main()
{
  int number = 13;

  printf("Address:\t Name:\t Value:\n");
  printf("%p \t %s \t %d \n", &number, "number", number);

  int * pNumber = &number;

  printf("%p \t %s \t %d \n", pNumber, "number", number);
  printf("%p \t %s \t %p \n", pNumber, "number", pNumber);

  return 0;
}
