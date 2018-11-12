/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:25:13 by mdchane           #+#    #+#             */
/*   Updated: 2018/11/12 12:52:49 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_num_len(int n)
{
	int	len;
	int	neg;

	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	len = 0;
	while (n > 1)
	{
		n /= 10;
		len++;
	}
	if (neg == 1)
		return (len + 1);
	return (len);
}

int		ft_pow(int num_len)
{
	int		i;

	i = 1;
	while (num_len > 0)
	{
		i *= 10;
		num_len--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;
	int		pow;

	len = ft_num_len(n);
	if (!(res = (char *)malloc(sizeof(char) * (ft_num_len(n) + 1))))
	return (NULL);
	i = 0;
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
		i++;
		len--;
	}
	pow = ft_pow(len);
	while (pow > 0)
	{
		res[i++] = n / pow + 48;
		n = n % pow + 48;
		pow /= 10;
	}
	return (res);
}

int		main()
{
	printf("num_len = %d\n", ft_num_len(1864644));
	printf("itoa= %s\n", ft_itoa(1864644));
}
