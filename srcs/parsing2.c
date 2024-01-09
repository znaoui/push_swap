/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:35:36 by znaoui            #+#    #+#             */
/*   Updated: 2022/11/01 16:41:32 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif_char2(char *str[])
{
	int	i;
	int	y;

	i = 0;
	while (str[i] != NULL)
	{
		y = 0;
		while (str[i][y] != '\0')
		{
			if ((str[i][y] >= '0' && str[i][y] <= '9'))
				y++;
			else if ((str[i][y] == '-'
				&& str[i][y + 1] >= '0' && str[i][y + 1] <= '9'))
				y++;
			else if ((str[i][y] == '+'
				&& str[i][y + 1] >= '0' && str[i][y + 1] <= '9'))
				y++;
			else
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	verif_doublon2(char *str[])
{
	int	i;
	int	y;

	i = 0;
	while (str[i] != NULL)
	{
		y = i + 1;
		while (str[y] != NULL)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[y]))
				return (1);
			y++;
		}
		i++;
	}
	return (0);
}

int	verif_limit2(char *str[])
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		if (ft_atoi_limit(str[i]) == 2147483648)
			return (1);
		i++;
	}
	return (0);
}
