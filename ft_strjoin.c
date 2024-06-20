/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:46:30 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/20 03:50:16 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str_join(char *s1, char *s2)
{
	size_t	t_size;
	char	*arr;

	t_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	arr = (char *)ft_calloc(t_size, sizeof(char));
	if (!arr)
		return (NULL);
	ft_strlcpy(arr, s1, t_size);
	ft_strlcat(arr, s2, t_size);
	return (arr);
}
