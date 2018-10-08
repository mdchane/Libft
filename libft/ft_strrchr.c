#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		last;

	last = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (char *)(&s[i]);
	else if (s[i] == '\0' && last > -1)
			return (char *)(&s[last]);
	return (NULL);
}
