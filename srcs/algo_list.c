/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:11:04 by znaoui            #+#    #+#             */
/*   Updated: 2022/10/30 23:04:34 by zaktarus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_is_sorted(t_list **my_list)
{
	t_list	*tmp_list;
	t_list	*tmp_next;

	tmp_list = *my_list;
	tmp_next = *my_list;
	while (tmp_list->next != NULL)
	{
		tmp_next = tmp_list->next;
		if (tmp_list->nb < tmp_next->nb)
			tmp_list = tmp_list->next;
		else
			return (1);
	}
	return (0);
}

void	sort_two_items(t_list **my_list)
{
	t_list	*tmp_list;
	t_list	*tmp_next;

	tmp_list = *my_list;
	tmp_next = *my_list;
	tmp_next = tmp_next->next;
	if (tmp_list->nb > tmp_next->nb)
		ra(my_list);
}

void	sort_three(int value_1, int value_2, int value_3, t_list **my_list)
{
	if (value_1 > value_2 && value_1 < value_3 && value_2 < value_3)
		sa(my_list);
	else if (value_1 > value_2 && value_2 > value_3 && value_1 > value_3)
	{
		sa(my_list);
		rra(my_list);
	}
	else if (value_1 > value_2 && value_1 > value_3 && value_2 < value_3)
		ra(my_list);
	else if (value_1 < value_2 && value_1 < value_3 && value_2 > value_3)
	{
		sa(my_list);
		ra(my_list);
	}
	else if (value_1 > value_3 && value_1 < value_2 && value_2 > value_3)
		rra(my_list);
}

void	utils_three_items(t_list **my_list)
{
	t_list		*tmp_list;
	int			value_1;
	int			value_2;
	int			value_3;

	tmp_list = *my_list;
	value_1 = tmp_list->nb;
	value_2 = tmp_list->next->nb;
	value_3 = tmp_list->next->next->nb;
	sort_three(value_1, value_2, value_3, my_list);
}

void	sort_small_stack(t_list **my_list, t_list **second_list)
{
	if (ft_count_list(my_list) > 5)
		sort_radix_items(my_list, second_list);
	if (ft_count_list(my_list) == 5)
		sort_five_items(my_list, second_list, 5);
	if (ft_count_list(my_list) == 4)
		sort_four_items(my_list, second_list, 4);
	if (ft_count_list(my_list) == 3)
		utils_three_items(my_list);
	if (ft_count_list(my_list) == 2)
		sort_two_items(my_list);
}
