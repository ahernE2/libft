/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:11:47 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/20 04:18:28 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_if_ifnot_chrchr(char *tab, char c, int cond)
{
	size_t	index;
	size_t	nb;

	index = 0;
	nb = 0;
	while (tab[index])
	{
		if ((tab[index] == c) == cond)
			nb++;
		if (!cond && tab[index] == c)
			return (nb);
		index++;
	}
	return (nb);
}

static char	**ft_constrsp(char **splited, char *s, char c, size_t len_split)
{
	size_t	index_split;
	size_t	len_subspl;
	size_t	index_subsplit;

	index_split = 0;
	while (index_split < len_split && *s)
	{
		while (*s == c)
			s++;
		len_subspl = ft_count_if_ifnot_chrchr(s, c, 0);
		splited[index_split] = (char *)ft_calloc(len_subspl + 1, sizeof(char));
		if (!splited[index_split])
			return (NULL);
		index_subsplit = 0;
		while (index_subsplit < len_subspl)
		{
			splited[index_split][index_subsplit] = *s;
			index_subsplit++;
			s++;
		}
		index_split++;
	}
	return (splited);
}

char	**ft_strsplit(char *s, char c)
{
	size_t	len_split;
	char	**splited;

	len_split = ft_count_if_ifnot_chrchr(s, c, 1);
	splited = (char **)ft_calloc((len_split + 1), sizeof(char *));
	if (!splited)
		return (NULL);
	ft_constrsp(splited, s, c, len_split);
	return (splited);
}
