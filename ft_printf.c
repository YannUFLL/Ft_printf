/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:15:41 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/16 15:32:59 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_check_letter(char c)
{
	char *char_ok;
	   
	char_ok = "cspdiuxX%";
	while (char_ok)
	{
		if (*char_ok == c)
			return (1);
		char_ok++;
	}
	return (0);
}


int ft_printf(const char *str, ...)
{
	va_list args;
	int		count;
   	va_start (args, str);
	
	count = 0;
	while (*str)
	{
		if (*str == '%' && ft_check_letter(*(str + 1)))
		{
			str++;
			if (*str == '%')
				count = ft_putchar('%', count);
			else 
				count = ft_choose_function(va_arg(args, long long int), *str, count);
			str++;
		}
		else
	  	{	
			write(1, &*str, 1);
			count++;
			str++; 
		}
	}
	va_end(args);
	return (count);	
}

int	ft_choose_function(long long int arg, char c, int count)
{

	if (c == 'c')
		count = ft_putchar((char)arg, count);
	if (c == 's')
		count = ft_putstr((char *)arg, count);
	if (c == 'p')
		count = ft_putadd_base((unsigned long long int)arg, "0123456789abcdef", count);
	if (c == 'd')
		count = ft_putnbr((int)arg, count);
	if (c == 'i')
		count = ft_putnbr((int)arg, count);
	if (c == 'u')
		count = ft_putnbr_unsigned((unsigned int)arg, count);
	if (c == 'x')
		count = ft_putnbr_base((int)arg, "0123456789abcdef", count);
	if (c == 'X')
		count = ft_putnbr_base((int)arg, "0123456789ABCDEF", count);
	if (c == '%')
		count = ft_putchar('%', count);
	return (count);
}
/*
int	main()
{
	unsigned int test;
	int	count;
	count = 0;
	test = -10;
	char *str1;
	char *str2;

	str1 = NULL;
	str2 = NULL;
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	count = printf("\n count myfunc %d", count);
	count = printf("\n count myfunc %d", count);
}*/
