/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:48:11 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/15 22:03:02 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_adres_2(int i, unsigned long long int nbr, unsigned long long int *temp)
{
	int	u;

	u = 0;
	while (nbr > 0 || nbr < 0)
	{
		if (nbr > 0)
			temp[u] = nbr % i;
		if (nbr < 0)
			temp[u] = - (nbr % i);
		nbr = nbr / i;
		u++;
	}
	return (u);
}

int	ft_putadd_base(unsigned long long int  nbr, char *base, int	count)
{
	int	i;
	unsigned long long int	temp[100];
	unsigned long long int	u;

	i = 0;
	if (nbr == 0)
		ft_putchar(base[0], 1);
	else
	{
		while (base[i])
			i++;
		u = ft_adres_2(i, nbr, temp);
		while (--u >= 0)
		{
			ft_putchar(base[temp[u]], 1);
			count++;
		}
	}
	return (count);
}
