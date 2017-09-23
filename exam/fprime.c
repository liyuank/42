/*
**
**  Created by Liyuan K.
**  Sep. 21, 2017
**  
**  fprime.c
**  display all the prime factors of the in put number
**  ex: 2*2*3 (12)
**  Aloowed function: write, printf
*/
#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

int   prime_factor(int nb)
{
  int i;
  
  i = 2;
  while (i < nb)
  {
    if ( nb % i == 0)
    {
      printf("%d*", i);
      nb /= i;
    }
    else
    {
      i++;
    }
    printf("%d", nb);
  }
  return (nb);
}

int   main(int argc, char **argv)
{
  if (argv != 2)
  {
    return 0;
  }
  // to be continued
  
}  
