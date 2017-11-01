/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 09:20:29 by exam              #+#    #+#             */
/*   Updated: 2017/10/31 09:20:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int   ft_isspace(char c)
{
  return (c == ' ' || c == '\t' || c == '\n'
          || c == '\v' || c == '\r' || c == '\f');
}

int   main(int argc, char **argv)
{
  if (argc != 2)
  {
    ft_putchar('\n');
    return (0);
  }
  int i;
  char *str;

  i = 0;
  str = argv[1];
  while (ft_isspace(str[i]))
  {
    i++;
  }
  while (str[i] && !ft_isspace(str[i]))
  {
    ft_putchar(str[i]);
    i++;
  }
  ft_putchar('\n');
  return (0);
}
