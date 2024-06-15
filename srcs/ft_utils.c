/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:33:27 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/11 23:55:26 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(char letter)
{
	return (letter >= 'a' && letter <= 'z');
}

static int	ft_islower(char letter)
{
	return (letter >= 'A' && letter <= 'Z');
}
