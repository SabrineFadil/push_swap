/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:47:45 by safadil           #+#    #+#             */
/*   Updated: 2023/12/16 21:47:45 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "ft_printf.h"

typedef struct t_list
{
	struct t_list	*next;
	struct t_list	*prev;
	int				index;
	int				number;
}	t_list;

int		isdigitstr(char *str);
char	*joinarguments(int cs, char	**s);
char	*ft_strcat(char	*dest, char	*src);
int		ft_strcmp(char	*s1, char	*s2);
char	**ft_split(char *s, char c);
char	*ft_strdup(char	*s1);
char	*ft_strjoin(char	*s1, char	*s2);
char	*ft_substr(char	*s, unsigned int start, size_t	len);
int		int_limit(char	**str);
long	ft_atoi(char const *str);
int		duplicate(char	**str);
void	ft_free(char	**str);
void	parce(char	*str, t_list	**stacki);
t_list	*creat_node(int numb);
void	put_index_to_node(t_list	*stack);
int		sort_stack(t_list *stack);
void	addback_node(t_list **head, t_list *newnode);
void	swap_2(t_list	**stack, int count);
int		min_value(t_list	*stack);
int		max_value(t_list	*stack);
void	rotate_stack(t_list	**stack, int count);
void	rrotate_stack(t_list	**stack, int count);
void	push(t_list **stack, int value);
int		size_stack(t_list *stack);
void	push_b(t_list	**stack_a, t_list **stack_b);
void	push_a(t_list **stack_a, t_list **stack_b);
int		pop(t_list **stack);
int		get_position(t_list *stack, int number);
void	sort_3(t_list	**stack);
void	sort_5(t_list **stack_a, t_list	**stack_b);
void	sort_all(t_list	**stack_a, t_list	**stack_b);
void	diff_range_sort(t_list **stack_a, t_list **stack_b, int n, int f);
void	rr(t_list	**stack_a, t_list **stack_b);
void	rrr(t_list	**stack_a, t_list **stack_b);
void	back_a(t_list **stack_a, t_list **stack_b);
#endif