#include <unistd.h>

void     ft_putchar(char c)
{
  write (1, &c, 1);
  //return (0);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int		ft_atoi(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	if (str[i] == '-')
		return (0);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		nbr = nbr * 10;
		nbr = nbr + (str[i] - 48);
		i++;
	}
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
}

// void	render(int nb)
// {
// 	if (nb >= 10 || nb <= -10)
// 	{
// 		render(nb / 10);
// 		render(nb % 10);
// 	}
// 	else
// 	{
// 		if (nb >= 0)
// 			ft_putchar(nb + '0');
// 		else
// 			ft_putchar(-1 * nb + '0');
// 	}
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb < 0)
// 		ft_putchar('-');
// 	render(nb);
// }

int ft_is_prime(int nb);

int ft_add_prime_sum(int nb)
{
    int i;
    int sum;

    sum = 0; // add prime to this sum
    i = 2;
    while (i <= nb)
    {
        if (ft_is_prime(i) == 1)
        {
            sum += i;
            i++;
        }
        else
            i++;
    }
    return (sum);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putstr("0\n");
        return (0);
    }

    int nb = ft_atoi(argv[1]);
    ft_putnbr(ft_add_prime_sum(nb));
    write(1, "\n", 1);
    return (0);
}
