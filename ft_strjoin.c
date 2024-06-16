/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:46:30 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/16 23:11:56 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strcat(char *dest, char *src)
{
	size_t	index_dest;
	size_t	index_src;

	index_dest = ft_strlen(dest);
	index_src = 0;
	while (src[index_src])
	{
		dest[index_dest] = src[index_scr];
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	return (dest);
}

char	*str_join(char *s1, char *s2)
{
	size_t	size;
	char	*arr;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	arr = (char *)malloc(size * sizeof(char));
	if (!arr)
		return (NULL);
	ft_strcat(arr, s1);
	ft_strcat(arr, s2);
	return (arr);
}
