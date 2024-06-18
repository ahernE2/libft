/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 02:41:28 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/18 23:46:53 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	size_t	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(str) + 1;
	dup = (char *)malloc(size * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strcpy(dup, str);
	return (dup);
}
