/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:15:41 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/13 16:04:20 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_check(char *str)
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
   	va_start (args, str);

	while (str)
	{
		if (str == % && ft_check(&(char_ok + 1)))
		{
			ft_choose_function(va_arg(

			

	}	
		

}

