
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	new = ft_strdup(s);
	if (!new || !s || !f)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, new[i]);
		i++;
	}
	return (new);
}
