/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 22:23:23 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/17 14:58:25 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*util;
	size_t			index;

	util = (unsigned char *) s;
	index = 0;
	while (index < n)
	{
		util[index] = NULL;
		index++;
	}
}
