/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaktarus <znaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:49:43 by zaktarus          #+#    #+#             */
/*   Updated: 2022/11/01 16:27:37 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*my_list;
	t_list	*second_list;

	if (argc <= 1)
		return (-1);
	my_list = NULL;
	second_list = NULL;
	my_list = malloc(sizeof(t_list));
	if (!my_list)
		return (-1);
	if (argc == 2)
		init_list2(&my_list, argv[1], 0);
	if (argc > 2)
		init_list(&my_list, argv);
	if (list_is_sorted(&my_list) == 0)
	{
		delete_list(&my_list);
		return (0);
	}
	index_list_init(my_list);
	index_list(&my_list);
	sort_small_stack(&my_list, &second_list);
	delete_list(&my_list);
	delete_list(&second_list);
	return (0);
}
