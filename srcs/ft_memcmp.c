/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:19:15 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/15 23:18:36 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			index;

	arr1 = (unsigned char *) s1;
	arr2 = (unsigned char *) s2;
	index = 0;
	while (index < n)
	{
		if (arr1[index] < arr2[index])
			return (-1);
		else if (arr1[index] > arr2[index])
			return (1);
	}
	return (0);
}
