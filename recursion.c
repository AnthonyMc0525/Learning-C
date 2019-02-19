//learning recursion

#include <stdio.h>

void evenness(n) {
  if (n < 0)
  {
    n = -n;
  }
  else if(n == 0)
  {
    char even[30] = "your number is even";
    printf("%s", even);
  }
  else if(n == 1)
  {
    char odd[30] = "your number is odd";
    printf("%s", odd);
  }
  else
  {
    evenness(n - 2);
  }
}

int main()
{
  printf("what number would you like to be checked for evenness: ");
  int number;
  scanf("%d", &number);
  evenness(number);

  return 0;
}


