/*
** There are 2 strings
** first tstring should be a subsequence of the second string.
** so ./a.out "faya" "fvbnmzajkykka"
** should print faya
** otherwise, print a new line
** If only ./a.out, then only print a new line as well.
*/

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

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	isSubsequence(int m, int n, char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ( i < m && j < n)
	{
		if (str1[i] == str2[j])
		{
			i++;
		}
		j++;
	}
	if (i == m)
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if (argc <= 1 || argc > 3)
	{
		ft_putchar('\n');
		return (0);
	}
	if (isSubsequence(ft_strlen(argv[1]), ft_strlen(argv[2]), argv[1], argv[2]) == 1)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putchar('\n');
		return(0);
	}
}	
