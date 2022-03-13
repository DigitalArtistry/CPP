#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	
	while (str[i])
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res);
}



int	fact(int n)
{
	int res = 0;

	if (n > 1)
		res = n * fact(n-1);
	else
		return (1);
	return (res);
}

int	main(int ac, char **av)
{
	printf("%d\n", fact(ft_atoi(av[1])));
	return (0);
}

