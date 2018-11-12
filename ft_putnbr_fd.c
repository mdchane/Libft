/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:51 by mdchane           #+#    #+#             */
/*   Updated: 2018/11/12 15:37:26 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		pow;

	pow = ft_pow_len(n);
	while (n > 0)
	{
		ft_putchar_fd(n / pow + 48, fd);
		n = n % pow;
		pow /= 10;
	}
}
