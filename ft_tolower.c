/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:41:05 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/17 11:37:21 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(char letter)
{
	return (letter >= 'A' && letter <= 'Z');
}

int	ft_tolower(int param)
{
	if (ft_isupper(param))
		param += 32;
	return (param);
}
