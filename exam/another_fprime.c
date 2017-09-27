/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 12:03:59 by exam              #+#    #+#             */
/*   Updated: 2017/09/19 12:04:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int   main(int argc, char **argv)
{
  if (argc != 2)
  {
    printf("\n");
    return (0);
  }

  int nb;
  int i;

  nb = atoi(argv[1]);
  i = 2;
  while (i < nb)
  {
    if (nb % i == 0)
    {
      printf("%d*", i);
      nb = nb / i;
    }
    else
    {
      i++;
    }
  }
  printf("%d\n", nb);
  return (0);
}
