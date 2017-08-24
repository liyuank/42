/* 
** use only write function to print
**
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
