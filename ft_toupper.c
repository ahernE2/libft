/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:42:38 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/17 11:40:01 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int letter)
{
	return (letter >= 'a' && letter <= 'z');
}

int	ft_toupper(int *param)
{
	if (ft_islower(param))
		param -= 32;
	return (param);
}
