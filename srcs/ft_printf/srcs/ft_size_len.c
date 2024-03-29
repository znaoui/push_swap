/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:18:47 by znaoui            #+#    #+#             */
/*   Updated: 2022/10/30 22:58:08 by zaktarus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_size_len(unsigned long long nb, int base)
{
	unsigned long long	i;
	int					len;

	len = 0;
	i = nb;
	if (base == 10)
	{
		while (i > 0)
		{
			len++;
			i /= 10;
		}
	}
	else if (base == 16)
	{
		while (i > 0)
		{
			len++;
			i /= 16;
		}
	}
	if (nb == 0)
		return (len + 1);
	return (len);
}
