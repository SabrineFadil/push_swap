/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:49:13 by safadil           #+#    #+#             */
/*   Updated: 2023/12/24 01:49:13 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	int_limit(char	**str)
{
	int		i;
	long	j;

	i = 0;
	while (str[i] != NULL)
	{
		j = ft_atoi(str[i]);
		if ((j < INT_MIN) || (j > INT_MAX))
			return (0);
		i++;
	}
	return (1);
}

int	duplicate(char **str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != NULL)
	{
		j = i + 1;
		while (str[j] != NULL)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_free1(char	**str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}
