/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:44:23 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/13 20:27:03 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	uintptr_t		address;
	int				count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	address = (uintptr_t)ptr;
	count = ft_putstr("0x");
	count += ft_puthex(address, 0);
	return (count);
}
