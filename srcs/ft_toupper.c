/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:42:38 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/16 21:21:20 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(char letter)
{
	return (letter >= 'a' && letter <= 'z');
}

char	*ft_toupper(char *str)
{
	while (*str)
	{
		if (ft_islower(*str))
			*str -= 32;
		str++;
	}
	return (str);
}
