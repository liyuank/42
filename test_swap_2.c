#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 24;
	printf("a is %d\n", a);
	printf("b is %d\n", b);
	ft_swap(&a, &b);
	printf("After swap, a is %d\n", a);
	printf("After swap, b is %d\n", b);
	return (0);
}
