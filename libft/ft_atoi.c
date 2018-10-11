#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		res;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while (nptr[i] <= 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * sign);
}
