/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:04:24 by ancavalc          #+#    #+#             */
/*   Updated: 2024/01/11 11:10:41 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	ft_putnbr(int num)
{
	static int	count;
	int			sign;

	sign = 0;
	count = 0;
	if (num == -2147483648)
	{
		count = write(1, "-2147483648", 11);
		return (count);
	}
	if (num < 0)
	{
		sign = ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	count += ft_putchar((num % 10) + 48);
	return (count + sign);
}
