#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
	{
		ft_bzero(str, size + 1);
		return (str);
	}
	return (NULL);
}
