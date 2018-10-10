#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*us;

	us = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (us[i] == c)
			return ((void *)(us + i));
		i++;
	}
	return (NULL);
}
