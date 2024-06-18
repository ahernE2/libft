/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:41:10 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/18 23:01:30 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	index_str;
	size_t	index_tf;

	if (!*to_find)
		return (str);
	index_str = 0;
	while (str[index_str] && index_str < len)
	{
		index_tf = 0;
		while
		(
			to_find[index_tf] &&
			str[index_str + index_tf] &&
			str[index_str + index_tf] == to_find[index_tf] &&
			(index_str + index_tf) < len
		)
			index_tf++;
		if (!to_find[index_tf])
			return (&str[index_str]);
		index_str++;
	}
	return (NULL);
}
