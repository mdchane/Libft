#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (char *)(&s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (char *)(&s[i]);
	return (NULL);
}
