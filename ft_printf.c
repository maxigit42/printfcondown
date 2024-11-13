/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:16:55 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/13 20:27:49 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_variabletype(va_list arg, char const s1)
{
	int	cw;

	if (s1 == 'c')
		cw = ft_putchar(va_arg(arg, int));
	else if (s1 == 's')
		cw = ft_putstr(va_arg(arg, char *));
	else if (s1 == 'p')
		cw = ft_putptr(va_arg(arg, void *));
	else if (s1 == 'd' || s1 == 'i')
		cw = ft_putnbr(va_arg(arg, int));
	else if (s1 == 'u')
		cw = ft_putnbr(va_arg(arg, unsigned int));
	else if (s1 == 'x')
		cw = ft_puthex(va_arg(arg, unsigned int), 0);
	else if (s1 == 'X')
		cw = ft_puthex(va_arg(arg, unsigned int), 1);
	else if (s1 == '%')
		cw = write(1, "%", 1);
	else
		cw = write(1, &s1, 1);
	return (cw);
}

int	ft_printf(char const *s1, ...)
{
	int		i;
	int		cw;
	va_list	arg;

	i = 0;
	cw = 0;
	va_start(arg, s1);
	while (s1[i] != '\0')
	{
		if (s1[i] == '%')
		{
			i++;
			cw += ft_variabletype(arg, s1[i]);
		}
		else
		{
			write(1, &s1[i], 1);
			cw++;
		}
		i++;
	}
	va_end(arg);
	return (cw);
}

// int main()
// {
// 	int	i;
// 	char	sexo[] = "duro"; 
// 	i = ft_printf("%p\n", (void*)LONG_MIN);
// 	printf("%p\n", (void*)LONG_MIN);
// 	return(0);
// }