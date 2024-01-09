/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:06:49 by znaoui            #+#    #+#             */
/*   Updated: 2022/11/01 13:15:40 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_min(t_list **my_list)
{
	t_list	*tmp_list;
	t_list	*min_list;

	tmp_list = *my_list;
	min_list = *my_list;
	while (tmp_list != NULL)
	{
		if (min_list->nb > tmp_list->nb)
			min_list = tmp_list;
		tmp_list = tmp_list->next;
	}
	return (min_list->nb);
}

int	ft_count_list(t_list **my_list)
{
	t_list	*tmp_list;
	int		i;

	i = 0;
	tmp_list = *my_list;
	if (tmp_list == NULL)
		return (i);
	while (tmp_list != NULL)
	{
		tmp_list = tmp_list->next;
		i++;
	}
	return (i);
}

void	put_list(t_list **my_list)
{
	t_list	*temp;

	temp = *my_list;
	while (temp != NULL)
	{
		ft_printf("%d\n", temp->nb);
		temp = temp->next;
	}
}

void	delete_list(t_list **my_list)
{
	t_list	*tmp_list;
	t_list	*tmp_next;

	tmp_list = *my_list;
	tmp_next = NULL;
	if (!tmp_list)
		return ;
	if (tmp_list->next == NULL)
	{
		free(tmp_list);
		return ;
	}
	while (tmp_list != NULL)
	{
		tmp_next = tmp_list->next;
		free(tmp_list);
		tmp_list = tmp_next;
	}
}
