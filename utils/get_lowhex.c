/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:14:29 by ancavalc          #+#    #+#             */
/*   Updated: 2024/01/11 11:11:58 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	get_lowhex(unsigned int n)
{
	int		i;
	int		k;
	char	rem;
	char	str[8];

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	while (n > 0)
	{
		rem = n % 16;
		if (rem < 10)
			str[i] = rem + 48;
		else
			str[i] = rem + (55 + 32);
		n = n / 16;
		i++;
	}
	k = i;
	while (i--)
		write(1, &str[i], 1);
	return (k);
}
