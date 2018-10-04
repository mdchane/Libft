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
	char *str5 = "bc";
	char *str6 = "abcdef";
	printf("ft_strstr(%s, %s) : %s\n", str5, str6, ft_strstr(str5, str6));
	printf("strstr(%s, %s) : %s\n", str5, str6, strstr(str5, str6));
	printf("--------------------------------\n");

//ft_strnstr
	printf("ft_strnstr(%s, %s, %d) : %s\n", str5, str6, 2, ft_strnstr(str5, str6, 2));
	printf("--------------------------------\n");

//ft_strcmp

	printf("ft_strcmp(%s, %s) : %d\n", str5, str6, ft_strcmp(str5, str6));
	printf("strcmp(%s, %s) : %d\n", str5, str6, strcmp(str5, str6));
	printf("--------------------------------\n");

//ft_strncmp

	printf("ft_strncmp(%s, %s) : %d\n", str5, str6, ft_strncmp(str5, str6, 2));
	printf("strncmp(%s, %s) : %d\n", str5, str6, strncmp(str5, str6, 2));
	printf("--------------------------------\n");

//ft_strcat

	char s7[6] = "salut";
	char s7b[6] = "salut";
	printf("ft_strcat(%s, %s) : %s\n", s7, s7b, ft_strcat(s7, s7b));
	char s7c[6] = "salut";
	printf("strcat(%s, %s) : %s\n", s7b, s7c, strcat(s7b, s7c));
	printf("--------------------------------\n");

//ft_strncat

	char s8[7] = "coucou";
	char s8b[30] = "coucou";
	printf("ft_strcat(%s, %s) : %s\n", s8, s8b, ft_strcat(s8, s8b));
	char s8c[7] = "coucou";
	printf("strcat(%s, %s) : %s\n", s8b, s8c, strcat(s8b, s8c));
	printf("--------------------------------\n");

//ft_strlcat
	char s9[6] = "salut";
	char s9b[4] = "toi";
	printf("strlcat(%s, %s) : %d\n", s9, s9b, ft_strlcat(s9, s9b, 2));
	printf("str appendé par strlcat : %s\n", s9);
	printf("--------------------------------\n");

//ft_strdup
	printf("ft_strdup(s10, %s) : %s\n", s9b, ft_strdup(s9b));
	printf("strdup(s10b, %s) : %s\n", s9b, ft_strdup(s9b));
	printf("--------------------------------\n");









	return (0);
}
