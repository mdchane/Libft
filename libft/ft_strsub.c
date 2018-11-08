#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	sub = ft_strnew(len + 1);
	if (!sub)
		return (NULL);
	ft_strncpy(sub, s + start, len);
	return (sub);
}
