/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:43:07 by safadil           #+#    #+#             */
/*   Updated: 2023/12/16 20:43:07 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parce(char	*str, t_list	**stacki)
{
	t_list	*node;	
	char	**spl;
	int		i;

	spl = ft_split(str, ' ');
	i = 0;
	if (spl == NULL || (duplicate(spl) == 0 || int_limit(spl) == 0))
	{
		ft_free(spl);
		write(1, "err\n", 5);
		exit(1);
	}
	i = 0;
	while (spl[i] != NULL)
	{
		node = creat_node(ft_atoi(spl[i]));
		addback_node (stacki, node);
		i++;
	}
	ft_free(spl);
}
