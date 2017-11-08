/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:59:24 by exam              #+#    #+#             */
/*   Updated: 2017/11/07 09:59:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    ft_putchar(str[i]);
    i++;
  }
}

int   my_atoi(char *str)
{
  int i;
  int nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
  {
    nb = 10 * nb + (str[i] - '0');
    i++;
  }
  return (nb);
}

void ft_putnb(int nb)
{
    if (nb / 10 >= 1)
    {
      ft_putnb(nb / 10);
      ft_putchar(nb % 10 + '0');
    }
    else
    {
      ft_putchar('0' + nb);
    }
}

int   main(int argc, char **argv)
{
  if (argc != 2)
  {
    ft_putchar('\n');
    return (0);
  }
  int i;
  int nb;

  i = 1;
  nb = my_atoi(argv[1]);
  while (i < 10)
  {
    int index;

    index = 0;
    ft_putchar(i + '0');
    ft_putstr(" x ");
    ft_putnb(nb);
    ft_putstr(" = ");
    ft_putnb(i * nb);
    ft_putchar('\n');
    i++;
  }
  return (0);
}
