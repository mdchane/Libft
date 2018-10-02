#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *str1 = "salutggzgezc";
	char *str2 = "cou";

//ft_strlen
	printf("ft_strlen : %ld\n", ft_strlen(str1));
	printf("strlen : %ld\n", strlen(str1));

//ft_strcpy
	printf("ft_strcpy : %s\n", str1);
	ft_strcpy(str1, str2);
	//printf("strcpy : %s\n", strcpy(str1, str2));


	return (0);
}
