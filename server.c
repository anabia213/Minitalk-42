/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 06:20:38 by ancavalc          #+#    #+#             */
/*   Updated: 2024/01/11 10:35:38 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

void	bit_to_chr(int sig)
{
	static int	bin;
	static char	chr;

	if (bin < 8)
	{
		if (sig == SIGUSR1)
			chr += (1 << (7 - bin));
		bin++;
	}
	if (bin == 8)
	{
		ft_printf("%c", chr);
		chr = 0;
		bin = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("\t\t\tThe server pid is: %i\n", pid);
	while (1)
	{
		signal(SIGUSR1, bit_to_chr);
		signal(SIGUSR2, bit_to_chr);
		pause();
	}
}
