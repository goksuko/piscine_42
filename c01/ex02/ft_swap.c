#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("Before:a is %d, b is %d.\n", a, b);
	ft_swap(&a, &b);
	printf("After: a is %d, b is %d.\n", a, b);
	return (0);
}
