/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:15:27 by exam              #+#    #+#             */
/*   Updated: 2017/10/31 12:15:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int   ft_is_prime(int nb)
{
  int i;

  i = 3;
  if (nb % 2 == 0)
  {
    return (0);
  }
  while (i < nb)
  {
    if (nb % i == 0)
    {
      return (0);
    }
    i += 2;
  }
  return (1);
}

int   ft_add_prime(int nb)
{
  int sum;
  int i;

  i = 3;
  sum = 2;
  if (ft_is_prime(i) == 1 && i <= nb)
  {
    sum = sum + i;
    i = i + 2;
  }
  return (i);
}

int   main(int argc, char **argv)
{
  int nb;

  nb = ft_add_prime(argv[1]);
  printf("%d\n", nb);
  return (0);
}
