/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:48:11 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/16 13:47:28 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_addres_2(int i, unsigned long long int nbr, int *temp)
{
	int	u;

	u = 0;
	while (nbr > 0 || nbr < 0)
	{
		if (nbr > 0)
			temp[u] = nbr % i;
		if (nbr < 0)
			temp[u] = - (nbr % i);
		
		nbr = nbr / (unsigned long long int)i;
		u++;
	}
	return (u);
}

int	ft_putadd_base(unsigned long long int  nbr, char *base, int	count)
{
	int	i;
	int	temp[100];
	int	u;
	
	ft_putchar(base[0], 1);
	ft_putchar('x', 1);
	count++;
	count++;
	i = 0;
	if (nbr == 0)
	{
		ft_putchar(base[0], 1);
		count++;
	}
	else
	{
		while (base[i])
			i++;
		u = ft_addres_2(i, nbr, temp);
		while (--u >= 0)
		{
			ft_putchar(base[temp[u]], 1);
			count++;
		}
	}
	return (count);
}
