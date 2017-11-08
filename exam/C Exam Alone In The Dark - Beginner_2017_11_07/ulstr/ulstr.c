/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:15:41 by exam              #+#    #+#             */
/*   Updated: 2017/11/07 09:15:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char  ft_tolower(char c)
{
  c = c + 32;
  return (c);
}

char ft_toupper(char c)
{
  c = c - 32;
  return (c);
}

int   main(int argc, char **argv)
{
  if (argc != 2)
  {
    write(1, "\n", 1);
    return (0);
  }
  int i;

  i = 0;
  while (argv[1][i] != '\0')
  {
    if (argv[1][i] > 64 && argv[1][i] < 91)
    {
      char tmp;

      tmp = ft_tolower(argv[1][i]);
      write(1, &tmp, 1);
      i++;
    }
    else if (argv[1][i] > 96 && argv[1][i] < 123)
    {
      char tmp;

      tmp = ft_toupper(argv[1][i]);
      write(1, &tmp, 1);
      i++;
    }
    else
    {
      write(1, &argv[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
  return (0);
}
