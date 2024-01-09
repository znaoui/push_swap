/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaktarus <znaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:35:30 by zaktarus          #+#    #+#             */
/*   Updated: 2022/11/01 16:42:00 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_list2(t_list **my_list, char *argv, int i)
{
	t_list	*tmp_list;
	char	**split_argv;

	tmp_list = *my_list;
	split_argv = ft_split(argv, " ");
	if (verif_char2(split_argv) == 1 || verif_limit2(split_argv) == 1
		|| verif_doublon2(split_argv) == 1)
		ft_is_error2(tmp_list, split_argv);
	while (split_argv[i] != NULL)
	{
		tmp_list->nb = ft_atoi(split_argv[i]);
		if (split_argv[i + 1] == NULL)
		{
			tmp_list->next = NULL;
			break ;
		}
		else
			tmp_list->next = malloc(sizeof(t_list));
		if (tmp_list->next == NULL)
			return ;
		tmp_list = tmp_list->next;
		i++;
	}
	ft_free(split_argv);
}

void	init_list(t_list **my_list, char *argv[])
{
	t_list	*tmp_list;
	int		i;

	i = 1;
	tmp_list = *my_list;
	if (verif_doublon(argv) == 1 || verif_limit(argv) == 1
		|| verif_char(argv) == 1)
		ft_is_error(tmp_list);
	while (argv[i] != NULL)
	{
		tmp_list->nb = ft_atoi(argv[i]);
		if (!argv[i + 1])
		{
			tmp_list->next = NULL;
			break ;
		}
		else
			tmp_list->next = malloc(sizeof(t_list));
		if (!tmp_list->next)
			return ;
		tmp_list = tmp_list->next;
		i++;
	}
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst)
		new->next = *alst;
	*alst = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastelem;

	if (lst)
		while (lst->next)
			lst = lst->next;
	lastelem = lst;
	return (lastelem);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!(*alst))
		*alst = new;
	else
	{
		tmp = ft_lstlast(*(alst));
		tmp->next = new;
	}
}
