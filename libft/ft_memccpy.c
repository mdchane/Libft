#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	dest1 = (char *)dest;
	src1 = (char *)src;
	i = 0;
	while (i < n && src1[i] != c)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
