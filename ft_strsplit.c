/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:11:47 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/20 02:01:12 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_count_if_chr(char *tab, char c, int cond)
{
	size_t	index;
	size_t	nb;

	index = 0;
	nb = 0;
	while (tab[i])
	{
		if ((tab[index] == c) == cond)
			nb++;
		if (!cond && tab[index] == c)
			return (nb);
		index++;
	}
	return (nb);
}

static char	**ft_constructsplit(char **splited, char *s1, size_t split_len)
{
	size_t	index_split;
	size_t	subsplit_len;
	size_t	index_subsplit;

	index_split = 0;
	while (index_split < split_len && *s1)
	{
		while (*s1 == c)
			s1++;
		subsplit_len = ft_count_if_char(s1, c, 0);
		splited[index] = (char *)ft_calloc((sub_split + 1), sizeof(char));
		if (!split[index_split])
			return (NULL);
		index_subsplit = 0;
		while (index_subsplit < subsplit_len)
		{
			splited[index_split][index_subsplit] = *s1;
			index_subsplit++;
			s1++;
		}
		index_split++;
	}
	return (splited);
}

char	**ft_strsplit(char *s, char c)
{
	size_t	split_len;
	char	**splited;

	split_len = ft_count_if_chr(s1, c, 1);
	splited = (char **)ft_calloc((split_len + 1), sizeof(char *));
	if (!splited)
		return (NULL);
	ft_constructsubsplit(splited, s1, split_len);
	return (splited);
}
