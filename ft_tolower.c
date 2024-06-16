/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:41:05 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/16 21:22:21 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(char letter)
{
	return (letter >= 'A' && letter <= 'Z');
}

char	*ft_tolower(char *str)
{
	while (*str)
	{
		if (ft_isupper(*str))
			*str += 32;
		str++;
	}
	return (str);
}
