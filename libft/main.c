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
	printf("strlcat(%s, %s) : %d\n", s9, s9b, ft_strlcat(s9, s9b, 10));
	printf("str appendé par strlcat : %s\n", s9);
	printf("--------------------------------\n");

//ft_strdup
	printf("ft_strdup(s10, %s) : %s\n", s9b, ft_strdup(s9b));
	printf("strdup(s10b, %s) : %s\n", s9b, ft_strdup(s9b));
	printf("--------------------------------\n");


//ft_strchr
	char *s10 = "salut";
	char c = 'l';
	printf("ft_strchr(%s, %d) : %p\n", s10, c, ft_strchr(s10, c));
	printf("strchr(%s, %d) : %p\n", s10, c, strchr(s10, c));
	printf("--------------------------------\n");

//ft_strrchr
	char *s10b = "salutl";
	char d = 'l';
	printf("ft_strchr(%s, %d) : %p\n", s10b, d, ft_strchr(s10b, d));
	printf("ft_strrchr(%s, %d) : %p\n", s10b, d, ft_strrchr(s10b, d));
	printf("strrchr(%s, %d) : %p\n", s10b, d, strrchr(s10b, d));
	printf("--------------------------------\n");

//memset
	char	p[7] = "memset";
	int		cm = '*';
	size_t	n = 2;
	printf("p : %s\n", p);
	memset(p, cm, n);
	printf("memset(p, %c, %d) : %s\n", cm, n, p);
	ft_memset(p, 's', n);
	printf("ft_memset(p, %c, %d) : %s\n", 's', n, p);
	printf("--------------------------------\n");

//bzero
	char	p1[6] = "bzero";
	size_t	n1 = 3;
	printf("p1 : %s\n", p1);
	bzero(p1, n1);
	printf("bzero(p1, n1): %s\n", p1);
	char	p2[6] = "bzero";
	printf("p2 : %s\n", p2);
	ft_bzero(p2, n1);
	printf("ft_bzero(p2, n1): %s\n", p2);
	printf("--------------------------------\n");

//memcpy
	char	p3[5] = "damn";
	char	p4[5] = "helo";
	size_t	n2 = 3;
	printf("p3 : %s & p4 : %s\n", p3, p4);
	ft_memcpy(p4, p3, n2);
	printf("ft_memcpy(p4, p3,  %d) => p3 : %s & p4 : %s\n", n2, p3, p4);
	printf("--------------------------------\n");

//memccpy
	char	det[] = "saluttoi";
	char	*dest = det;
	char	*src = det;

	memcpy(dest + 3, dest, 3);
	printf("memcpy : %s\n", dest);
	ft_memcpy(src + 3, src, 3);
	printf("ft_memcpy %s\n", src);
	printf("--------------------------------\n");

	char	det1[] = "saluttoi";
	char	*dest1 = det1;
	char	*src1 = det1;

	memmove(dest1 + 3, dest1, 3);
	printf("memmove %s\n", dest1);
	ft_memmove(src1 + 3, src1, 3);
	printf("ft_memmove %s\n", src1);
	printf("--------------------------------\n");

//memchr
	char	p5[] = "lafac";
	c = 'c';
	n = 5;
	printf("memchr(%s, %c, %d) : %p\n", p5, c, n, memchr(p5, c, n));
	printf("ft_memchr(%s, %c, %d) : %p\n", p5, c, n, ft_memchr(p5, c, n));
	printf("--------------------------------\n");

//memcmp
	char	p6[] = "ladac";
	printf("memcmp(%s, %s, %d) : %d\n", p5, p6, n, memcmp(p5, p6, n));
	printf("ft_memcmp(%s, %s, %d) : %d\n", p5, p6, n, ft_memcmp(p5, p6, n));
	printf("--------------------------------\n");


	return (0);
}
