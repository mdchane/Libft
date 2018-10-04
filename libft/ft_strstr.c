#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	if(s2 == NULL || s2[0] == '\0')
		return (char *)(s1);
	i = 0;
	while(s1[i] != '\0')
	{
		if(s1[i] == s2[0])
		{
			j = 0;
			while(s1[i + j] == s2[j] && s2[j] != '\0')
			{
				j++;
			}
			if(s2[j] == '\0')
				return (char *)(s1 + i);
		}
		i++;
	}
	return (NULL);
}
