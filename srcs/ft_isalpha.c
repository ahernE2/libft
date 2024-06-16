/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:50:08 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/16 22:31:04 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int letter)
{
	return (letter >= 'A' && letter <= 'Z');
}

static int	ft_islower(int letter)
{
	return (letter >= 'a' && letter <= 'z');
}

int	ft_isalpha(int param)
{
	return (ft_isupper(param) || ft_islower(param));
}
