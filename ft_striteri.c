/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 20:18:21 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/22 20:22:04 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			s_len;
	unsigned int	index;

	len_s = ft_strlen(s_len);
	index = 0;
	while (s[index])
	{
		f(index, s);
		index++;
	}
}
