#ifndef FT_H
# define FT_H
 #include <stdlib.h>
 #include <string.h>
 size_t				ft_strlen(const char *s);
 char				*ft_strdup(const char *s1);
 char				*ft_strcpy(char *dst, const char *src);
 char				*ft_strncpy(char *dst, const char *src, size_t n);
 char				*ft_strcat(char *s1, const char *s2);
 char				*ft_strncat(char *s1, const char *s2, size_t n);
 size_t				ft_strlcat(char *dst, const char *src, size_t size);
 char				*ft_strchr(const char *s, int c);
 char				*ft_strrchr(const char *s, int c);
 char				*ft_strstr(const char *s1, const char *s2);
 char				*ft_strnstr(const char *s1, const char *s2, size_t n);
 int					ft_strcmp(const char *s1, const char *s2);
 int					ft_strncmp(const char *s1, const char *s2, size_t n);
#endif
