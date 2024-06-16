/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 02:41:28 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/16 03:01:04 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *src, char *dest)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		i++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	size_t	str_len;
	char	*dup;

	str_len = ft_str_len(str);
	dup = (char *)malloc(str_len * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(str, dup)
	return (dup);
}
