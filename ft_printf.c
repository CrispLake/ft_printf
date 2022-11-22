/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:13:18 by emajuri           #+#    #+#             */
/*   Updated: 2022/11/22 16:28:20 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

static int	converse(const char *str, va_list ap)
{
	int	s_len;

	s_len = 1;
	if (*str == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);
	return (s_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		s_len;

	s_len = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			s_len += converse(str++, ap);
		else
		{
			ft_putchar_fd((char)str++, 1);
			s_len++;
		}
	}
	va_end(ap);
	return (s_len);
}
