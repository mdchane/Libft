#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = c;
		i++;
	}
	return (s);
}
