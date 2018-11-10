/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 09:21:34 by mdchane           #+#    #+#             */
/*   Updated: 2018/11/10 09:23:50 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if(s2 == NULL || s2[0] == '\0')
		return (char *)(s1);
	i = 0;
	while(s1[i] != '\0' && i < n)
	{
		if(s1[i] == s2[0])
		{
			j = 0;
			while(s1[i + j] == s2[j] && s2[j] != '\0' && s1[i + j] != '\0')
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
