/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:29:13 by mdchane           #+#    #+#             */
/*   Updated: 2018/11/10 10:29:14 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	new = ft_strdup(s);
	if (!new || !s || !f)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, new[i]);
		i++;
	}
	return (new);
}
