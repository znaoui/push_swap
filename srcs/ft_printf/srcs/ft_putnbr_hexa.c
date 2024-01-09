/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:39:21 by znaoui            #+#    #+#             */
/*   Updated: 2021/12/09 16:31:20 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_hexa(unsigned int nb, char c)
{
	unsigned int	nbr;
	unsigned int	sauv;
	char			*hexa;
	int				len;

	if (c == 'x')
		hexa = "0123456789abcdef";
	else if (c == 'X')
		hexa = "0123456789ABCDEF";
	nbr = nb;
	if (nbr > 15)
	{
		ft_putnbr_hexa((nbr / 16), c);
		ft_putchar(hexa[nbr % 16]);
	}
	else
		ft_putchar(hexa[nbr % 16]);
	return (ft_size_len(nb, 16));
}
