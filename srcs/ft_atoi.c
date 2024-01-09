/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:10:52 by znaoui            #+#    #+#             */
/*   Updated: 2022/11/01 16:40:41 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_error3(t_list *tmp_list, char **split_argv)
{
	ft_free(split_argv);
	free(tmp_list);
}

int	ft_atoi(const char *nptr)
{
	size_t		i;
	long int	nb;
	long int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb *= 10;
		nb += (nptr[i] - '0');
		i++;
	}
	return (nb * neg);
}

long int	ft_atoi_limit(const char *nptr)
{
	size_t		i;
	long int	nb;
	long int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb *= 10;
		nb += (nptr[i++] - '0');
	}
	if (nb * neg > 2147483647 || nb * neg < -2147483648)
		return (2147483648);
	return (nb * neg);
}
