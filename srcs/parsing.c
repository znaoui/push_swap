/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:20:51 by znaoui            #+#    #+#             */
/*   Updated: 2022/11/01 15:48:51 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_error(t_list *tmp_list)
{
	ft_printf("Error\n");
	free(tmp_list);
	exit(EXIT_FAILURE);
}

void	ft_is_error2(t_list *tmp_list, char **split_argv)
{
	ft_printf("Error\n");
	ft_free(split_argv);
	free(tmp_list);
	exit(EXIT_FAILURE);
}

int	verif_char(char *str[])
{
	int	i;
	int	y;

	i = 1;
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

int	verif_doublon(char *str[])
{
	int	i;
	int	y;

	i = 1;
	while (str[i] != NULL)
	{
		y = i + 1;
		while (str[y] != NULL)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[y]))
			{
				return (1);
			}
			y++;
		}
		i++;
	}
	return (0);
}

int	verif_limit(char *str[])
{
	int	i;

	i = 1;
	while (str[i] != NULL)
	{
		if (ft_atoi_limit(str[i]) == 2147483648)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
