/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaktarus <znaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:48:04 by zaktarus          #+#    #+#             */
/*   Updated: 2022/11/07 10:57:25 by znaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <ft_printf.h>

typedef struct s_list
{
	int				nb;
	int				index;
	struct s_list	*next;
}	t_list;

long int	ft_atoi_limit(const char *str);
int			is_empty(t_list *my_list);
int			ft_atoi(const char *str);
int			verif_char(char *str[]);
int			verif_limit(char *str[]);
int			verif_doublon(char *str[]);
int			verif_char2(char *str[]);
int			verif_limit2(char *str[]);
int			verif_doublon2(char *str[]);
int			list_is_sorted(t_list **my_list);
int			ft_check_separator(char c, char *charset);
int			ft_count_word(char *str, char *charset);
int			ft_count_list(t_list **my_list);
int			ft_is_min(t_list **my_list);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_front(t_list **alst, t_list *new);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		init_list(t_list **my_list, char *argv[]);
void		init_list2(t_list **my_list, char *argv, int i);
void		add_head(t_list **my_list, int value);
void		add_end(t_list **my_list, int value);
void		utils_three_items(t_list **my_list);
void		sort_radix_items(t_list **my_list, t_list **second_list);
void		sort_small_stack(t_list **my_list, t_list **second_list);
void		sort_five_items(t_list **my_list, t_list **second_list, int len);
void		sort_four_items(t_list **my_list, t_list **second_list, int len);
void		sort_three(int value_1, int value_2, int value_3, t_list **my_list);
void		sort_two_items(t_list **my_list);
void		index_list(t_list **my_list);
void		index_list_treat(t_list *my_list, int i);
void		index_list_init(t_list *my_list);
void		ft_free(char **str);
void		sa(t_list **my_list);
void		sb(t_list **second_list);
void		ft_is_error3(t_list *tmp_list, char **split_argv);
void		ft_is_error2(t_list *tmp_list, char **split_argv);
void		ft_is_error(t_list *tmp_list);
void		delete_list(t_list **my_list);
void		put_list(t_list **my_list);
void		ss(t_list **my_list, t_list **second_list);
void		pa(t_list **my_list, t_list **second_list);
void		pb(t_list **my_list, t_list **second_list);
void		ra(t_list **my_list);
void		rb(t_list **my_list);
void		rr(t_list **my_list, t_list **second_list);
void		rra(t_list **my_list);
void		rrb(t_list **second_list);
void		rrr(t_list **my_list, t_list **second_list);
char		*ft_malloc_word(char *str, char *charset);
char		**ft_split(char *str, char *charset);
#endif
