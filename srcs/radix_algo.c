/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaktarus <znaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:13:45 by zaktarus          #+#    #+#             */
/*   Updated: 2022/10/30 23:14:39 by zaktarus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_list_init(t_list *my_list)
{
	int	i;

	i = -1;
	while (my_list != NULL)
	{
		my_list->index = i;
		my_list = my_list->next;
	}
}

void	index_list_treat(t_list *my_list, int i)
{
	t_list	*min_list;
	t_list	*tmp_list;

	min_list = my_list;
	while (min_list->index != -1)
		min_list = min_list->next;
	tmp_list = my_list;
	while (tmp_list != NULL)
	{
		if (tmp_list->index == -1 && min_list->nb > tmp_list->nb)
			min_list = tmp_list;
		tmp_list = tmp_list->next;
	}
	min_list->index = i;
}

void	index_list(t_list **my_list)
{
	t_list	*tmp_list;
	int		i;
	int		size;

	i = 0;
	tmp_list = *my_list;
	size = ft_count_list(my_list);
	while (i < size)
		index_list_treat(tmp_list, i++);
}

static int	get_max_bits(t_list **my_list)
{
	t_list	*tmp_list;
	int		max;
	int		max_bits;

	tmp_list = *my_list;
	max = tmp_list->index;
	max_bits = 0;
	while (tmp_list != NULL)
	{
		if (tmp_list->index > max)
			max = tmp_list->index;
		tmp_list = tmp_list->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	sort_radix_items(t_list **my_list, t_list **second_list)
{
	t_list		*tmp_list;
	int			i;
	int			x;
	int			size;
	int			max_bits;

	i = 0;
	tmp_list = *my_list;
	size = ft_count_list(my_list);
	max_bits = get_max_bits(my_list);
	while (i < max_bits)
	{
		x = 0;
		while (x++ < size)
		{
			tmp_list = *my_list;
			if (((tmp_list->index >> i) & 1) == 1)
				ra(my_list);
			else
				pb(my_list, second_list);
		}
		while (ft_count_list(second_list) != 0)
			pa(my_list, second_list);
		i++;
	}
}
