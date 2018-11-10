/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:18:10 by mdchane           #+#    #+#             */
/*   Updated: 2018/11/10 10:18:12 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(s1[i] != '\0' &&  s2[i] != '\0' && i < n)
	{
		if(s1[i] != s2[i])
			return (int)(s1[i] - s2[i]);
		i++;
	}
	if((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (int)(s1[i] - s2[i]);
	return (0);
}
