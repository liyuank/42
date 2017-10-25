/*
** Assignment name  : alpha_mirror
** Expected files   : alpha_mirror.c
** Allowed functions: write
** -------------------------------------------------------------------------------
**
** Write a program called alpha_mirror that takes a string and displays this string
** after replacing each alphabetical character by the opposite alphabetical
** character, followed by a newline.
**
** 'a' becomes 'z', 'Z' becomes 'A'
** 'd' becomes 'w', 'M' becomes 'N'
**
** and so on.
**
** Case is not changed.
**
** If the number of arguments is not 1, display only a newline.
**
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 09:24:31 by exam              #+#    #+#             */
/*   Updated: 2017/10/24 09:24:36 by exam             ###   ########.fr       */
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
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	int i;

	i = 0;
	while(argv[1][i])
	{
		if (argv[1][i] > 64 && argv[1][i] < 91)
		{
			int sum;

			sum = 155;
			ft_putchar(155 - argv[1][i]);
			i++;
		}
		else if (argv[1][i] > 96 && argv[1][i] < 123)
		{
			int sum2;

			sum2 =219;
			ft_putchar(219 - argv[1][i]);
			i++;
		}
		else
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
