/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaktarus <znaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:09:37 by zaktarus          #+#    #+#             */
/*   Updated: 2022/10/31 01:02:17 by zaktarus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **my_list)
{
	t_list		*tmp_list;
	int			elem_temp;
	int			elem_index;

	if (my_list == NULL || (*my_list)->next == NULL)
		return ;
	tmp_list = *my_list;
	elem_temp = tmp_list->nb;
	elem_index = tmp_list->index;
	tmp_list->nb = tmp_list->next->nb;
	tmp_list->index = tmp_list->next->index;
	tmp_list->next->nb = elem_temp;
	tmp_list->next->index = elem_index;
	ft_printf("sa\n");
}

void	sb(t_list **second_list)
{
	t_list		*tmp_list;
	int			elem_temp;
	int			elem_index;

	if (second_list == NULL || (*second_list)->next == NULL)
		return ;
	tmp_list = *second_list;
	elem_temp = tmp_list->nb;
	elem_index = tmp_list->index;
	tmp_list->index = tmp_list->next->index;
	tmp_list->nb = tmp_list->next->nb;
	tmp_list->next->index = elem_index;
	tmp_list->next->nb = elem_temp;
	ft_printf("sb\n");
}

void	ss(t_list **my_list, t_list **second_list)
{
	sa(my_list);
	sb(second_list);
	ft_printf("ss\n");
}

void	pa(t_list **my_list, t_list **second_list)
{
	t_list	*tmp_second;

	if (second_list == NULL)
		return ;
	tmp_second = *second_list;
	*second_list = (*second_list)->next;
	tmp_second->next = NULL;
	ft_lstadd_front(my_list, tmp_second);
	ft_printf("pa\n");
}

void	pb(t_list **my_list, t_list **second_list)
{
	t_list	*tmp_first;

	if (my_list == NULL)
		return ;
	tmp_first = *my_list;
	*my_list = (*my_list)->next;
	tmp_first->next = NULL;
	ft_lstadd_front(second_list, tmp_first);
	ft_printf("pb\n");
}
