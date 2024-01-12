/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:43:34 by ancavalc          #+#    #+#             */
/*   Updated: 2024/01/11 11:09:55 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		r;

	r = 0;
	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			r += check_args(format, i, ap);
			i++;
		}
		else
			r += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (r);
}
