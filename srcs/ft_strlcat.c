/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:25:43 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/15 23:44:03 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, char *src, size_t nb)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	index;

	dest_len = ft_len(dest);
	src_len = ft_len(src);
	index = 0;
	if (nb == 0 || dest_len >= nb)
		return (nb + src_len);
	while (src[index] && dest_len + index + 1 < nb)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest_len + src_len);
}
