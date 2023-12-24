/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:46:13 by safadil           #+#    #+#             */
/*   Updated: 2023/12/23 22:29:39 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count(char	*s, char d)
{
	int	i;
	int	line;

	if (s[0] != d)
		line = 1;
	else
		line = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] == d && s[i + 1] != d && s[i + 1] != '\0')
			line++;
		i++;
	}
	return (line);
}

void	ft_free(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

static char	**dupl(char	*str, char d, int i, int j)
{
	char	**spl;
	int		start;
	int		finish;

	if (!str)
		return (NULL);
	spl = (char **)malloc (sizeof (char *) * (count(str, d) + 1));
	if (!spl)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == d)
			i++;
		start = i;
		while (str[i] && str[i] != d)
			i++;
		finish = i;
		if (j < count(str, d))
		{
			spl[j++] = ft_substr(str, start, finish - start);
			if (!spl[j - 1])
				return (ft_free(spl), NULL);
		}
	}
	return (spl[j] = NULL, spl);
}

char	**ft_split(char	*s, char c)
{
	char	**splt;
	int		i;
	int		j;

	i = 0;
	j = 0;
	splt = dupl(s, c, i, j);
	return (splt);
}
