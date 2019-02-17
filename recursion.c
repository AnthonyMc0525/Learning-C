//learning recursion

#include <stdio.h>

void evenness(int n) {
  if (n < 0)
  {
    n = -n;
  }
  else if(n == 0)
  {
    char even[50] = "your number is even";
    printf("%s", even);
  }
  else if(n == 1)
  {
    char odd[50] = "your number is odd";
    printf("%s", odd);
  }
  else
  {
    evenness(n - 2);
  }
}

int main()
{
  evenness(11);

  return 0;
}


