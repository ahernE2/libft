/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:22:53 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/12 22:18:26 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[index] && s2[index] && s1[index] == s2[index] && index < n - 1)
		index++;
	return (s1[index] - s2[index]);
}
