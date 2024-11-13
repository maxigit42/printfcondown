/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:39:54 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/13 19:30:38 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	negative(long int *n, int *len)
{
	*len += write(1, "-", 1);
	*n *= -1;
}

int	ft_putnbr(long int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{
		len += write(1, "-2", 2);
		num = 147483648;
	}
	if (num < 0)
		negative(&num, &len);
	if (num >= 10)
	{
		len += ft_putnbr(num / 10);
		num %= 10;
	}
	if (num < 10)
		len += ft_putchar(num + '0');
	return (len);
}
