/*
** using ft_putchar to create another function:
** ft_putstr. This function can print a string.
**
*/
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}
