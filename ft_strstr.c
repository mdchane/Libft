/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 09:17:21 by mdchane           #+#    #+#             */
/*   Updated: 2018/11/10 09:24:49 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	if (s2 == NULL || s2[0] == '\0')
		return (char *)(s1);
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s1[i + j] == s2[j] && s2[j] != '\0' && s1[i + j] != '\0')
			{
				j++;
			}
			if (s2[j] == '\0')
				return (char *)(s1 + i);
		}
		i++;
	}
	return (NULL);
}
