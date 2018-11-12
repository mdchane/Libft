/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:25:13 by mdchane           #+#    #+#             */
/*   Updated: 2018/11/12 14:31:32 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_num_len(int n)
{
	int	len;

	if (n < 0)
	{
		n *= -1;
		len++;
	}
	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_transform(char *res, int n, int pow)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
		i++;
	}
	while (pow > 0)
	{
		res[i] = n / pow + 48;
		n = n % pow;
		pow /= 10;
		i++;
	}
	res[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;
	int		pow;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_num_len(n);
	if (!(res = (char *)malloc(sizeof(char) * (ft_num_len(n) + 1))))
		return (NULL);
	pow = ft_pow_len(len);
	ft_transform(res, n, pow);
	return (res);
}
