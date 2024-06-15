/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:41:10 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/16 01:05:36 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	index_str;
	size_t	index_tf;

	if (*to_find == NULL)
		return ((char *) str);
	while (str[index_str] && index_str < len)
	{
		index_tf = 0;
		while (to_find[index_tf] == str[index_str + index_tf])
			index_tf++;
		if (to_find[index_tf] == NULL)
			return ((char *)&str[index_str]);
	}
	return (NULL);
}
