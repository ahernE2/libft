/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 01:32:10 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/16 01:45:44 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
	size_t	t_size;
	char	*arr;
	size_t	index;
	
	t_size = nmemb * size;
	arr = (char *)malloc(t_size);
	if (arr == NULL)
		return (NULL);
	while(index < t_size)
	{
		arr[index] = 0;
		index++;
	}
	return ((void *)arr);
}
