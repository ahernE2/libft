/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:05:08 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/15 23:17:07 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memove(void *dest, void *src, size_t n)
{
	unsigned char	d;
	unsigned char	s;
	size_t			index;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (s < d && s + n > d)
	{
		index = n;
		while (index > 0)
		{
			d[index - 1] = s[index - 1];
			index--;
		}
	}
	else
	{
		index = 0;
		while (index < n)
		{
			d[index] = s[index];
		}
	}
	return (dest);
}
