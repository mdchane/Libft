/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:06:41 by mdchane           #+#    #+#             */
/*   Updated: 2018/11/13 16:31:55 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_pow_num(int n)
{
	int		pow;

	pow = 1;
	while (n > 10)
	{
		n = n / 10;
		pow *= 10;
	}
	return (pow);
}

void	ft_putnbr(int n)
{
	int		pow;

	pow = ft_pow_num(n);
	while (n > 0)
	{
		ft_putchar(n / pow + 48);
		n = n % pow;
		pow /= 10;
	}
}

int	main(void)
{
	printf("pow = %d\n", ft_pow_num(1234));
	ft_putnbr(1234);
	return (0);
}
