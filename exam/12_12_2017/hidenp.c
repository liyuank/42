/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 10:02:44 by exam              #+#    #+#             */
/*   Updated: 2017/12/12 10:02:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

static int		hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		while (s1[i] != s2[j] && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == '\0' && s1[i + 1] != '\0')
			return (0);
		i++;
		j++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	if ((argv[1][0] == ' ') || (argv[1][0] =='\t') || (argv[1][0] == '\n'))
	{
		ft_putchar('1');
		ft_putchar('\n');
		return (0);
	}
	if (hidenp(argv[1], argv[2]))
	{
		ft_putchar('1');
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
}
