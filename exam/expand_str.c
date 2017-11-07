#include <unistd.h>

int     ft_isspace(char c)
{
    return (c == '\t' || c == '\n' || c == '\v' || c == '\f' 
            || c == '\r' || c == ' ');
}

char	*ft_trim(char *a)
{
	int j;

	while (ft_isspace(a[0]))
	{
		j = 1;
		while (a[j] != '\0')
		{
			a[j - 1] = a[j];
			j++;
		}
		a[j - 1] = '\0';
	}
	return (a);
}

char	*trim_before(char *str)
{
	if (str)
	{
		while (*str == '\t' || *str == ' ')
			str++;
	}
	return (str);
}

void	ft_print(char *a)
{
	int i;
	int space;

	space = 0;
	i = 0;
	while (a[i] != '\0')
	{
		if (ft_isspace(a[i]))
		{
			space = 1;
		}
		else
		{
			if (space)
			{
				space = 0;
				write(1, "   ", 3);
			}
			write(1, &a[i], 1);
			space = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2 && argv[1][0] != '\0')
	{
		ft_print(trim_before(argv[1]));
	}
	write(1, "\n", 1);
}
