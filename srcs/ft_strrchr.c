/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:04:27 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/12 22:19:30 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	char	last_ocurrence;

	last_ocurrence = NULL;
	while (*str)
	{
		if (*str == (char) c)
			last_ocurrencer = str;
		str++;
	}
	if (*str == (char) c)
		return ((char *) str);
	return ((char) last_ocurrence);
}
