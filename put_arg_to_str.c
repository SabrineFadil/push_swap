/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_arg_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:44:51 by safadil           #+#    #+#             */
/*   Updated: 2023/12/16 23:44:51 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isdigitstr(char *str)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if ((str[i] == '-') || (str[i] == '+'))
		{
			i++;
			if (str[i] == ' ')
				return (0);
		}
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*fix_args(char	**spl)
{
	char	*res;
	int		i;

	i = 0;
	res = ft_strdup("");
	while (spl[i] != NULL)
	{
		res = ft_strjoin(res, spl[i]);
		res = ft_strjoin(res, " ");
		i++;
	}
	return (res);
}

char	*joinarguments(int cs, char	**s)
{
	char	*result;
	int		argi;
	char	**splarg;
	char	*fix_arg;

	result = ft_strdup("");
	argi = 1;
	result[0] = '\0';
	while (argi < cs)
	{
		splarg = ft_split(s[argi], ' ');
		fix_arg = fix_args(splarg);
		result = ft_strjoin(result, fix_arg);
		free(fix_arg);
		ft_free(splarg);
		argi++;
	}
	if (!isdigitstr(result))
	{
		write (1, "err for non dig\n", 17);
		exit(1);
	}
	return (result);
}
