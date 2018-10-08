#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s1;
	size_t	i;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
}
