/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:48:10 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/13 20:33:56 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(uintptr_t num, int uppercase)
{
	char	*hex_digits;
	int		count;
	char	buffer[18];
	int		i;

	count = 0;
	i = 16;
	buffer[17] = '\0';
	if (uppercase)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	while (i >= 0)
	{
		buffer[i] = hex_digits[num % 16];
		num /= 16;
		i--;
		if (num == 0)
			break ;
	}
	count = ft_putstr(&buffer[i + 1]);
	return (count);
}
