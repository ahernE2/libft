/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:07:46 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/20 03:32:57 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	char	*trim;
	size_t	index_trim;

	if (!s1 || !set)
		return (NULL);
	trim = (char *)ft_calloc((ft_strlen(s1) + 1), sizeof(char));
	if (!trim)
		return (NULL);
	index_trim = 0;
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
		{
			trim[index_trim] = *s1;
			index_trim++;
		}
		s1++;
	}
	return (trim);
}
