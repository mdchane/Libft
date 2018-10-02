#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char str1[6] = "salut";
	char str2[7] = "coucou";

//ft_strlen
	printf("ft_strlen : %ld\n", ft_strlen(str1));
	printf("strlen : %ld\n", strlen(str1));
	printf("--------------------------------\n");
//ft_strcpy
	printf("ft_strcpy : %s\n", ft_strcpy(str1, str2));
	char str1b[6] = "salut";
	printf("strcpy : %s\n", strcpy(str1b, str2));
	printf("--------------------------------\n");

//ft_strncpy
	char str3[10] = "saluttoi";
	char str4[7] = "coucou";
	printf("ft_strncpy : %s\n", ft_strncpy(str3, str4, 4));
	char str3b[10] = "saluttoi";
	printf("strncpy : %s\n", strncpy(str3b, str4, 4));
	printf("--------------------------------\n");

//ft_strstr
	char str5[10] = "saluttoi";
	char str6[9] = "lut";
	printf("ft_strstr(%s, %s) : %s\n", str5, str6, ft_strstr(str5, str6));
	printf("strstr(%s, %s) : %s\n", str5, str6, strstr(str5, str6));
	printf("--------------------------------\n");

	return (0);
}
