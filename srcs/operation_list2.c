/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_list2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:20:56 by znaoui            #+#    #+#             */
/*   Updated: 2022/10/30 23:10:51 by zaktarus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_prelast(t_list *my_list)
{
	t_list	*prelastelem;

	if (my_list && my_list->next)
		while (my_list->next->next)
			my_list = my_list->next;
	prelastelem = my_list;
	return (prelastelem);
}

void	ra(t_list **my_list)
{
	t_list	*tmp_first;

	if (my_list == NULL)
		return ;
	tmp_first = *my_list;
	*my_list = (*my_list)->next;
	tmp_first->next = NULL;
	ft_lstadd_back(my_list, tmp_first);
	ft_printf("ra\n");
}

void	rb(t_list **second_list)
{
	t_list	*tmp_second;

	if (second_list == NULL)
		return ;
	tmp_second = *second_list;
	*second_list = (*second_list)->next;
	tmp_second->next = NULL;
	ft_lstadd_back(second_list, tmp_second);
	ft_printf("rb\n");
}

void	rra(t_list **my_list)
{
	t_list	*tmp_first;

	tmp_first = ft_prelast(*my_list);
	ft_lstlast(*my_list)->next = *my_list;
	*my_list = tmp_first->next;
	tmp_first->next = NULL;
	ft_printf("rra\n");
}

void	rrb(t_list **second_list)
{
	t_list	*tmp_second;

	tmp_second = *second_list;
	*second_list = tmp_second->next;
	tmp_second->next = NULL;
	ft_lstadd_front(second_list, tmp_second);
	ft_printf("rrb\n");
}
