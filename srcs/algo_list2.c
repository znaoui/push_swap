/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_list2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaktarus <znaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:00:34 by zaktarus          #+#    #+#             */
/*   Updated: 2022/10/30 23:04:49 by zaktarus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_items(t_list **my_list, t_list **second_list, int len)
{
	int	i;

	i = 0;
	while (len-- > 3)
	{
		i = ft_is_min(my_list);
		while ((*my_list)->nb > i)
		{
			if ((*my_list)->next->nb == i)
				ra(my_list);
			else
				rra(my_list);
		}
		pb(my_list, second_list);
	}
	utils_three_items(my_list);
	pa(my_list, second_list);
	pa(my_list, second_list);
}

void	sort_four_items(t_list **my_list, t_list **second_list, int len)
{
	int	i;

	i = 0;
	while (len-- > 3)
	{
		i = ft_is_min(my_list);
		while ((*my_list)->nb > i)
		{
			if ((*my_list)->next->nb == i)
				ra(my_list);
			else
				rra(my_list);
		}
		pb(my_list, second_list);
	}
	utils_three_items(my_list);
	pa(my_list, second_list);
}
