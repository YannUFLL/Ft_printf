/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:23:47 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/21 18:33:32 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr_base(int nbr, char *base, int count);
int	ft_putadd_base(unsigned long long int nbr, int count);
int	ft_select_f(long long int arg, char c, int count);
int	ft_putnbr(int n, int count);
int	ft_putnbr_unsigned(unsigned int n, int count);
int	ft_putstr(char *str, int count);
int	ft_putchar(char c, int count);
int	ft_printf(const char *str, ...);
int	ft_putnbr_r(int n, int count);

#endif 
