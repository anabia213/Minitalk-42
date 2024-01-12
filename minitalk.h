/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:25:20 by ancavalc          #+#    #+#             */
/*   Updated: 2024/01/11 11:26:01 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <stdio.h>
# include <stdarg.h>

int check_args(const char *format, int i, va_list ap);
int ft_atoi(const char *nptr);
int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putnbr(int num);
int ft_putstr(char *str);
int ft_putunsgnbr(unsigned int num);
int get_lowhex(unsigned int n);
int get_mem(unsigned long n);
int get_upphex(unsigned int n);

#endif
