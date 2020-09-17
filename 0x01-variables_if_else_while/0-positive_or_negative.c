#include <stdlib.h>
#include <time.h>
/* 0. Positive anything is better than negative nothing */

/* This prgram will assign a random number to the variable n each time is executed */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n<0)
    {
      printf("%d is negative\n", n);
    }
  else if (n>0)
    {
      printf("%d is positive\n", n);
    }
  else if (==)
    {
      printf("%d is zero\n", n);
    }
  
  return (0);
}
