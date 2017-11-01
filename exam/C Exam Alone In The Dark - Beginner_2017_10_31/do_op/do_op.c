/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 10:55:04 by exam              #+#    #+#             */
/*   Updated: 2017/10/31 10:55:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "do_op.h"

int   main(int argc, char **argv)
{
  if (argc != 4)
  {
    ft_putchar('\n');
    return (0);
  }
  int nb;
  int nb2;

  nb = atoi(argv[1]);
  nb2 = atoi(argv[3]);
  if ((argv[2][0]) == 43)
  {
    printf("%d\n", nb + nb2);
    return (0);
  }
  else if ((argv[2][0]) == 45)
  {
    printf("%d\n", (nb - nb2));
  }
  else if ((argv[2][0]) == 42)
  {
    printf("%d\n", (nb * nb2));
  }
  else if ((argv[2][0]) == 47)
  {
    printf("%d\n", (nb / nb2));
  }
  else
    return (0);
}
