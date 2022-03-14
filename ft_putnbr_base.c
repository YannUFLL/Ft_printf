/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:48:11 by ydumaine          #+#    #+#             */
/*   Updated: 2022/03/14 12:55:54 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_adres(int i, int nbr, int *temp)
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

void	ft_putnbr_base(int nbr, char *base, int	*count)
{
	int	i;
	int	temp[100];
	int	u;

	i = 0;
	if (nbr == 0)
		ft_putchar(base[0]);
	else
	{
		while (base[i])
			i++;
		if (nbr < 0)
		{
			ft_putchar('-');
			i = -i;
		}
		u = ft_adres(i, nbr, temp);
		while (--u >= 0)
		{
			ft_putchar(base[temp[u]]);
			*count++;
		}
	}
}
