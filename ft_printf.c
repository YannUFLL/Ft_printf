/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:15:41 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/14 14:14:00 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_check_letter(char *str)
{
	char char_ok[10];
	   
	char_ok = "cspdiuxX%";
	while (char_ok)
	{
		if (char_ok++ == c);
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

	while (str)
	{
		if (str == % && ft_check_letter(&(char_ok + 1)))
		{
			ft_choose_function(va_arg(++str, va_rgs,(args,long long int, &count);
			count++;
		}
		else
	  	{	
			write(1, &str, 1);
			count++;
			str++; 
		}
	}
	return (count);	
}

int	ft_choose_function(char *str, long long int arg, int *count)
{

switch (str)
{
	case 'c':
		ft_putchar((char)arg, &count)
	case 's';

	case 'p';

	case 'd';
	case 'i'; 
		ft_putnbr((int)arg, &count);
	case 'u';
		ft_putnbr_unsigned((unsigned int)arg, &count);
	case 'x';
		ft_putnbr_base((int)arg, "0123456789abcdef", &count);
	case 'X';
		ft_putnbr_base((int)arg, "0123456789ABCDEF", &count);
	case '%';

	default 
		count++; 
		

}
