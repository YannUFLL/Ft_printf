/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:18:24 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/14 19:52:00 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c, char *count)
{
	write(1, &c, 1);
	*(count++);
}

/*
void	ft_putnbr(int n, char *count)
{
	if (n > 0)
		n = -n;
	if (n <= -10)
	{
		ft_putnbr(n / 10);
	}
		write(1 ,((-(n % -10) + '0'), 1;
		*count++;
}*/

void	ft_putnbr_unsigned_f(float n, char *count)
{
	if (n >= 10)
	{
		ft_putnbr_unsigned_f(n / 10, &count);
	}
	//write(1 ,(( n % 10 + '0')), 1);
	*(count++);
}
#include <stdio.h>
int	main()
{
	float test;
	int	count;
	count = 0;
	test = 140000000000.44;
	printf("\n%d", (long int)(test));
	printf("\n%f", (float)(test));
	ft_putnbr_unsigned_f(test, &count);
	printf("%d", count);
}
