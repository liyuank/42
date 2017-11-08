/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:04:48 by exam              #+#    #+#             */
/*   Updated: 2017/11/07 11:04:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int   ft_isprime(int nb)
{
  int i;

  i = 3;
  if (nb % 2 == 0)
  {
    return (0);
  }
  while (i < (nb /2 + 1))
  {
    if (nb % i == 0)
    {
      return (0);
    }
    else
    {
      i = i + 2;
    }
  }
  return(1);
}

int   main(int argc, char **argv)
{
  if (argc != 2)
  {
    printf("\n");
    return (0);
  }
  int nb;
  int i;

  i = 2;
  nb = atoi(argv[1]);
  if (atoi(argv[1]) == 1)
  {
    printf("1\n");
    return(0);
  }
  if (ft_isprime(nb))
  {
    printf("%s\n", argv[1]);
    return (0);
  }
  while (nb / i >= 2)
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
  }
  printf("%d\n", nb);
  return (0);
}
