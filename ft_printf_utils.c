/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:18:24 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/15 21:39:11 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
int	ft_putchar(char c, int count)
{
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putstr(char *str, int count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		count++;
	}
	return (count);
}

int	ft_putnbr_r(int n, int count)
{
	if (n > 0)
		n = -n;
	if (n <= -10)
	{
		count = ft_putnbr_r(n / 10, count);
	}
	ft_putchar((- (n % -10) + '0'), 1);
	count++;
	return (count);
}

int ft_putnbr(int n, int count)
{
	if (n < 0)
	{
		ft_putchar('-', 1);
		count++;
	}
	count = ft_putnbr_r(n, count);
	return (count);
}

int	ft_putnbr_unsigned(unsigned int n, int count)
{
	if (n >= 10)
	{
		ft_putnbr_unsigned(n / 10, count);
	}
	ft_putchar((( n % 10 + '0')), 1);
	count ++;
	return (count); 
}
