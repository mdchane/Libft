#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cp;

	cp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	ft_strcpy(cp, s);
	return (cp);
}
