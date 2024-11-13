/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:47:46 by snunez-p          #+#    #+#             */
/*   Updated: 2024/11/13 20:29:02 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char *fmt, ...);
int	ft_putchar(char c);
int	ft_putptr(void *ptr);
int	ft_putstr(char *s);
int	ft_puthex(uintptr_t num, int uppercase);
int	ft_putnbr(long int num);
int	ft_putsnbr(unsigned int n);

#endif
