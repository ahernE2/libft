/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 01:32:10 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/16 22:31:54 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	t_size;
	void	*arr;

	t_size = nmemb * size;
	arr = malloc(t_size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, t_size);
	return (arr);
}
